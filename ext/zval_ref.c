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

void zval_ref_make(zval* dst) {
    /*
    int refcount_gc = GC_REFCOUNT(dst);

    ZVAL_MAKE_REF_EX(dst, 1);

    zval_ptr_dtor(&dst);
    MAKE_STD_ZVAL(dst);

    ZVAL_ZVAL(dst, src, 1, 0);
    GC_SET_REFCOUNT(dst, refcount_gc);
    */
    ZVAL_NEW_REF(dst, dst);
}
