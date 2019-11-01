
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "math.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


/**
 * This file is part of RapidPM.
 * 
 * RapidPM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * RapidPM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with RapidPM.  If not, see <https://www.gnu.org/licenses/>.
 *
*/
ZEPHIR_INIT_CLASS(Pocketmine_Math_VectorMath) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, VectorMath, pocketmine, math_vectormath, pocketmine_math_vectormath_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;

}

PHP_METHOD(Pocketmine_Math_VectorMath, getDirection2D) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *azimuth_param = NULL, _0, _1, _2, _3;
	double azimuth;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &azimuth_param);

	azimuth = zephir_get_doubleval(azimuth_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZVAL_DOUBLE(&_0, azimuth);
	ZVAL_DOUBLE(&_1, azimuth);
	ZVAL_DOUBLE(&_2, cos(azimuth));
	ZVAL_DOUBLE(&_3, sin(azimuth));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_VectorMath_getDirection2D_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *azimuth_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *azimuth_param = NULL, _0, _1, _2, _3;
	double azimuth;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	azimuth_param = azimuth_param_ext;


	azimuth = zephir_get_doubleval(azimuth_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZVAL_DOUBLE(&_0, azimuth);
	ZVAL_DOUBLE(&_1, azimuth);
	ZVAL_DOUBLE(&_2, cos(azimuth));
	ZVAL_DOUBLE(&_3, sin(azimuth));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

