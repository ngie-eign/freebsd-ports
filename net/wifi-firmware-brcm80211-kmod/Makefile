MASTERDIR=	${.CURDIR:H}/wifi-firmware-kmod

MASTER_SITES=	http://people.freebsd.org/~ngie/distfiles/

LICENSE_NAME=	Broadcomm firmware license (${FWDRV})
LICENSE_FILE=	LICENCE.broadcom_bcm43xx

FWDRV=		brcm
FWSUBDIR=	brcm
FWDRV_VERSION=	20260622

WHENCE_REGEX=	(brcmfmac|brcmsmac) -.*

FIRMWARE_DEFINITIONS_MK=	firmware_definitions.mk

USES+=		tar:xz

.sinclude "${FIRMWARE_DEFINITIONS_MK}"

## Logic for preparing a new release follows.
#
# This exists for reproducibility and verification purposes.
UPSTREAM_GIT_REPO=	https://gitlab.com/kernel-firmware/linux-firmware
# The non-logical tag for `FWDRV_VERSION`.
#
# Specifying this commit explicitly avoids some supply chain attacks in the event the
# upstream vendor is ever compromised.
UPSTREAM_GIT_COMMIT=	b2722d24
CHECKOUT_DIRECTORY=	${WRKDIR}/linux-firmware-${FWDRV_VERSION}.git/

prepare-distfile: .PHONY
	@${RM} -Rf "${CHECKOUT_DIRECTORY}"
	@git clone --no-checkout \
	    --filter=blob:none ${UPSTREAM_GIT_REPO} \
	    ${CHECKOUT_DIRECTORY}
	@( \
	 set -e; \
	 cd ${CHECKOUT_DIRECTORY}; \
	 git sparse-checkout set; \
	 git sparse-checkout add LICENSES ${SUBDIRS.${FWDRV}}; \
	 git checkout ${UPSTREAM_GIT_COMMIT})
	# First, we need to generate ${FIRMWARE_DEFINITIONS_MK} .
	#
	# This goes through the process of parsing WHENCE and building the list
	# of files that must exist in order to build a corresponding high-level
	# (`${FWDRV}`) distfile.
	@whence-to-freebsd-port \
	    -i "${CHECKOUT_DIRECTORY}/${WHENCE_FILE}" \
	    -o "${FIRMWARE_DEFINITIONS_MK}" \
	    -e "${WHENCE_REGEX}"
	@${MKDIR} "${DISTDIR}/${DIST_SUBDIR}"
	@${EXTRACT_CMD} \
	    -s '/^\./${DISTNAME}/' \
	    --exclude '.git' \
	    -cJpvf ${DISTDIR}/${DIST_SUBDIR}/${DISTNAME}${EXTRACT_SUFX} \
	    -C "${CHECKOUT_DIRECTORY}" .

.include "${MASTERDIR}/Makefile.2.inc"
