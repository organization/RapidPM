
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/array.h"
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/fcall.h"


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
ZEPHIR_INIT_CLASS(Pocketmine_Math_Facing) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Facing, pocketmine, math_facing, pocketmine_math_facing_method_entry, 0);

	zend_declare_property_null(pocketmine_math_facing_ce, SL("all"), ZEND_ACC_PUBLIC|ZEND_ACC_STATIC);

	zend_declare_property_null(pocketmine_math_facing_ce, SL("horizonal"), ZEND_ACC_PUBLIC|ZEND_ACC_STATIC);

	zend_declare_property_null(pocketmine_math_facing_ce, SL("clockwise"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("AXIS_Y"), 0);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("AXIS_Z"), 1);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("AXIS_X"), 2);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("FLAG_AXIS_POSITIVE"), 1);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("DOWN"), 0);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("UP"), 1);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("NORTH"), 2);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("SOUTH"), 3);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("WEST"), 4);

	zephir_declare_class_constant_long(pocketmine_math_facing_ce, SL("EAST"), 5);

	return SUCCESS;

}

/**
 * Returns the axis of the given direction.
 *
 * @param int $direction
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Math_Facing, axis) {

	zval *direction_param = NULL;
	zend_long direction;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &direction_param);

	direction = zephir_get_intval(direction_param);


	RETURN_LONG((direction >> 1));

}

/**
 * Returns whether the direction is facing the positive of its axis.
 *
 * @param int $direction
 *
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_Facing, isPositive) {

	zval *direction_param = NULL;
	zend_long direction;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &direction_param);

	direction = zephir_get_intval(direction_param);


	RETURN_BOOL(((direction & 1)) == 1);

}

/**
 * Returns the opposite Facing of the specified one.
 *
 * @param int $direction 0-5 one of the self::* constants
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Math_Facing, opposite) {

	zval *direction_param = NULL;
	zend_long direction;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &direction_param);

	direction = zephir_get_intval(direction_param);


	RETURN_LONG((direction ^ 1));

}

/**
 * Rotates the given direction around the axis.
 *
 * @param int  $direction
 * @param int  $axis
 * @param bool $clockwise
 *
 * @return int
 * @throws \InvalidArgumentException if not possible to rotate $direction around $axis
 */
PHP_METHOD(Pocketmine_Math_Facing, rotate) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool clockwise;
	zval *direction_param = NULL, *axis_param = NULL, *clockwise_param = NULL, _0, _1, _2, rotated, _3, _4, _5;
	zend_long direction, axis, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&rotated);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &direction_param, &axis_param, &clockwise_param);

	direction = zephir_get_intval(direction_param);
	axis = zephir_get_intval(axis_param);
	clockwise = zephir_get_boolval(clockwise_param);


	zephir_read_static_property_ce(&_0, pocketmine_math_facing_ce, SL("clockwise"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_isset_long(&_0, axis))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Invalid axis {axis}", "pocketmine/math/facing.zep", 122);
		return;
	}
	zephir_read_static_property_ce(&_1, pocketmine_math_facing_ce, SL("clockwise"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_2, &_1, axis, PH_READONLY, "pocketmine/math/facing.zep", 124);
	if (!(zephir_array_isset_long(&_2, direction))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Cannot rotate direction {direction} around axis {axis}", "pocketmine/math/facing.zep", 125);
		return;
	}
	zephir_read_static_property_ce(&_3, pocketmine_math_facing_ce, SL("clockwise"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_4, &_3, axis, PH_NOISY | PH_READONLY, "pocketmine/math/facing.zep", 127);
	ZEPHIR_OBS_VAR(&rotated);
	zephir_array_fetch_long(&rotated, &_4, direction, PH_NOISY, "pocketmine/math/facing.zep", 127);
	ZEPHIR_INIT_VAR(&_5);
	if (clockwise) {
		ZEPHIR_CPY_WRT(&_5, &rotated);
	} else {
		ZEPHIR_CALL_SELF(&_5, "opposite", NULL, 0, &rotated);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&_5);

}

/**
 * @param int  $direction
 * @param bool $clockwise
 *
 * @return int
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_Facing, rotateY) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool clockwise;
	zval *direction_param = NULL, *clockwise_param = NULL, _0, _1, _2;
	zend_long direction, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &direction_param, &clockwise_param);

	direction = zephir_get_intval(direction_param);
	clockwise = zephir_get_boolval(clockwise_param);


	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, 0);
	if (clockwise) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	ZEPHIR_RETURN_CALL_SELF("rotate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int  $direction
 * @param bool $clockwise
 *
 * @return int
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_Facing, rotateZ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool clockwise;
	zval *direction_param = NULL, *clockwise_param = NULL, _0, _1, _2;
	zend_long direction, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &direction_param, &clockwise_param);

	direction = zephir_get_intval(direction_param);
	clockwise = zephir_get_boolval(clockwise_param);


	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, 1);
	if (clockwise) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	ZEPHIR_RETURN_CALL_SELF("rotate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int  $direction
 * @param bool $clockwise
 *
 * @return int
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_Facing, rotateX) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool clockwise;
	zval *direction_param = NULL, *clockwise_param = NULL, _0, _1, _2;
	zend_long direction, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &direction_param, &clockwise_param);

	direction = zephir_get_intval(direction_param);
	clockwise = zephir_get_boolval(clockwise_param);


	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, 2);
	if (clockwise) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	ZEPHIR_RETURN_CALL_SELF("rotate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Validates the given integer as a Facing direction.
 *
 * @param int $facing
 * @throws \InvalidArgumentException if the argument is not a valid Facing constant
 */
PHP_METHOD(Pocketmine_Math_Facing, validate) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *facing_param = NULL, __$true, _0, _1, _2;
	zend_long facing, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &facing_param);

	facing = zephir_get_intval(facing_param);


	zephir_read_static_property_ce(&_0, pocketmine_math_facing_ce, SL("all"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_1, facing);
	ZEPHIR_CALL_FUNCTION(&_2, "in_array", NULL, 3, &_1, &_0, &__$true);
	zephir_check_call_status();
	if (!zephir_is_true(&_2)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Invalid direction {facing}", "pocketmine/math/facing.zep", 176);
		return;
	}
	ZEPHIR_MM_RESTORE();

}

void zephir_init_static_properties_Pocketmine_Math_Facing(TSRMLS_D) {

	zval _2;
	zval _0, _1, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 4, 0);
	add_index_long(&_1, 2, 5);
	add_index_long(&_1, 5, 3);
	add_index_long(&_1, 3, 4);
	add_index_long(&_1, 4, 2);
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	zephir_create_array(&_1, 4, 0);
	add_index_long(&_1, 1, 5);
	add_index_long(&_1, 5, 0);
	add_index_long(&_1, 0, 4);
	add_index_long(&_1, 4, 1);
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	zephir_create_array(&_1, 4, 0);
	add_index_long(&_1, 1, 2);
	add_index_long(&_1, 2, 0);
	add_index_long(&_1, 0, 3);
	add_index_long(&_1, 3, 1);
	zephir_array_fast_append(&_0, &_1);
	zephir_update_static_property_ce(pocketmine_math_facing_ce, ZEND_STRL("clockwise"), &_0);
	ZEPHIR_INIT_NVAR(&_1);
	zephir_create_array(&_1, 4, 0);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_LONG(&_2, 2);
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 3);
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 4);
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 5);
	zephir_array_fast_append(&_1, &_2);
	zephir_update_static_property_ce(pocketmine_math_facing_ce, ZEND_STRL("horizonal"), &_1);
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 6, 0);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 0);
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 1);
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 2);
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 3);
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 4);
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_LONG(&_2, 5);
	zephir_array_fast_append(&_3, &_2);
	zephir_update_static_property_ce(pocketmine_math_facing_ce, ZEND_STRL("all"), &_3);
	ZEPHIR_MM_RESTORE();

}

