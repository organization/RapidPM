
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
#include "kernel/math.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/array.h"
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
ZEPHIR_INIT_CLASS(Pocketmine_Math_Vector3) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Vector3, pocketmine, math_vector3, pocketmine_math_vector3_method_entry, 0);

	/** @var float|int */
	zend_declare_property_double(pocketmine_math_vector3_ce, SL("x"), 0.0, ZEND_ACC_PUBLIC);

	/** @var float|int */
	zend_declare_property_double(pocketmine_math_vector3_ce, SL("y"), 0.0, ZEND_ACC_PUBLIC);

	/** @var float|int */
	zend_declare_property_double(pocketmine_math_vector3_ce, SL("z"), 0.0, ZEND_ACC_PUBLIC);

	return SUCCESS;

}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector3, getX) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "x");

}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector3, getY) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "y");

}

/**
 */
PHP_METHOD(Pocketmine_Math_Vector3, getZ) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "z");

}

/**
 * WARNING: THIS IS NOT TYPE SAFE!
 * This is intentionally not typehinted because things using this as an int-vector will crash and burn if everything
 * gets converted to floating-point numbers.
 *
 * TODO: typehint this once int-vectors and float-vectors are separated
 *
 * @param float|int $x
 * @param float|int $y
 * @param float|int $z
 */
PHP_METHOD(Pocketmine_Math_Vector3, __construct) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &x, &y, &z);

	if (!x) {
		x = &x_sub;
		ZEPHIR_INIT_VAR(x);
		ZVAL_LONG(x, 0);
	}
	if (!y) {
		y = &y_sub;
		ZEPHIR_INIT_VAR(y);
		ZVAL_LONG(y, 0);
	}
	if (!z) {
		z = &z_sub;
		ZEPHIR_INIT_VAR(z);
		ZVAL_LONG(z, 0);
	}


	zephir_update_property_zval(this_ptr, SL("x"), x);
	zephir_update_property_zval(this_ptr, SL("y"), y);
	zephir_update_property_zval(this_ptr, SL("z"), z);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Math_Vector3, getFloorX) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

PHP_METHOD(Pocketmine_Math_Vector3, getFloorY) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

PHP_METHOD(Pocketmine_Math_Vector3, getFloorZ) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

/**
 * @param Vector3|int $x
 * @param int         $y
 * @param int         $z
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, add) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub, _0$$3, _1$$3, _2$$3, _3$$3, _4$$3, _6$$4, _7$$4, _8$$4, _9$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &x, &y, &z);

	if (!y) {
		y = &y_sub;
		ZEPHIR_INIT_VAR(y);
		ZVAL_LONG(y, 0);
	}
	if (!z) {
		z = &z_sub;
		ZEPHIR_INIT_VAR(z);
		ZVAL_LONG(z, 0);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector3_ce)) {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_0$$3, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_2$$3);
		zephir_add_function(&_2$$3, &_0$$3, &_1$$3);
		zephir_read_property(&_0$$3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		zephir_add_function(&_3$$3, &_0$$3, &_1$$3);
		zephir_read_property(&_0$$3, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_4$$3);
		zephir_add_function(&_4$$3, &_0$$3, &_1$$3);
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_5, 10, &_2$$3, &_3$$3, &_4$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_6$$4, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$4);
		zephir_add_function(&_7$$4, &_6$$4, x);
		zephir_read_property(&_6$$4, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$4);
		zephir_add_function(&_8$$4, &_6$$4, y);
		zephir_read_property(&_6$$4, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$4);
		zephir_add_function(&_9$$4, &_6$$4, z);
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_5, 10, &_7$$4, &_8$$4, &_9$$4);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * @param Vector3|int $x
 * @param int         $y
 * @param int         $z
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, subtract) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub, _0$$3, _1$$3, _2$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &x, &y, &z);

	if (!x) {
		x = &x_sub;
		ZEPHIR_INIT_VAR(x);
		ZVAL_LONG(x, 0);
	}
	if (!y) {
		y = &y_sub;
		ZEPHIR_INIT_VAR(y);
		ZVAL_LONG(y, 0);
	}
	if (!z) {
		z = &z_sub;
		ZEPHIR_INIT_VAR(z);
		ZVAL_LONG(z, 0);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector3_ce)) {
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_read_property(&_0$$3, x, SL("x"), PH_NOISY_CC);
		zephir_negate(&_0$$3);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, x, SL("y"), PH_NOISY_CC);
		zephir_negate(&_1$$3);
		ZEPHIR_OBS_VAR(&_2$$3);
		zephir_read_property(&_2$$3, x, SL("z"), PH_NOISY_CC);
		zephir_negate(&_2$$3);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_3, 0, &_0$$3, &_1$$3, &_2$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		zephir_negate(x);
		zephir_negate(y);
		zephir_negate(z);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", &_3, 0, x, y, z);
		zephir_check_call_status();
		RETURN_MM();
	}

}

PHP_METHOD(Pocketmine_Math_Vector3, multiply) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3, _4, _5;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);

	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_3, (zephir_get_numberval(&_0) * (double) (number)));
	ZVAL_DOUBLE(&_4, (zephir_get_numberval(&_1) * (double) (number)));
	ZVAL_DOUBLE(&_5, (zephir_get_numberval(&_2) * (double) (number)));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, divide) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3, _4, _5;
	double number;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number_param);

	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_3, zephir_safe_div_zval_double(&_0, number));
	ZVAL_DOUBLE(&_4, zephir_safe_div_zval_double(&_1, number));
	ZVAL_DOUBLE(&_5, zephir_safe_div_zval_double(&_2, number));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, ceil) {

	zval _0, _1, _2, _3, _4, _5;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, (int) zephir_ceil(&_0));
	ZVAL_LONG(&_4, (int) zephir_ceil(&_1));
	ZVAL_LONG(&_5, (int) zephir_ceil(&_2));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, floor) {

	zval _0, _1, _2, _3, _4, _5;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, (int) zephir_floor(&_0));
	ZVAL_LONG(&_4, (int) zephir_floor(&_1));
	ZVAL_LONG(&_5, (int) zephir_floor(&_2));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, round) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *precision_param = NULL, *mode_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27;
	zend_long precision, mode, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &precision_param, &mode_param);

	if (!precision_param) {
		precision = 0;
	} else {
		precision = zephir_get_intval(precision_param);
	}
	if (!mode_param) {
		mode = 0x01;
	} else {
		mode = zephir_get_intval(mode_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	if (precision > 0) {
		object_init_ex(&_0, pocketmine_math_vector3_ce);
		ZEPHIR_INIT_VAR(&_1);
		zephir_read_property(&_2, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_3, precision);
		ZVAL_LONG(&_4, mode);
		zephir_round(&_1, &_2, &_3, &_4);
		ZEPHIR_INIT_VAR(&_5);
		zephir_read_property(&_6, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_7, precision);
		ZVAL_LONG(&_8, mode);
		zephir_round(&_5, &_6, &_7, &_8);
		ZEPHIR_INIT_VAR(&_9);
		zephir_read_property(&_10, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_11, precision);
		ZVAL_LONG(&_12, mode);
		zephir_round(&_9, &_10, &_11, &_12);
		ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 10, &_1, &_5, &_9);
		zephir_check_call_status();
	} else {
		object_init_ex(&_0, pocketmine_math_vector3_ce);
		ZEPHIR_INIT_VAR(&_13);
		zephir_read_property(&_14, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_15, precision);
		ZVAL_LONG(&_16, mode);
		zephir_round(&_13, &_14, &_15, &_16);
		ZEPHIR_INIT_VAR(&_17);
		zephir_read_property(&_18, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_19, precision);
		ZVAL_LONG(&_20, mode);
		zephir_round(&_17, &_18, &_19, &_20);
		ZEPHIR_INIT_VAR(&_21);
		zephir_read_property(&_22, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_23, precision);
		ZVAL_LONG(&_24, mode);
		zephir_round(&_21, &_22, &_23, &_24);
		ZVAL_LONG(&_25, zephir_get_intval(&_13));
		ZVAL_LONG(&_26, zephir_get_intval(&_17));
		ZVAL_LONG(&_27, zephir_get_intval(&_21));
		ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 10, &_25, &_26, &_27);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&_0);

}

PHP_METHOD(Pocketmine_Math_Vector3, abs) {

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

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", &_2, 8, &_0);
	zephir_check_call_status();
	zephir_read_property(&_3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_4, "abs", &_2, 8, &_3);
	zephir_check_call_status();
	zephir_read_property(&_5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_6, "abs", &_2, 8, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_1, &_4, &_6);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $side
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, getSide) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_4 = NULL;
	zval *side_param = NULL, *step_param = NULL, _0$$3, _1$$3, _2$$3, _3$$3, _5$$4, _6$$4, _7$$4, _8$$4, _9$$5, _10$$5, _11$$5, _12$$5, _13$$6, _14$$6, _15$$6, _16$$6, _17$$7, _18$$7, _19$$7, _20$$7, _21$$8, _22$$8, _23$$8, _24$$8;
	zend_long side, step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_13$$6);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$7);
	ZVAL_UNDEF(&_18$$7);
	ZVAL_UNDEF(&_19$$7);
	ZVAL_UNDEF(&_20$$7);
	ZVAL_UNDEF(&_21$$8);
	ZVAL_UNDEF(&_22$$8);
	ZVAL_UNDEF(&_23$$8);
	ZVAL_UNDEF(&_24$$8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &side_param, &step_param);

	side = zephir_get_intval(side_param);
	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	do {
		if (side == 0) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_0$$3, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_1$$3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_2$$3, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_3$$3, (zephir_get_numberval(&_1$$3) - step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_0$$3, &_3$$3, &_2$$3);
			zephir_check_call_status();
			RETURN_MM();
		}
		if (side == 1) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_5$$4, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_6$$4, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_7$$4, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_8$$4, (zephir_get_numberval(&_6$$4) + step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_5$$4, &_8$$4, &_7$$4);
			zephir_check_call_status();
			RETURN_MM();
		}
		if (side == 2) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_9$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_10$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_11$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_12$$5, (zephir_get_numberval(&_11$$5) - step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_9$$5, &_10$$5, &_12$$5);
			zephir_check_call_status();
			RETURN_MM();
		}
		if (side == 3) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_13$$6, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_14$$6, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_15$$6, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_16$$6, (zephir_get_numberval(&_15$$6) + step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_13$$6, &_14$$6, &_16$$6);
			zephir_check_call_status();
			RETURN_MM();
		}
		if (side == 4) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_17$$7, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_18$$7, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_19$$7, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_20$$7, (zephir_get_numberval(&_17$$7) - step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_20$$7, &_18$$7, &_19$$7);
			zephir_check_call_status();
			RETURN_MM();
		}
		if (side == 5) {
			object_init_ex(return_value, pocketmine_math_vector3_ce);
			zephir_read_property(&_21$$8, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_22$$8, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_23$$8, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_24$$8, (zephir_get_numberval(&_21$$8) + step));
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", &_4, 10, &_24$$8, &_22$$8, &_23$$8);
			zephir_check_call_status();
			RETURN_MM();
		}
	} while(0);

	RETURN_THIS();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, down) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 0);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, up) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 1);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, north) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 2);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, south) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 3);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, west) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 4);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $step
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, east) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *step_param = NULL, _0, _1;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_0, 5);
	ZVAL_LONG(&_1, step);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "getside", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Yields vectors stepped out from this one in all directions.
 *
 * @param int $step Distance in each direction to shift the vector
 *
 * @return \Generator|Vector3[]
 */
PHP_METHOD(Pocketmine_Math_Vector3, sides) {

	zval tempArr;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *step_param = NULL, facing, _0, *_1, _2, _3$$3, _4$$3, _6$$4, _7$$4;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&facing);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&tempArr);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &step_param);

	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	zephir_read_static_property_ce(&_0, pocketmine_math_facing_ce, SL("all"), PH_NOISY_CC | PH_READONLY);
	zephir_is_iterable(&_0, 0, "pocketmine/math/vector3.zep", 229);
	if (Z_TYPE_P(&_0) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_0), _1)
		{
			ZEPHIR_INIT_NVAR(&facing);
			ZVAL_COPY(&facing, _1);
			ZVAL_LONG(&_4$$3, step);
			ZEPHIR_CALL_METHOD(&_3$$3, this_ptr, "getside", &_5, 0, &facing, &_4$$3);
			zephir_check_call_status();
			zephir_array_append(&tempArr, &_3$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 227);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &_0, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &_0, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&facing, &_0, "current", NULL, 0);
			zephir_check_call_status();
				ZVAL_LONG(&_7$$4, step);
				ZEPHIR_CALL_METHOD(&_6$$4, this_ptr, "getside", &_5, 0, &facing, &_7$$4);
				zephir_check_call_status();
				zephir_array_append(&tempArr, &_6$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 227);
			ZEPHIR_CALL_METHOD(NULL, &_0, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&facing);
	object_init_ex(return_value, zephir_get_internal_ce(SL("arrayiterator")));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 11, &tempArr);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Same as sides() but returns a pre-populated array instead of Generator.
 *
 * @param bool $keys
 * @param int  $step
 *
 * @return Vector3[]
 */
PHP_METHOD(Pocketmine_Math_Vector3, sidesArray) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long step, ZEPHIR_LAST_CALL_STATUS;
	zval *keys_param = NULL, *step_param = NULL, _0, _1;
	zend_bool keys;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &keys_param, &step_param);

	if (!keys_param) {
		keys = 0;
	} else {
		keys = zephir_get_boolval(keys_param);
	}
	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	ZVAL_LONG(&_1, step);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "sides", NULL, 0, &_1);
	zephir_check_call_status();
	ZVAL_BOOL(&_1, (keys ? 1 : 0));
	ZEPHIR_RETURN_CALL_FUNCTION("iterator_to_array", NULL, 12, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Yields vectors stepped out from this one in directions except those on the given axis.
 *
 * @param int $axis Facing directions on this axis will be excluded
 * @param int $step
 *
 * @return \Generator|Vector3[]
 */
PHP_METHOD(Pocketmine_Math_Vector3, sidesAroundAxis) {

	zval tempArr;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_4 = NULL, *_7 = NULL;
	zval *axis_param = NULL, *step_param = NULL, facing, _0, *_1, _2, _3$$3, _5$$4, _6$$4, _8$$5, _9$$6, _10$$6;
	zend_long axis, step, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&facing);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$6);
	ZVAL_UNDEF(&_10$$6);
	ZVAL_UNDEF(&tempArr);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &axis_param, &step_param);

	axis = zephir_get_intval(axis_param);
	if (!step_param) {
		step = 1;
	} else {
		step = zephir_get_intval(step_param);
	}


	zephir_read_static_property_ce(&_0, pocketmine_math_facing_ce, SL("all"), PH_NOISY_CC | PH_READONLY);
	zephir_is_iterable(&_0, 0, "pocketmine/math/vector3.zep", 264);
	if (Z_TYPE_P(&_0) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_0), _1)
		{
			ZEPHIR_INIT_NVAR(&facing);
			ZVAL_COPY(&facing, _1);
			ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_3$$3, pocketmine_math_facing_ce, zep_Pocketmine_Math_Facing_axis_zephir_internal_call, &facing);
			zephir_check_call_status();
			if (!ZEPHIR_IS_LONG_IDENTICAL(&_3$$3, axis)) {
				ZVAL_LONG(&_6$$4, step);
				ZEPHIR_CALL_METHOD(&_5$$4, this_ptr, "getside", &_7, 0, &facing, &_6$$4);
				zephir_check_call_status();
				zephir_array_append(&tempArr, &_5$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 261);
			}
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &_0, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &_0, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&facing, &_0, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_8$$5, pocketmine_math_facing_ce, zep_Pocketmine_Math_Facing_axis_zephir_internal_call, &facing);
				zephir_check_call_status();
				if (!ZEPHIR_IS_LONG_IDENTICAL(&_8$$5, axis)) {
					ZVAL_LONG(&_10$$6, step);
					ZEPHIR_CALL_METHOD(&_9$$6, this_ptr, "getside", &_7, 0, &facing, &_10$$6);
					zephir_check_call_status();
					zephir_array_append(&tempArr, &_9$$6, PH_SEPARATE, "pocketmine/math/vector3.zep", 261);
				}
			ZEPHIR_CALL_METHOD(NULL, &_0, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&facing);
	object_init_ex(return_value, zephir_get_internal_ce(SL("arrayiterator")));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 11, &tempArr);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Return a Vector3 instance
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, asVector3) {

	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, distance) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pos = NULL, pos_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pos_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &pos);



	ZEPHIR_CALL_INTERNAL_METHOD_P1(&_0, this_ptr, zep_Pocketmine_Math_Vector3_distanceSquared_zephir_internal_call, pos);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));

}

PHP_METHOD(Pocketmine_Math_Vector3, distanceSquared) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pos = NULL, pos_sub, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pos_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &pos);



	ZEPHIR_INIT_VAR(&_0);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, pos, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	zephir_sub_function(&_3, &_1, &_2);
	ZVAL_LONG(&_1, 2);
	zephir_pow_function(&_0, &_3, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_read_property(&_2, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_5, pos, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_6);
	zephir_sub_function(&_6, &_2, &_5);
	ZVAL_LONG(&_2, 2);
	zephir_pow_function(&_4, &_6, &_2);
	ZEPHIR_INIT_VAR(&_7);
	zephir_add_function(&_7, &_0, &_4);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_read_property(&_5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_8, pos, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_9);
	zephir_sub_function(&_9, &_5, &_8);
	ZVAL_LONG(&_5, 2);
	zephir_pow_function(&_0, &_9, &_5);
	zephir_add_function(return_value, &_7, &_0);
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, maxPlainDistance) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_7 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x = NULL, x_sub, *z = NULL, z_sub, _0$$3, _1$$3, _2$$4, _3$$4, _4$$5, _5$$5, _6$$5, _8$$5, _9$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&z_sub);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &x, &z);

	if (!x) {
		x = &x_sub;
		ZEPHIR_INIT_VAR(x);
		ZVAL_LONG(x, 0);
	}
	if (!z) {
		z = &z_sub;
		ZEPHIR_INIT_VAR(z);
		ZVAL_LONG(z, 0);
	}


	if (zephir_instance_of_ev(x, pocketmine_math_vector3_ce)) {
		zephir_read_property(&_0$$3, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1$$3, x, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "maxplaindistance", NULL, 13, &_0$$3, &_1$$3);
		zephir_check_call_status();
		RETURN_MM();
	} else if (zephir_instance_of_ev(x, pocketmine_math_vector2_ce)) {
		zephir_read_property(&_2$$4, x, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_3$$4, x, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_RETURN_CALL_METHOD(this_ptr, "maxplaindistance", NULL, 13, &_2$$4, &_3$$4);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		zephir_read_property(&_4$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_5$$5);
		zephir_sub_function(&_5$$5, &_4$$5, x);
		ZEPHIR_CALL_FUNCTION(&_6$$5, "abs", &_7, 8, &_5$$5);
		zephir_check_call_status();
		zephir_read_property(&_4$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$5);
		zephir_sub_function(&_8$$5, &_4$$5, z);
		ZEPHIR_CALL_FUNCTION(&_9$$5, "abs", &_7, 8, &_8$$5);
		zephir_check_call_status();
		ZEPHIR_RETURN_CALL_FUNCTION("max", NULL, 4, &_6$$5, &_9$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

PHP_METHOD(Pocketmine_Math_Vector3, length) {

	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));

}

PHP_METHOD(Pocketmine_Math_Vector3, lengthSquared) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_add_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_add_function(return_value, &_4, &_2);
	RETURN_MM();

}

/**
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, normalize) {

	zval len, _1, _2, _3, _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&len);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_0$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&len, this_ptr, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_GT_LONG(&len, 0)) {
		ZVAL_DOUBLE(&_0$$3, zephir_sqrt(&len));
		ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P1(this_ptr, zep_Pocketmine_Math_Vector3_divide_zephir_internal_call, &_0$$3);
		zephir_check_call_status();
		RETURN_MM();
	}
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZVAL_LONG(&_3, 0);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, dot) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v = NULL, v_sub, _0, _1, _2, _3, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v);



	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_add_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_add_function(return_value, &_4, &_2);
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, cross) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v = NULL, v_sub, _0, _1, _2, _3, _4, _5, _6;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v);



	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_sub_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_5);
	zephir_sub_function(&_5, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_6);
	zephir_sub_function(&_6, &_2, &_3);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_4, &_5, &_6);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_Vector3, equals) {

	zend_bool _2, _5;
	zval *v = NULL, v_sub, _0, _1, _3, _4, _6, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);

	zephir_fetch_params_without_memory_grow(1, 0, &v);



	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_IS_EQUAL(&_0, &_1);
	if (_2) {
		zephir_read_property(&_3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_IS_EQUAL(&_3, &_4);
	}
	_5 = _2;
	if (_5) {
		zephir_read_property(&_6, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_7, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		_5 = ZEPHIR_IS_EQUAL(&_6, &_7);
	}
	RETURN_BOOL(_5);

}

/**
 * Returns a new vector with x value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $x
 *
 * @return Vector3|null
 */
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithXValue) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double x, f = 0;
	zval *v = NULL, v_sub, *x_param = NULL, xDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&xDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &v, &x_param);

	x = zephir_get_doubleval(x_param);


	zephir_read_property(&_0, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&xDiff);
	zephir_sub_function(&xDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &xDiff, &xDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((x - zephir_get_numberval(&_0))), &xDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, x);
		ZVAL_DOUBLE(&_8$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_10$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * Returns a new vector with y value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $y
 *
 * @return Vector3|null
 */
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithYValue) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y, f = 0;
	zval *v = NULL, v_sub, *y_param = NULL, yDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&yDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &v, &y_param);

	y = zephir_get_doubleval(y_param);


	zephir_read_property(&_0, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&yDiff);
	zephir_sub_function(&yDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &yDiff, &yDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((y - zephir_get_numberval(&_0))), &yDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_8$$5, y);
		ZVAL_DOUBLE(&_10$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * Returns a new vector with z value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $z
 *
 * @return Vector3|null
 */
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithZValue) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double z, f = 0;
	zval *v = NULL, v_sub, *z_param = NULL, zDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&zDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &v, &z_param);

	z = zephir_get_doubleval(z_param);


	zephir_read_property(&_0, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&zDiff);
	zephir_sub_function(&zDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &zDiff, &zDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((z - zephir_get_numberval(&_0))), &zDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_8$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZVAL_DOUBLE(&_10$$5, z);
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * @param $x
 * @param $y
 * @param $z
 *
 * @return $this
 */
PHP_METHOD(Pocketmine_Math_Vector3, setComponents) {

	zval *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);

	zephir_fetch_params_without_memory_grow(3, 0, &x, &y, &z);



	zephir_update_property_zval(this_ptr, SL("x"), x);
	zephir_update_property_zval(this_ptr, SL("y"), y);
	zephir_update_property_zval(this_ptr, SL("z"), z);
	RETURN_THISW();

}

PHP_METHOD(Pocketmine_Math_Vector3, __toString) {

	zval _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CONCAT_SVSVSVS(return_value, "Vector3(x=", &_0, ",y=", &_1, ",z=", &_2, ")");
	return;

}

/**
 * Returns a new Vector3 taking the maximum of each component in the input vectors.
 *
 * @param Vector3[] $positions
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, maxComponents) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_9 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *positions_param = NULL, zList, yList, xList, position, *_0, _1, _8, _10, _11, _2$$3, _3$$3, _4$$3, _5$$4, _6$$4, _7$$4;
	zval positions;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&positions);
	ZVAL_UNDEF(&zList);
	ZVAL_UNDEF(&yList);
	ZVAL_UNDEF(&xList);
	ZVAL_UNDEF(&position);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &positions_param);

	zephir_get_arrval(&positions, positions_param);


	ZEPHIR_INIT_VAR(&zList);
	array_init(&zList);
	ZEPHIR_INIT_VAR(&yList);
	array_init(&yList);
	ZEPHIR_INIT_VAR(&xList);
	array_init(&xList);
	zephir_is_iterable(&positions, 0, "pocketmine/math/vector3.zep", 450);
	if (Z_TYPE_P(&positions) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&positions), _0)
		{
			ZEPHIR_INIT_NVAR(&position);
			ZVAL_COPY(&position, _0);
			zephir_read_property(&_2$$3, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&xList, &_2$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 446);
			zephir_read_property(&_3$$3, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&yList, &_3$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 447);
			zephir_read_property(&_4$$3, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&zList, &_4$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 448);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &positions, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_1, &positions, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_1)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&position, &positions, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_5$$4, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&xList, &_5$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 446);
				zephir_read_property(&_6$$4, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&yList, &_6$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 447);
				zephir_read_property(&_7$$4, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&zList, &_7$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 448);
			ZEPHIR_CALL_METHOD(NULL, &positions, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&position);
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZEPHIR_CALL_FUNCTION(&_8, "max", &_9, 4, &xList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_10, "max", &_9, 4, &yList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_11, "max", &_9, 4, &zList);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_8, &_10, &_11);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a new Vector3 taking the minimum of each component in the input vectors.
 *
 * @param Vector3[] $positions
 *
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_Vector3, minComponents) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_9 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *positions_param = NULL, zList, yList, xList, position, *_0, _1, _8, _10, _11, _2$$3, _3$$3, _4$$3, _5$$4, _6$$4, _7$$4;
	zval positions;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&positions);
	ZVAL_UNDEF(&zList);
	ZVAL_UNDEF(&yList);
	ZVAL_UNDEF(&xList);
	ZVAL_UNDEF(&position);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &positions_param);

	zephir_get_arrval(&positions, positions_param);


	ZEPHIR_INIT_VAR(&zList);
	array_init(&zList);
	ZEPHIR_INIT_VAR(&yList);
	array_init(&yList);
	ZEPHIR_INIT_VAR(&xList);
	array_init(&xList);
	zephir_is_iterable(&positions, 0, "pocketmine/math/vector3.zep", 472);
	if (Z_TYPE_P(&positions) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&positions), _0)
		{
			ZEPHIR_INIT_NVAR(&position);
			ZVAL_COPY(&position, _0);
			zephir_read_property(&_2$$3, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&xList, &_2$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 468);
			zephir_read_property(&_3$$3, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&yList, &_3$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 469);
			zephir_read_property(&_4$$3, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&zList, &_4$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 470);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &positions, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_1, &positions, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_1)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&position, &positions, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_5$$4, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&xList, &_5$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 468);
				zephir_read_property(&_6$$4, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&yList, &_6$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 469);
				zephir_read_property(&_7$$4, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&zList, &_7$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 470);
			ZEPHIR_CALL_METHOD(NULL, &positions, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&position);
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZEPHIR_CALL_FUNCTION(&_8, "min", &_9, 14, &xList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_10, "min", &_9, 14, &yList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_11, "min", &_9, 14, &zList);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_8, &_10, &_11);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 */
void zep_Pocketmine_Math_Vector3_getX_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	

	RETURN_MEMBER(getThis(), "x");

}

/**
 */
void zep_Pocketmine_Math_Vector3_getY_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	

	RETURN_MEMBER(getThis(), "y");

}

/**
 */
void zep_Pocketmine_Math_Vector3_getZ_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	

	RETURN_MEMBER(getThis(), "z");

}

void zep_Pocketmine_Math_Vector3_getFloorX_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0;
		ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

void zep_Pocketmine_Math_Vector3_getFloorY_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0;
		ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

void zep_Pocketmine_Math_Vector3_getFloorZ_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0;
		ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG((int) zephir_floor(&_0));

}

void zep_Pocketmine_Math_Vector3_multiply_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3, _4, _5;
	double number;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	number_param = number_param_ext;


	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_3, (zephir_get_numberval(&_0) * (double) (number)));
	ZVAL_DOUBLE(&_4, (zephir_get_numberval(&_1) * (double) (number)));
	ZVAL_DOUBLE(&_5, (zephir_get_numberval(&_2) * (double) (number)));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_divide_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *number_param = NULL, _0, _1, _2, _3, _4, _5;
	double number;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	number_param = number_param_ext;


	number = zephir_get_doubleval(number_param);


	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_DOUBLE(&_3, zephir_safe_div_zval_double(&_0, number));
	ZVAL_DOUBLE(&_4, zephir_safe_div_zval_double(&_1, number));
	ZVAL_DOUBLE(&_5, zephir_safe_div_zval_double(&_2, number));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_ceil_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

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

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, (int) zephir_ceil(&_0));
	ZVAL_LONG(&_4, (int) zephir_ceil(&_1));
	ZVAL_LONG(&_5, (int) zephir_ceil(&_2));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_floor_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

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

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, (int) zephir_floor(&_0));
	ZVAL_LONG(&_4, (int) zephir_floor(&_1));
	ZVAL_LONG(&_5, (int) zephir_floor(&_2));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_abs_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

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

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 8, &_0);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_3, "abs", NULL, 8, &_2);
	zephir_check_call_status();
	zephir_read_property(&_4, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_5, "abs", NULL, 8, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_1, &_3, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Return a Vector3 instance
 *
 * @return Vector3
 */
void zep_Pocketmine_Math_Vector3_asVector3_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_distance_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *pos_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pos = NULL, pos_sub, _0;
		ZVAL_UNDEF(&pos_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	pos = pos_ext;




	ZEPHIR_CALL_INTERNAL_METHOD_P1(&_0, this_ptr, zep_Pocketmine_Math_Vector3_distanceSquared_zephir_internal_call, pos);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));

}

void zep_Pocketmine_Math_Vector3_distanceSquared_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *pos_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pos = NULL, pos_sub, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
		ZVAL_UNDEF(&pos_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);

	ZEPHIR_MM_GROW();
	pos = pos_ext;




	ZEPHIR_INIT_VAR(&_0);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, pos, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	zephir_sub_function(&_3, &_1, &_2);
	ZVAL_LONG(&_1, 2);
	zephir_pow_function(&_0, &_3, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_read_property(&_2, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_5, pos, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_6);
	zephir_sub_function(&_6, &_2, &_5);
	ZVAL_LONG(&_2, 2);
	zephir_pow_function(&_4, &_6, &_2);
	ZEPHIR_INIT_VAR(&_7);
	zephir_add_function(&_7, &_0, &_4);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_read_property(&_5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_8, pos, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_9);
	zephir_sub_function(&_9, &_5, &_8);
	ZVAL_LONG(&_5, 2);
	zephir_pow_function(&_0, &_9, &_5);
	zephir_add_function(return_value, &_7, &_0);
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_length_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	RETURN_MM_DOUBLE(zephir_sqrt(&_0));

}

void zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_add_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_add_function(return_value, &_4, &_2);
	RETURN_MM();

}

/**
 * @return Vector3
 */
void zep_Pocketmine_Math_Vector3_normalize_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval len, _1, _2, _3, _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&len);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_0$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&len, this_ptr, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_GT_LONG(&len, 0)) {
		ZVAL_DOUBLE(&_0$$3, zephir_sqrt(&len));
		ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P1(this_ptr, zep_Pocketmine_Math_Vector3_divide_zephir_internal_call, &_0$$3);
		zephir_check_call_status();
		RETURN_MM();
	}
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZVAL_LONG(&_3, 0);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_dot_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v = NULL, v_sub, _0, _1, _2, _3, _4;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	v = v_ext;




	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_add_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_add_function(return_value, &_4, &_2);
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_cross_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v = NULL, v_sub, _0, _1, _2, _3, _4, _5, _6;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);

	ZEPHIR_MM_GROW();
	v = v_ext;




	object_init_ex(return_value, pocketmine_math_vector3_ce);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_4);
	zephir_sub_function(&_4, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_5);
	zephir_sub_function(&_5, &_2, &_3);
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_2);
	mul_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_3);
	mul_function(&_3, &_0, &_1);
	ZEPHIR_INIT_VAR(&_6);
	zephir_sub_function(&_6, &_2, &_3);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_4, &_5, &_6);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Math_Vector3_equals_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext ) {

	zend_bool _2, _5;
	zval *v = NULL, v_sub, _0, _1, _3, _4, _6, _7;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);

	v = v_ext;




	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_IS_EQUAL(&_0, &_1);
	if (_2) {
		zephir_read_property(&_3, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_IS_EQUAL(&_3, &_4);
	}
	_5 = _2;
	if (_5) {
		zephir_read_property(&_6, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_7, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		_5 = ZEPHIR_IS_EQUAL(&_6, &_7);
	}
	RETURN_BOOL(_5);

}

/**
 * Returns a new vector with x value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $x
 *
 * @return Vector3|null
 */
void zep_Pocketmine_Math_Vector3_getIntermediateWithXValue_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext , zval *x_param_ext) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double x, f = 0;
	zval *v = NULL, v_sub, *x_param = NULL, xDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&xDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	v = v_ext;

	x_param = x_param_ext;


	x = zephir_get_doubleval(x_param);


	zephir_read_property(&_0, v, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&xDiff);
	zephir_sub_function(&xDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &xDiff, &xDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((x - zephir_get_numberval(&_0))), &xDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, x);
		ZVAL_DOUBLE(&_8$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_10$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * Returns a new vector with y value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $y
 *
 * @return Vector3|null
 */
void zep_Pocketmine_Math_Vector3_getIntermediateWithYValue_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext , zval *y_param_ext) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double y, f = 0;
	zval *v = NULL, v_sub, *y_param = NULL, yDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&yDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	v = v_ext;

	y_param = y_param_ext;


	y = zephir_get_doubleval(y_param);


	zephir_read_property(&_0, v, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&yDiff);
	zephir_sub_function(&yDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &yDiff, &yDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((y - zephir_get_numberval(&_0))), &yDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_8$$5, y);
		ZVAL_DOUBLE(&_10$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * Returns a new vector with z value equal to the second parameter, along the line between this vector and the
 * passed in vector, or null if not possible.
 *
 * @param Vector3 $v
 * @param float   $z
 *
 * @return Vector3|null
 */
void zep_Pocketmine_Math_Vector3_getIntermediateWithZValue_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext , zval *z_param_ext) {

	zend_bool _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double z, f = 0;
	zval *v = NULL, v_sub, *z_param = NULL, zDiff, _0, _1, _2, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5;
		ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&zDiff);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);

	ZEPHIR_MM_GROW();
	v = v_ext;

	z_param = z_param_ext;


	z = zephir_get_doubleval(z_param);


	zephir_read_property(&_0, v, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&zDiff);
	zephir_sub_function(&zDiff, &_0, &_1);
	ZEPHIR_INIT_VAR(&_2);
	mul_function(&_2, &zDiff, &zDiff);
	if (ZEPHIR_LT_LONG(&_2, 0.0000001)) {
		RETURN_MM_NULL();
	}
	zephir_read_property(&_0, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	f = zephir_safe_div_long_zval(((z - zephir_get_numberval(&_0))), &zDiff);
	_3 = f < 0;
	if (!(_3)) {
		_3 = f > 1;
	}
	if (_3) {
		RETURN_MM_NULL();
	} else {
		object_init_ex(return_value, pocketmine_math_vector3_ce);
		zephir_read_property(&_4$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$5, v, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$5);
		zephir_sub_function(&_7$$5, &_5$$5, &_6$$5);
		zephir_read_property(&_5$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$5, v, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_8$$5, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$5);
		zephir_sub_function(&_9$$5, &_6$$5, &_8$$5);
		ZVAL_DOUBLE(&_6$$5, (zephir_get_numberval(&_4$$5) + (zephir_get_numberval(&_7$$5) * (double) (f))));
		ZVAL_DOUBLE(&_8$$5, (zephir_get_numberval(&_5$$5) + (zephir_get_numberval(&_9$$5) * (double) (f))));
		ZVAL_DOUBLE(&_10$$5, z);
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_6$$5, &_8$$5, &_10$$5);
		zephir_check_call_status();
		RETURN_MM();
	}

}

/**
 * @param $x
 * @param $y
 * @param $z
 *
 * @return $this
 */
void zep_Pocketmine_Math_Vector3_setComponents_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *x_ext , zval *y_ext , zval *z_ext ) {

	zval *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub;
		ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);

	x = x_ext;

	y = y_ext;

	z = z_ext;




	zephir_update_property_zval(this_ptr, SL("x"), x);
	zephir_update_property_zval(this_ptr, SL("y"), y);
	zephir_update_property_zval(this_ptr, SL("z"), z);
	RETURN_THISW();

}

void zep_Pocketmine_Math_Vector3___toString_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0, _1, _2;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	zephir_read_property(&_0, this_ptr, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CONCAT_SVSVSVS(return_value, "Vector3(x=", &_0, ",y=", &_1, ",z=", &_2, ")");
	return;

}

/**
 * Returns a new Vector3 taking the maximum of each component in the input vectors.
 *
 * @param Vector3[] $positions
 *
 * @return Vector3
 */
void zep_Pocketmine_Math_Vector3_maxComponents_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *positions_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *positions_param = NULL, zList, yList, xList, position, *_0, _1, _8, _9, _10, _2$$3, _3$$3, _4$$3, _5$$4, _6$$4, _7$$4;
	zval positions;
		ZVAL_UNDEF(&positions);
	ZVAL_UNDEF(&zList);
	ZVAL_UNDEF(&yList);
	ZVAL_UNDEF(&xList);
	ZVAL_UNDEF(&position);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	positions_param = positions_param_ext;


	zephir_get_arrval(&positions, positions_param);


	ZEPHIR_INIT_VAR(&zList);
	array_init(&zList);
	ZEPHIR_INIT_VAR(&yList);
	array_init(&yList);
	ZEPHIR_INIT_VAR(&xList);
	array_init(&xList);
	zephir_is_iterable(&positions, 0, "pocketmine/math/vector3.zep", 450);
	if (Z_TYPE_P(&positions) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&positions), _0)
		{
			ZEPHIR_INIT_NVAR(&position);
			ZVAL_COPY(&position, _0);
			zephir_read_property(&_2$$3, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&xList, &_2$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 446);
			zephir_read_property(&_3$$3, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&yList, &_3$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 447);
			zephir_read_property(&_4$$3, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&zList, &_4$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 448);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &positions, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_1, &positions, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_1)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&position, &positions, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_5$$4, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&xList, &_5$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 446);
				zephir_read_property(&_6$$4, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&yList, &_6$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 447);
				zephir_read_property(&_7$$4, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&zList, &_7$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 448);
			ZEPHIR_CALL_METHOD(NULL, &positions, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&position);
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZEPHIR_CALL_FUNCTION(&_8, "max", NULL, 4, &xList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_9, "max", NULL, 4, &yList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_10, "max", NULL, 4, &zList);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_8, &_9, &_10);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a new Vector3 taking the minimum of each component in the input vectors.
 *
 * @param Vector3[] $positions
 *
 * @return Vector3
 */
void zep_Pocketmine_Math_Vector3_minComponents_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *positions_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *positions_param = NULL, zList, yList, xList, position, *_0, _1, _8, _9, _10, _2$$3, _3$$3, _4$$3, _5$$4, _6$$4, _7$$4;
	zval positions;
		ZVAL_UNDEF(&positions);
	ZVAL_UNDEF(&zList);
	ZVAL_UNDEF(&yList);
	ZVAL_UNDEF(&xList);
	ZVAL_UNDEF(&position);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	positions_param = positions_param_ext;


	zephir_get_arrval(&positions, positions_param);


	ZEPHIR_INIT_VAR(&zList);
	array_init(&zList);
	ZEPHIR_INIT_VAR(&yList);
	array_init(&yList);
	ZEPHIR_INIT_VAR(&xList);
	array_init(&xList);
	zephir_is_iterable(&positions, 0, "pocketmine/math/vector3.zep", 472);
	if (Z_TYPE_P(&positions) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&positions), _0)
		{
			ZEPHIR_INIT_NVAR(&position);
			ZVAL_COPY(&position, _0);
			zephir_read_property(&_2$$3, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&xList, &_2$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 468);
			zephir_read_property(&_3$$3, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&yList, &_3$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 469);
			zephir_read_property(&_4$$3, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
			zephir_array_append(&zList, &_4$$3, PH_SEPARATE, "pocketmine/math/vector3.zep", 470);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &positions, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_1, &positions, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_1)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&position, &positions, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_5$$4, &position, SL("x"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&xList, &_5$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 468);
				zephir_read_property(&_6$$4, &position, SL("y"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&yList, &_6$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 469);
				zephir_read_property(&_7$$4, &position, SL("z"), PH_NOISY_CC | PH_READONLY);
				zephir_array_append(&zList, &_7$$4, PH_SEPARATE, "pocketmine/math/vector3.zep", 470);
			ZEPHIR_CALL_METHOD(NULL, &positions, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&position);
	object_init_ex(return_value, pocketmine_math_vector3_ce);
	ZEPHIR_CALL_FUNCTION(&_8, "min", NULL, 14, &xList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_9, "min", NULL, 14, &yList);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_10, "min", NULL, 14, &zList);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 10, &_8, &_9, &_10);
	zephir_check_call_status();
	RETURN_MM();

}

