PORTNAME=	pytest-cov
PORTVERSION=	7.1.0
# The maintainer changed the naming scheme in 7.0 to use a `_` instead of a `-`.
DISTFILES=	${DISTNAME:C/pytest\-cov/pytest_cov/}-${DISTVERSION}${EXTRACT_SUFX}
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/-/_/}-${PORTVERSION}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Pytest plugin for measuring coverage
WWW=		https://github.com/pytest-dev/pytest-cov

WRKSRC=		${WRKDIR}/${DISTNAME:C/pytest\-cov/pytest_cov/}

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hatchling>0:devel/py-hatchling@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hatch-fancy-pypi-readme>0:devel/py-hatch-fancy-pypi-readme@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=7.10.6:devel/py-coverage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>=7:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pluggy>=1.2:devel/py-pluggy@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-xdist>0:devel/py-pytest-xdist@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}virtualenv>0:devel/py-virtualenv@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517 pytest

NO_ARCH=	yes

# The celery tests blow up with certain kombu build options [1] and if
# devel/py-celery is not installed [2]:
# 1. <PENDING>
# 2. https://github.com/pytest-dev/pytest-cov/issues/750
TEST_ARGS+=	-k 'not celery' -p pytester

.include <bsd.port.mk>
