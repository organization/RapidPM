#ifndef ZVAL_REF_H
#define ZVAL_REF_H

#include <Zend/zend.h>
#include <Zend/zend_API.h>

void ZVAL_REF(zval* dst, zval* src);

#endif
