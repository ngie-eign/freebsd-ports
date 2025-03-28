PORTNAME=	tmux-plugin-manager
PORTVERSION=	3.1.0
CATEGORIES=	sysutils
MASTER_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/archive/refs/tags/
DISTFILES=	v${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	ngie@FreeBSD.org
COMMENT=	Tmux Plugin Manager
WWW=		https://tmux.github.io/

LICENSE=	MIT

USE_GITHUB=	nodefault
GH_ACCOUNT=	tmux-plugins
GH_PROJECT=	tpm

RUN_DEPENDS+=	git:devel/git \
		bash:shells/bash \
		tmux:sysutils/tmux

NO_BUILD=	yes

NO_INSTALL=	yes

PLIST_SUB+=	DATADIR=${DATADIR}

WRKSRC=		${WRKDIR}/tpm-${PORTVERSION}

STRIP=

post-install:

	@${MKDIR} ${STAGEDIR}/${DATADIR}/bin
.for script in clean_plugins install_plugins update_plugins
	@${INSTALL_PROGRAM} ${WRKSRC}/bin/${script} \
	    ${STAGEDIR}/${DATADIR}/bin/${script}
.endfor

	@${MKDIR} ${STAGEDIR}/${DATADIR}/bindings
.for script in clean_plugins install_plugins update_plugins
	@${INSTALL_PROGRAM} ${WRKSRC}/bindings/${script} \
	    ${STAGEDIR}/${DATADIR}/bindings/${script}
.endfor

	@${MKDIR} ${STAGEDIR}/${DATADIR}/scripts
.for script in check_tmux_version.sh clean_plugins.sh install_plugins.sh \
	       source_plugins.sh update_plugin.sh update_plugin_prompt_handler.sh \
	       variables.sh
	@${INSTALL_PROGRAM} ${WRKSRC}/scripts/${script} \
	    ${STAGEDIR}/${DATADIR}/scripts/${script}
.endfor

	@${MKDIR} ${STAGEDIR}/${DATADIR}/scripts/helpers
.for script in plugin_functions.sh shell_echo_functions.sh \
	       tmux_echo_functions.sh tmux_utils.sh utility.sh
	@${INSTALL_DATA} ${WRKSRC}/scripts/helpers/${script} \
	    ${STAGEDIR}/${DATADIR}/scripts/helpers/${script}
.endfor

	@${INSTALL_PROGRAM} ${WRKSRC}/tpm ${STAGEDIR}/${DATADIR}/tpm

.include <bsd.port.mk>
