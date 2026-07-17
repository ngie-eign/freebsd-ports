PORTNAME=	wifi-firmware-${FWDRV}-kmod
PORTVERSION=	${FWDRV_VERSION}
#PORTREVISION?=	0
CATEGORIES=	net
_MASTER_SITES?=	https://git.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/ \
		https://fra.source.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/ \
		https://sea.source.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/ \
		https://sg2.source.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/ \
		https://sto.source.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/ \
		https://tor.source.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/plain/

MAINTAINER?=	ngie@FreeBSD.org
COMMENT=	Firmware modules for the ${FWDRV} (${FLAVOR}) WiFi NIC driver
WWW?=		https://linux-firmware.git/tree/${FWSUBDIR}

FWDRV_VERSION?=	0
FWDRV?=		base

LICENSE_NAME?=	firmware license (${FWDRV})
LICENSE_PERMS?=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

LICENSE_COMB=	multi
LICENSE=	primary whence
_LICENSE_DIR=	${LOCALBASE}/share/licenses/${PKGNAME}

WHENCE_FILE=	WHENCE

# Port primary license.
LICENSE_DIR_ROOT=	${WRKSRC}/LICENSES

LICENSE_FILE_primary=	${LICENSE_DIR_ROOT}/${LICENSE_FILE}
LICENSE_NAME_primary=	${LICENSE_NAME}

# Add WHENCE file next to license where it makes sense despite not being a license.
LICENSE_FILE_whence=	${WRKSRC}/${WHENCE_FILE}
LICENSE_NAME_whence=	Origin and licensing information for linux-firmware files

# Split things into the full package (driver name) and more specific flavors.
FLAVORS=	${FWDRV} \
		${FWSUBS}

# Generate the conflicts list.
.for f in ${FWSUBS}
${PORTNAME}_CONFLICTS_INSTALL+=	${PORTNAME}-${f}
${f}_PKGNAMESUFFIX=		-${f}
${f}_CONFLICTS_INSTALL=		${PORTNAME}
.endfor

.if !defined(NOT_FOR_ARCHS)
ONLY_FOR_ARCHS?=	aarch64 amd64 i386 riscv64
ONLY_FOR_ARCHS_REASON=	LinuxKPI driver only available for these architectures
.endif

USES+=		uidfix

.include <bsd.port.pre.mk>

# Add extra license files.
.for _n in ${LICENSE_FILES.${FLAVOR}:range}
license_file:=		${WRKSRC}/LICENSES/${LICENSE_FILES.${FLAVOR}:[${_n}]}
.if ${LICENSE_FILE_primary} != ${license_file}
LICENSE+=		extra${_n}
LICENSE_FILE_extra${_n}= ${license_file}
LICENSE_NAME_extra${_n}= ${LICENSE_NAME} (additional firmware license)
.endif
.endfor

.for _l in ${LICENSE}
_LICENSE_DIR_${_l}=	${_LICENSE_DIR}
LICENSE_PERMS_${_l}=	${LICENSE_PERMS}
.endfor

# src.git main 479905a1ed26c54ef29cdff65cf25f7feade654b (stable/14 2ca7b03d6275)
# allows direct loading of firmware files.

BOOTFWDIR?=		/boot/firmware
BOOT_LOADERCONFD=	/boot/loader.conf.d
_SHAREMODE=	0444

NO_BUILD=	yes
NO_INSTALL=	yes
NO_TEST=	yes

PLIST_DIRS+=	${BOOT_LOADERCONFD}

# IMPORTANT: The following target does a number of things when calling
# `ECHO_CMD`/`DIRNAME` that would be considered shell injection risks with
# unsanitized input.
#
# In reality though, the WHENCE file's contents (as written today) are
# sanitized (quoted or escaped), so passing them through shell utilities as-is
# does the job of "dequoting" the entries, so the files are deposited in the
# right locations and recorded in the plist properly.
post-install:
	@${MKDIR} ${STAGEDIR}${BOOT_LOADERCONFD}
	# Do we need to set a tunable?
	# At the moment we consider these temporary hacks.
	# Otherwise we need a better way to express this per-port/-flavor.
.if defined(COMPAT_LINUXKPI_SKB_MEM_LIMIT) && ${COMPAT_LINUXKPI_SKB_MEM_LIMIT} > 0
	@${MKDIR} ${STAGEDIR}/${BOOT_LOADERCONFD}
	@${ECHO_CMD} "compat.linuxkpi.skb.mem_limit=${COMPAT_LINUXKPI_SKB_MEM_LIMIT}" >> ${STAGEDIR}${BOOT_LOADERCONFD}/${FLAVOR}.conf
	@${ECHO_CMD} "${BOOT_LOADERCONFD}/${FLAVOR}.conf" >> ${TMPPLIST}
.endif
.if defined(COMPAT_LINUXKPI_HWCRYPTO_HT_VHT) && (${COMPAT_LINUXKPI_HWCRYPTO_HT_VHT:M${FLAVOR}} != "")
	@${MKDIR} ${STAGEDIR}/${BOOT_LOADERCONFD}
	@${ECHO_CMD} "compat.linuxkpi.80211.hw_crypto=1" >> ${STAGEDIR}${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf
	# "iwlwifi_11n_disable" one is iwlwifi specific; for all the others bz created them homogeneously.
	# Setting an unknown kenv does not hurt.
	@${ECHO_CMD} "compat.linuxkpi.${FWDRV}_11n_disable=0" >> ${STAGEDIR}${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf
	@${ECHO_CMD} "compat.linuxkpi.${FWDRV}_disable_11n=0" >> ${STAGEDIR}${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf
	@${ECHO_CMD} "compat.linuxkpi.${FWDRV}_disable_11ac=0" >> ${STAGEDIR}${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf
	@${ECHO_CMD} "${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf" >> ${TMPPLIST}
.endif
	# Firmware bundle file.
.for _f in ${FILES.${FLAVOR}}
	#@${ECHO_CMD} @dir `${DIRNAME} ${_f}` >> ${TMPPLIST}
	@${ECHO_CMD} ${BOOTFWDIR}/${_f} >> ${TMPPLIST}
	@${MKDIR} `${DIRNAME} ${STAGEDIR}${BOOTFWDIR}/${_f}`
	@${INSTALL_DATA} ${WRKSRC}/${_f} ${STAGEDIR}${BOOTFWDIR}/${_f}
.endfor
	# Licenses
.for _l in ${LICENSE}
	#@${ECHO_CMD} @dir `${DIRNAME} ${${_l}}` >> ${TMPPLIST}
	@${MKDIR} ${STAGEDIR}${_LICENSE_DIR_${_l}}
	@${CP} ${LICENSE_FILE_${_l}} ${STAGEDIR}${_LICENSE_DIR_${_l}}/.
.endfor
	# Symlinks
.for _s _d in ${LINKS.${FLAVOR}}
	#@${ECHO_CMD} @dir `${DIRNAME} ${_d}` >> ${TMPPLIST}
	@${ECHO_CMD} ${BOOTFWDIR}/${_d} >> ${TMPPLIST}
	@${MKDIR} `${DIRNAME} ${STAGEDIR}${BOOTFWDIR}/${_d}`
	@${LN} -sf ${_s} ${STAGEDIR}${BOOTFWDIR}/${_d}
.endfor
.if defined(COMPAT_LINUXKPI_SKB_MEM_LIMIT) && ${COMPAT_LINUXKPI_SKB_MEM_LIMIT} > 0
	@${MKDIR} ${STAGEDIR}/${BOOT_LOADERCONFD}
	@${INSTALL_DATA} ${WRKSRC}/${BOOT_LOADERCONFD}/${FLAVOR}.conf ${STAGEDIR}/${BOOT_LOADERCONFD}/${FLAVOR}.conf
.endif
.if defined(COMPAT_LINUXKPI_HWCRYPTO_HT_VHT) && (${COMPAT_LINUXKPI_HWCRYPTO_HT_VHT:M${FLAVOR}} != "")
	@${MKDIR} ${STAGEDIR}/${BOOT_LOADERCONFD}
	@${INSTALL_DATA} ${WRKSRC}/${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf ${STAGEDIR}/${BOOT_LOADERCONFD}/${FWDRV}-${FLAVOR}.conf
.endif
.for _d in ${SUBDIRS.${FLAVOR}}
	@${ECHO_CMD} @dir ${BOOTFWDIR}/${_d} >> ${TMPPLIST}
.endfor
	# Remove duplicate @dir entries
	@${SORT} -u ${TMPPLIST} >> ${TMPPLIST}.bk && ${MV} ${TMPPLIST}.bk ${TMPPLIST}

.include <bsd.port.post.mk>
