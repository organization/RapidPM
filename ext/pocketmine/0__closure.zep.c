
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(pocketmine_0__closure) {

	ZEPHIR_REGISTER_CLASS(pocketmine, 0__closure, pocketmine, 0__closure, pocketmine_0__closure_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;

}

PHP_METHOD(pocketmine_0__closure, __invoke) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *offset, offset_sub, temp, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&temp);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &offset);



	ZEPHIR_CPY_WRT(&temp, this_ptr);
	zephir_update_property_zval(this_ptr, SL("offset"), offset);
	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, &temp, SL("offset"), PH_NOISY_CC);
	RETURN_CCTOR(&_0);

}

