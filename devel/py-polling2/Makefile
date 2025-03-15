PORTNAME=	polling2
PORTVERSION=	0.5.0
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ngie@FreeBSD.org
COMMENT=	Polling2: Never write another polling function
WWW=		https://polling2.readthedocs.io

LICENSE=	MIT

USES=		python pytest
USE_GITHUB=	yes
GH_ACCOUNT=	ddmee
GH_PROJECT=	polling2
GH_TAGNAME=	379fcf9
USE_PYTHON=	pep517 autoplist distutils

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR}

NO_ARCH=	yes

.include <bsd.port.mk>
