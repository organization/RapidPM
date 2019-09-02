#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>
#include "php.h"
#include "php_ext.h"
#include "php_main.h"
#include "ext.h"
#include "kernel/main.h"
#include "kernel/exit.h"
#include <Zend/zend.h>
#include <Zend/zend_API.h>
#include "zval_ref.h"

#include "macro.h"

void zval_ref_read(zval* dst) {
    if(Z_ISREF_P(dst)) {
        ZVAL_NEW_REF(dst, Z_REFVAL_P(dst));
    }
}
