PORTNAME=	sp800-90b-entropyassessment
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.8
CATEGORIES=	security

MAINTAINER=	ngie@FreeBSD.org
COMMENT=	NIST SP800-90B_EntropyAssessment C++package
WWW=		https://github.com/xtensor-stack/xsimd

USES=		compiler:c++11-lang gmake

LIB_DEPENDS+=	\
	libdivsufsort.so:math/libdivsufsort \
	libjsoncpp.so:devel/jsoncpp \
	libgmp.so:math/gmp \
	libmpfr.so:math/mpfr

OPTIONS_DEFINE=	DOCS EXAMPLES

USE_GITHUB=	yes
GH_ACCOUNT=	usnistgov
GH_PROJECT=	SP800-90B_EntropyAssessment
GH_COMMIT=	68ed165

CXXFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ENV+=	CXXFLAGS="${CXXFLAGS}" \
		LDFLAGS="${LDFLAGS}"

do-build:
	@cd ${BUILD_WRKSRC}/cpp && ${SETENV} ${MAKE_ENV} ${GMAKE}

# The project doesn't provide a functional install target.
do-install:
	@${DO_NADA}

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/bin
	cd ${WRKSRC}/cpp && ${COPYTREE_BIN} ea_\* ${STAGEDIR}${PREFIX}/bin

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/bin && ${COPYTREE_SHARE} \*.bin ${STAGEDIR}${EXAMPLESDIR}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
