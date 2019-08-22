
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/math.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"


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
ZEPHIR_INIT_CLASS(Pocketmine_Math_Vector2) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Vector2, pocketmine, math_vector2, pocketmine_math_vector2_method_entry, 0);

	/** @var float */
	zend_declare_property_null(pocketmine_math_vector2_ce, SL("x"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_null(pocketmine_math_vector2_ce, SL("y"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector2, getX) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "x");

}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector2, getY) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "y");

}

PHP_METHOD(Pocketmine_Math_Vector2, __construct) {

	zval *x_param = NULL, *y_param = NULL, _0;
	double x, y;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(0, 2, &x_param, &y_param);

	if (!x_param) {
		x = (double) 0;
	} else {
		x = zephir_get_doubleval(x_param);
	}
	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("x"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("y"), &_0);

}

PHP_METHOD(Pocketmine_Math_Vector2, getFloorX) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0 TSRMLS_CC));

}

PHP_METHOD(Pocketmine_Math_Vector2, getFloorY) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0 TSRMLS_CC));

}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return Vector2
 */
PHP_METHOD(Pocketmine_Math_Vector2, add) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$4, _3$$4, _4$$4, _5$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);

	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce TSRMLS_CC)) {
		zephir_read_property(&_0$$3, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 7, &_0$$3, &_1$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		object_init_ex(return_value, pocketmine_math_vector2_ce);
		zephir_read_property(&_2$$4, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_3$$4, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_4$$4, (zephir_get_numberval(&_2$$4) + zephir_get_doubleval(x)));
		ZVAL_DOUBLE(&_5$$4, (zephir_get_numberval(&_3$$4) + (double) (y)));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_4$$4, &_5$$4);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return Vector2
 */
PHP_METHOD(Pocketmine_Math_Vector2, subtract) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x, x_sub, *y_param = NULL, _0$$3, _1$$3, _3$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);

	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce TSRMLS_CC)) {
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_read_property(&_0$$3, x, SL("x"), PH_NOISY_CC);
		zephir_negate(&_0$$3 TSRMLS_CC);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, SL("y"), PH_NOISY_CC);
		zephir_negate(&_1$$3 TSRMLS_CC);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_2, 0, &_0$$3, &_1$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		zephir_negate(x TSRMLS_CC);
		ZVAL_DOUBLE(&_3$$4, -y);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_2, 7, x, &_3$$4);
		zephir_check_call_status();
		RETURN_MM();
	}

}

PHP_METHOD(Pocketmine_Math_Vector2, ceil) {

	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_ceil(&_0 TSRMLS_CC));
	ZVAL_LONG(&_3, (int) zephir_ceil(&_1 TSRMLS_CC));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, floor) {

	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_floor(&_0 TSRMLS_CC));
	ZVAL_LONG(&_3, (int) zephir_floor(&_1 TSRMLS_CC));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, round) {

	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZEPHIR_INIT_VAR(&_0);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_0, &_1, NULL, NULL TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	zephir_read_property(&_3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_2, &_3, NULL, NULL TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, abs) {

	zval _0, _1, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_2 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", &_2, 9, &_0);
	zephir_check_call_status();
	zephir_read_property(&_3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_4, "abs", &_2, 9, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_1, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, multiply) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);

	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, (zephir_get_numberval(&_0) * (double) (number)));
	ZVAL_DOUBLE(&_3, (zephir_get_numberval(&_1) * (double) (number)));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, divide) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);

	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, zephir_safe_div_zval_double(&_0, number TSRMLS_CC));
	ZVAL_DOUBLE(&_3, zephir_safe_div_zval_double(&_1, number TSRMLS_CC));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Math_Vector2, distance) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$3, _4$$4, _5$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);

	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce TSRMLS_CC)) {
		zephir_read_property(&_1$$3, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_2$$3, x, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_0$$3, this_ptr, "distancesquared", &_3, 0, &_1$$3, &_2$$3);
		zephir_check_call_status();
		RETURN_MM_DOUBLE(zephir_sqrt(&_0$$3 TSRMLS_CC));
	} else {
		ZVAL_DOUBLE(&_5$$4, y);
		ZEPHIR_CALL_METHOD(&_4$$4, this_ptr, "distancesquared", &_3, 0, x, &_5$$4);
		zephir_check_call_status();
		RETURN_MM_DOUBLE(zephir_sqrt(&_4$$4 TSRMLS_CC));
	}

}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Math_Vector2, distanceSquared) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$4, _3$$4, _4$$4, _5$$4, _6$$4, _7$$4, _8$$4, _9$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);

	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce TSRMLS_CC)) {
		zephir_read_property(&_0$$3, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "distancesquared", NULL, 10, &_0$$3, &_1$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		ZEPHIR_INIT_VAR(&_2$$4);
		zephir_read_property(&_3$$4, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_4$$4, (zephir_get_numberval(&_3$$4) - zephir_get_doubleval(x)));
		ZVAL_LONG(&_5$$4, 2);
		zephir_pow_function(&_2$$4, &_4$$4, &_5$$4);
		ZEPHIR_INIT_VAR(&_6$$4);
		zephir_read_property(&_7$$4, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_8$$4, (zephir_get_numberval(&_7$$4) - (double) (y)));
		ZVAL_LONG(&_9$$4, 2);
		zephir_pow_function(&_6$$4, &_8$$4, &_9$$4);
		zephir_add_function(return_value, &_2$$4, &_6$$4);
		RETURN_MM();
	}

}

PHP_METHOD(Pocketmine_Math_Vector2, length) {

	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "lengthsquared", NULL, 0);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0 TSRMLS_CC));

}

PHP_METHOD(Pocketmine_Math_Vector2, lengthSquared) {

	zval _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_2);
	mul_function(&_2, &_0, &_1 TSRMLS_CC);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_3);
	mul_function(&_3, &_0, &_1 TSRMLS_CC);
	zephir_add_function(return_value, &_2, &_3);
	return;

}

PHP_METHOD(Pocketmine_Math_Vector2, normalize) {

	zval len, _1, _2, _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&len);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_0$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&len, this_ptr, "lengthsquared", NULL, 0);
	zephir_check_call_status();
	if (ZEPHIR_GT_LONG(&len, 0)) {
		ZVAL_DOUBLE(&_0$$3, zephir_sqrt(&len TSRMLS_CC));
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "divide", NULL, 0, &_0$$3);
		zephir_check_call_status();
		RETURN_MM();
	}
	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 8, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector2, dot) {

	zval *v, v_sub, _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	zephir_fetch_params_without_memory_grow(1, 0, &v);



	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_2);
	mul_function(&_2, &_0, &_1 TSRMLS_CC);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_3);
	mul_function(&_3, &_0, &_1 TSRMLS_CC);
	zephir_add_function(return_value, &_2, &_3);
	return;

}

PHP_METHOD(Pocketmine_Math_Vector2, __toString) {

	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CONCAT_SVSVS(return_value, "Vector2(x=", &_0, ",y=", &_1, ")");
	return;

}

