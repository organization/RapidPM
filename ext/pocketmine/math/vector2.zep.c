
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
ZEPHIR_INIT_CLASS(Pocketmine_Math_Vector2)
{
	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Vector2, pocketmine, math_vector2, pocketmine_math_vector2_method_entry, 0);

	/** @var float */
	zend_declare_property_null(pocketmine_math_vector2_ce, SL("x"), ZEND_ACC_PUBLIC);
	/** @var float */
	zend_declare_property_null(pocketmine_math_vector2_ce, SL("y"), ZEND_ACC_PUBLIC);
	return SUCCESS;
}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector2, getX)
{
	zval *this_ptr = getThis();



	RETURN_MEMBER(getThis(), "x");
}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector2, getY)
{
	zval *this_ptr = getThis();



	RETURN_MEMBER(getThis(), "y");
}

PHP_METHOD(Pocketmine_Math_Vector2, __construct)
{
	zval *x_param = NULL, *y_param = NULL, _0;
	double x, y;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
#endif


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
	zephir_update_property_zval(this_ptr, ZEND_STRL("x"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, ZEND_STRL("y"), &_0);
}

PHP_METHOD(Pocketmine_Math_Vector2, getFloorX)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));
}

PHP_METHOD(Pocketmine_Math_Vector2, getFloorY)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));
}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return Vector2
 */
PHP_METHOD(Pocketmine_Math_Vector2, add)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x = NULL, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$3, _3$$3, _4$$4, _5$$4, _6$$4, _7$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(x)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);
	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce)) {
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_read_property(&_0$$3, x, ZEND_STRL("x"), PH_NOISY_CC);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, ZEND_STRL("y"), PH_NOISY_CC);
		ZVAL_DOUBLE(&_2$$3, zephir_get_doubleval(&_0$$3));
		ZVAL_DOUBLE(&_3$$3, zephir_get_doubleval(&_1$$3));
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 6, &_2$$3, &_3$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		object_init_ex(return_value, pocketmine_math_vector2_ce);
		zephir_read_property(&_4$$4, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$4, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_6$$4, (zephir_get_numberval(&_4$$4) + zephir_get_doubleval(x)));
		ZVAL_DOUBLE(&_7$$4, (zephir_get_numberval(&_5$$4) + (double) (y)));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_6$$4, &_7$$4);
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
PHP_METHOD(Pocketmine_Math_Vector2, subtract)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_4 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x = NULL, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$3, _3$$3, _5$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_5$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(x)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);
	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce)) {
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_read_property(&_0$$3, x, ZEND_STRL("x"), PH_NOISY_CC);
		zephir_negate(&_0$$3);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, ZEND_STRL("y"), PH_NOISY_CC);
		zephir_negate(&_1$$3);
		ZVAL_DOUBLE(&_2$$3, zephir_get_doubleval(&_0$$3));
		ZVAL_DOUBLE(&_3$$3, zephir_get_doubleval(&_1$$3));
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_4, 0, &_2$$3, &_3$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		zephir_negate(x);
		ZVAL_DOUBLE(&_5$$4, -y);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_4, 6, x, &_5$$4);
		zephir_check_call_status();
		RETURN_MM();
	}
}

PHP_METHOD(Pocketmine_Math_Vector2, ceil)
{
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
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_ceil(&_0));
	ZVAL_LONG(&_3, (int) zephir_ceil(&_1));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, floor)
{
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
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_floor(&_0));
	ZVAL_LONG(&_3, (int) zephir_floor(&_1));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, round)
{
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
	zephir_read_property(&_1, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_0, &_1, NULL, NULL);
	ZEPHIR_INIT_VAR(&_2);
	zephir_read_property(&_3, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_2, &_3, NULL, NULL);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_0, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, abs)
{
	zval _0, _1, _3, _4, _5, _6;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_2 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);


	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", &_2, 8, &_0);
	zephir_check_call_status();
	zephir_read_property(&_3, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_4, "abs", &_2, 8, &_3);
	zephir_check_call_status();
	ZVAL_DOUBLE(&_5, zephir_get_doubleval(&_1));
	ZVAL_DOUBLE(&_6, zephir_get_doubleval(&_4));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_5, &_6);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, multiply)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(number)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);
	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, (zephir_get_numberval(&_0) * (double) (number)));
	ZVAL_DOUBLE(&_3, (zephir_get_numberval(&_1) * (double) (number)));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, divide)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(number)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);
	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, zephir_safe_div_zval_double(&_0, number));
	ZVAL_DOUBLE(&_3, zephir_safe_div_zval_double(&_1, number));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Math_Vector2, distance)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x = NULL, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$3, _3$$3, _4$$3, _6$$4, _7$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(x)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);
	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce)) {
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, ZEND_STRL("x"), PH_NOISY_CC);
		ZEPHIR_OBS_VAR(&_2$$3);
		zephir_read_property(&_2$$3, x, ZEND_STRL("y"), PH_NOISY_CC);
		ZVAL_DOUBLE(&_3$$3, zephir_get_doubleval(&_1$$3));
		ZVAL_DOUBLE(&_4$$3, zephir_get_doubleval(&_2$$3));
		ZEPHIR_CALL_METHOD(&_0$$3, this_ptr, "distancesquared", &_5, 0, &_3$$3, &_4$$3);
		zephir_check_call_status();
		RETURN_MM_DOUBLE(zephir_sqrt(&_0$$3));
	} else {
		ZVAL_DOUBLE(&_7$$4, y);
		ZEPHIR_CALL_METHOD(&_6$$4, this_ptr, "distancesquared", &_5, 0, x, &_7$$4);
		zephir_check_call_status();
		RETURN_MM_DOUBLE(zephir_sqrt(&_6$$4));
	}
}

/**
 * @param Vector2|float $x
 * @param float         $y
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Math_Vector2, distanceSquared)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y;
	zval *x = NULL, x_sub, *y_param = NULL, _0$$3, _1$$3, _2$$3, _3$$3, _4$$4, _5$$4, _6$$4, _7$$4, _8$$4, _9$$4, _10$$4, _11$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(x)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &x, &y_param);
	if (!y_param) {
		y = (double) 0;
	} else {
		y = zephir_get_doubleval(y_param);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce)) {
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_read_property(&_0$$3, x, ZEND_STRL("x"), PH_NOISY_CC);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, ZEND_STRL("y"), PH_NOISY_CC);
		ZVAL_DOUBLE(&_2$$3, zephir_get_doubleval(&_0$$3));
		ZVAL_DOUBLE(&_3$$3, zephir_get_doubleval(&_1$$3));
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "distancesquared", NULL, 9, &_2$$3, &_3$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		ZEPHIR_INIT_VAR(&_4$$4);
		zephir_read_property(&_5$$4, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_6$$4, (zephir_get_numberval(&_5$$4) - zephir_get_doubleval(x)));
		ZVAL_LONG(&_7$$4, 2);
		zephir_pow_function(&_4$$4, &_6$$4, &_7$$4);
		ZEPHIR_INIT_VAR(&_8$$4);
		zephir_read_property(&_9$$4, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_DOUBLE(&_10$$4, (zephir_get_numberval(&_9$$4) - (double) (y)));
		ZVAL_LONG(&_11$$4, 2);
		zephir_pow_function(&_8$$4, &_10$$4, &_11$$4);
		zephir_add_function(return_value, &_4$$4, &_8$$4);
		RETURN_MM();
	}
}

PHP_METHOD(Pocketmine_Math_Vector2, length)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));
}

PHP_METHOD(Pocketmine_Math_Vector2, lengthSquared)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	zephir_add_function(return_value, &_2, &_3);
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, normalize)
{
	zval len, _1, _2, _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&len);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_0$$3);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&len, this_ptr, zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_GT_LONG(&len, 0)) {
		ZVAL_DOUBLE(&_0$$3, zephir_sqrt(&len));
		ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P1(this_ptr, zep_Pocketmine_Math_Vector2_divide_zephir_internal_call, &_0$$3);
		zephir_check_call_status();
		RETURN_MM();
	}
	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, dot)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v = NULL, v_sub, _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(v, pocketmine_math_vector2_ce)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v);


	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	zephir_add_function(return_value, &_2, &_3);
	RETURN_MM();
}

PHP_METHOD(Pocketmine_Math_Vector2, __toString)
{
	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CONCAT_SVSVS(return_value, "Vector2(x=", &_0, ",y=", &_1, ")");
	return;
}

/**
 */
void zep_Pocketmine_Math_Vector2_getX_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	


	RETURN_MEMBER(getThis(), "x");
}

/**
 */
void zep_Pocketmine_Math_Vector2_getY_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	


	RETURN_MEMBER(getThis(), "y");
}

void zep_Pocketmine_Math_Vector2_getFloorX_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0;
		ZVAL_UNDEF(&_0);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));
}

void zep_Pocketmine_Math_Vector2_getFloorY_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0;
		ZVAL_UNDEF(&_0);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));
}

void zep_Pocketmine_Math_Vector2_ceil_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_ceil(&_0));
	ZVAL_LONG(&_3, (int) zephir_ceil(&_1));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_floor_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_2, (int) zephir_floor(&_0));
	ZVAL_LONG(&_3, (int) zephir_floor(&_1));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_round_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZEPHIR_INIT_VAR(&_0);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_0, &_1, NULL, NULL);
	ZEPHIR_INIT_VAR(&_2);
	zephir_read_property(&_3, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_round(&_2, &_3, NULL, NULL);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_0, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_abs_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1, _2, _3, _4, _5;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);


	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 8, &_0);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_3, "abs", NULL, 8, &_2);
	zephir_check_call_status();
	ZVAL_DOUBLE(&_4, zephir_get_doubleval(&_1));
	ZVAL_DOUBLE(&_5, zephir_get_doubleval(&_3));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_multiply_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(number)
		Z_PARAM_ZVAL(number)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	number_param = number_param_ext;

	number = zephir_get_doubleval(number_param);
	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, (zephir_get_numberval(&_0) * (double) (number)));
	ZVAL_DOUBLE(&_3, (zephir_get_numberval(&_1) * (double) (number)));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_divide_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3;
	double number;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(number)
		Z_PARAM_ZVAL(number)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	number_param = number_param_ext;

	number = zephir_get_doubleval(number_param);
	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector2_ce);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_2, zephir_safe_div_zval_double(&_0, number));
	ZVAL_DOUBLE(&_3, zephir_safe_div_zval_double(&_1, number));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_length_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));
}

void zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	zephir_add_function(return_value, &_2, &_3);
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_normalize_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval len, _1, _2, _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&len);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_0$$3);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&len, this_ptr, zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_GT_LONG(&len, 0)) {
		ZVAL_DOUBLE(&_0$$3, zephir_sqrt(&len));
		ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P1(this_ptr, zep_Pocketmine_Math_Vector2_divide_zephir_internal_call, &_0$$3);
		zephir_check_call_status();
		RETURN_MM();
	}
	object_init_ex(return_value, pocketmine_math_vector2_ce);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 7, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2_dot_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext )
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v = NULL, v_sub, _0, _1, _2, _3;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_OBJECT_OF_CLASS(v, pocketmine_math_vector2_ce)
		Z_PARAM_OBJECT_OF_CLASS(v, pocketmine_math_vector2_ce)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	v = v_ext;



	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	zephir_add_function(return_value, &_2, &_3);
	RETURN_MM();
}

void zep_Pocketmine_Math_Vector2___toString_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used)
{
	zval _0, _1;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);



	zephir_read_property(&_0, this_ptr, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CONCAT_SVSVS(return_value, "Vector2(x=", &_0, ",y=", &_1, ")");
	return;
}

