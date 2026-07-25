PORTNAME=	coverage
PORTVERSION=	7.16.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Code coverage measurement for Python
WWW=		https://coverage.readthedocs.io/

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR}

USES=		python:3.10+ pytest

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flaky>0:devel/py-flaky@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hypothesis>0:devel/py-hypothesis@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>0:textproc/py-pygments@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-xdist>0:devel/py-pytest-xdist@${PY_FLAVOR} \

USE_PYTHON=	autoplist concurrent pep517

OPTIONS_DEFINE=	TOML
OPTIONS_DEFAULT=TOML
TOML_DESC=	Enable pyproject.toml support

TOML_RUN_DEPENDS=	${PY_TOMLI}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/coverage/tracer*.so

.include <bsd.port.mk>
