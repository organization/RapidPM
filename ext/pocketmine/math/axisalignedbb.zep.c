
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/array.h"


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
ZEPHIR_INIT_CLASS(Pocketmine_Math_AxisAlignedBB) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, AxisAlignedBB, pocketmine, math_axisalignedbb, pocketmine_math_axisalignedbb_method_entry, 0);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("minX"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("minY"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("minZ"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("maxX"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("maxY"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var float */
	zend_declare_property_double(pocketmine_math_axisalignedbb_ce, SL("maxZ"), 0.0, ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, __construct) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *minX_param = NULL, *minY_param = NULL, *minZ_param = NULL, *maxX_param = NULL, *maxY_param = NULL, *maxZ_param = NULL, _0, _1, _2, _3, _4, _5;
	double minX, minY, minZ, maxX, maxY, maxZ;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 6, 0, &minX_param, &minY_param, &minZ_param, &maxX_param, &maxY_param, &maxZ_param);

	minX = zephir_get_doubleval(minX_param);
	minY = zephir_get_doubleval(minY_param);
	minZ = zephir_get_doubleval(minZ_param);
	maxX = zephir_get_doubleval(maxX_param);
	maxY = zephir_get_doubleval(maxY_param);
	maxZ = zephir_get_doubleval(maxZ_param);


	ZVAL_DOUBLE(&_0, minX);
	ZVAL_DOUBLE(&_1, minY);
	ZVAL_DOUBLE(&_2, minZ);
	ZVAL_DOUBLE(&_3, maxX);
	ZVAL_DOUBLE(&_4, maxY);
	ZVAL_DOUBLE(&_5, maxZ);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setbounds", NULL, 0, &_0, &_1, &_2, &_3, &_4, &_5);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, setBounds) {

	zval *minX_param = NULL, *minY_param = NULL, *minZ_param = NULL, *maxX_param = NULL, *maxY_param = NULL, *maxZ_param = NULL, _0;
	double minX, minY, minZ, maxX, maxY, maxZ;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(6, 0, &minX_param, &minY_param, &minZ_param, &maxX_param, &maxY_param, &maxZ_param);

	minX = zephir_get_doubleval(minX_param);
	minY = zephir_get_doubleval(minY_param);
	minZ = zephir_get_doubleval(minZ_param);
	maxX = zephir_get_doubleval(maxX_param);
	maxY = zephir_get_doubleval(maxY_param);
	maxZ = zephir_get_doubleval(maxZ_param);


	if (minX > maxX) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "minX {minX} is larger than maxX {maxX}", "pocketmine/math/axisalignedbb.zep", 41);
		return;
	}
	if (minY > maxY) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "minY {minY} is larger than maxY {maxY}", "pocketmine/math/axisalignedbb.zep", 44);
		return;
	}
	if (minZ > maxZ) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "minZ {minZ} is larger than maxZ {maxZ}", "pocketmine/math/axisalignedbb.zep", 47);
		return;
	}
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, minX);
	zephir_update_property_zval(this_ptr, SL("minX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, minY);
	zephir_update_property_zval(this_ptr, SL("minY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, minZ);
	zephir_update_property_zval(this_ptr, SL("minZ"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, maxX);
	zephir_update_property_zval(this_ptr, SL("maxX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, maxY);
	zephir_update_property_zval(this_ptr, SL("maxY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, maxZ);
	zephir_update_property_zval(this_ptr, SL("maxZ"), &_0);
	RETURN_THISW();

}

/**
 * Sets the bounding box's bounds from another AxisAlignedBB, and returns itself
 *
 * @param AxisAlignedBB $bb
 * @return $this
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, setBB) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *bb, bb_sub, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &bb);



	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, bb, SL("minX"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(&_1);
	zephir_read_property(&_1, bb, SL("minY"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(&_2);
	zephir_read_property(&_2, bb, SL("minZ"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(&_3);
	zephir_read_property(&_3, bb, SL("maxX"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(&_4);
	zephir_read_property(&_4, bb, SL("maxY"), PH_NOISY_CC);
	ZEPHIR_OBS_VAR(&_5);
	zephir_read_property(&_5, bb, SL("maxZ"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_6, zephir_get_doubleval(&_0));
	ZVAL_DOUBLE(&_7, zephir_get_doubleval(&_1));
	ZVAL_DOUBLE(&_8, zephir_get_doubleval(&_2));
	ZVAL_DOUBLE(&_9, zephir_get_doubleval(&_3));
	ZVAL_DOUBLE(&_10, zephir_get_doubleval(&_4));
	ZVAL_DOUBLE(&_11, zephir_get_doubleval(&_5));
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setbounds", NULL, 0, &_6, &_7, &_8, &_9, &_10, &_11);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a new AxisAlignedBB extended by the specified X, Y and Z.
 * If each of X, Y and Z are positive, the relevant max bound will be increased. If negative, the relevant min
 * bound will be decreased.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, addCoord) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	double x, y, z, minX, minY, minZ, maxX, maxY, maxZ;
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	zephir_read_property(&_0, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	minX = zephir_get_numberval(&_0);
	zephir_read_property(&_1, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	minY = zephir_get_numberval(&_1);
	zephir_read_property(&_2, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	minZ = zephir_get_numberval(&_2);
	zephir_read_property(&_3, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	maxX = zephir_get_numberval(&_3);
	zephir_read_property(&_4, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
	maxY = zephir_get_numberval(&_4);
	zephir_read_property(&_5, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
	maxZ = zephir_get_numberval(&_5);
	if (x < 0) {
		minX += x;
	} else if (x > 0) {
		maxX += x;
	}
	if (y < 0) {
		minY += y;
	} else if (y > 0) {
		maxY += y;
	}
	if (z < 0) {
		minZ += z;
	} else if (z > 0) {
		maxZ += z;
	}
	object_init_ex(return_value, pocketmine_math_axisalignedbb_ce);
	ZVAL_DOUBLE(&_6, minX);
	ZVAL_DOUBLE(&_7, minY);
	ZVAL_DOUBLE(&_8, minZ);
	ZVAL_DOUBLE(&_9, maxX);
	ZVAL_DOUBLE(&_10, maxY);
	ZVAL_DOUBLE(&_11, maxZ);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 1, &_6, &_7, &_8, &_9, &_10, &_11);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Outsets the bounds of this AxisAlignedBB by the specified X, Y and Z.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return $this
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, expand) {

	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("minX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("minY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("minZ"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("maxX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("maxY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("maxZ"), &_0);
	RETURN_THISW();

}

/**
 * Returns an expanded clone of this AxisAlignedBB.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, expandedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_VAR(&_0);
	if (zephir_clone(&_0, this_ptr TSRMLS_CC) == FAILURE) {
		RETURN_MM();
	}
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "expand", NULL, 0, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Shifts this AxisAlignedBB by the given X, Y and Z.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return $this
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, offset) {

	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("minX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("minY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("minZ"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("maxX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("maxY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("maxZ"), &_0);
	RETURN_THISW();

}

/**
 * Returns an offset clone of this AxisAlignedBB.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, offsetCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_VAR(&_0);
	if (zephir_clone(&_0, this_ptr TSRMLS_CC) == FAILURE) {
		RETURN_MM();
	}
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "offset", NULL, 0, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Insets the bounds of this AxisAlignedBB by the specified X, Y and Z.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return $this
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, contract) {

	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("minX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("minY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("minZ"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, x);
	zephir_update_property_zval(this_ptr, SL("maxX"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, y);
	zephir_update_property_zval(this_ptr, SL("maxY"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_DOUBLE(&_0, z);
	zephir_update_property_zval(this_ptr, SL("maxZ"), &_0);
	RETURN_THISW();

}

/**
 * Returns a contracted clone of this AxisAlignedBB.
 *
 * @param float $x
 * @param float $y
 * @param float $z
 *
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, contractedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	double x, y, z;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &x_param, &y_param, &z_param);

	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);


	ZEPHIR_INIT_VAR(&_0);
	if (zephir_clone(&_0, this_ptr TSRMLS_CC) == FAILURE) {
		RETURN_MM();
	}
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "contract", NULL, 0, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Extends the AABB in the given direction.
 *
 * @param int   $face
 * @param float $distance Negative values pull the face in, positive values push out.
 *
 * @return $this
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, extend) {

	double distance;
	zval *face_param = NULL, *distance_param = NULL, _0$$3, _1$$4, _2$$5, _3$$6, _4$$7, _5$$8;
	zend_long face;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$6);
	ZVAL_UNDEF(&_4$$7);
	ZVAL_UNDEF(&_5$$8);

	zephir_fetch_params_without_memory_grow(2, 0, &face_param, &distance_param);

	face = zephir_get_intval(face_param);
	distance = zephir_get_doubleval(distance_param);


	if (face == 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_DOUBLE(&_0$$3, distance);
		zephir_update_property_zval(this_ptr, SL("minY"), &_0$$3);
	} else if (face == 1) {
		ZEPHIR_INIT_ZVAL_NREF(_1$$4);
		ZVAL_DOUBLE(&_1$$4, distance);
		zephir_update_property_zval(this_ptr, SL("maxY"), &_1$$4);
	} else if (face == 2) {
		ZEPHIR_INIT_ZVAL_NREF(_2$$5);
		ZVAL_DOUBLE(&_2$$5, distance);
		zephir_update_property_zval(this_ptr, SL("minZ"), &_2$$5);
	} else if (face == 3) {
		ZEPHIR_INIT_ZVAL_NREF(_3$$6);
		ZVAL_DOUBLE(&_3$$6, distance);
		zephir_update_property_zval(this_ptr, SL("maxZ"), &_3$$6);
	} else if (face == 4) {
		ZEPHIR_INIT_ZVAL_NREF(_4$$7);
		ZVAL_DOUBLE(&_4$$7, distance);
		zephir_update_property_zval(this_ptr, SL("minX"), &_4$$7);
	} else if (face == 5) {
		ZEPHIR_INIT_ZVAL_NREF(_5$$8);
		ZVAL_DOUBLE(&_5$$8, distance);
		zephir_update_property_zval(this_ptr, SL("maxX"), &_5$$8);
	} else {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Invalid face {face}", "pocketmine/math/axisalignedbb.zep", 232);
		return;
	}
	RETURN_THISW();

}

/**
 * Returns an extended clone of this bounding box.
 * @see AxisAlignedBB::extend()
 *
 * @param int   $face
 * @param float $distance
 *
 * @return AxisAlignedBB
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, extendedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *face_param = NULL, *distance_param = NULL, _0, _1, _2;
	zend_long face, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &face_param, &distance_param);

	face = zephir_get_intval(face_param);
	distance = zephir_get_doubleval(distance_param);


	ZEPHIR_INIT_VAR(&_0);
	if (zephir_clone(&_0, this_ptr TSRMLS_CC) == FAILURE) {
		RETURN_MM();
	}
	ZVAL_LONG(&_1, face);
	ZVAL_DOUBLE(&_2, distance);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "extend", NULL, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Inverse of extend().
 * @see AxisAlignedBB::extend()
 *
 * @param int   $face
 * @param float $distance Positive values pull the face in, negative values push out.
 *
 * @return $this
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, trim) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *face_param = NULL, *distance_param = NULL, _0, _1;
	zend_long face, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &face_param, &distance_param);

	face = zephir_get_intval(face_param);
	distance = zephir_get_doubleval(distance_param);


	ZVAL_LONG(&_0, face);
	ZVAL_DOUBLE(&_1, -distance);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "extend", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a trimmed clone of this bounding box.
 * @see AxisAlignedBB::trim()
 *
 * @param int   $face
 * @param float $distance
 *
 * @return AxisAlignedBB
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, trimmedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *face_param = NULL, *distance_param = NULL, _0, _1;
	zend_long face, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &face_param, &distance_param);

	face = zephir_get_intval(face_param);
	distance = zephir_get_doubleval(distance_param);


	ZVAL_LONG(&_0, face);
	ZVAL_DOUBLE(&_1, -distance);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "extendedcopy", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Increases the dimension of the AABB along the given axis.
 *
 * @param int   $axis one of the Facing::AXIS_* constants
 * @param float $distance Negative values reduce width, positive values increase width.
 *
 * @return $this
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, stretch) {

	double distance;
	zval *axis_param = NULL, *distance_param = NULL, _0$$3, _1$$4, _2$$5;
	zend_long axis;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);

	zephir_fetch_params_without_memory_grow(2, 0, &axis_param, &distance_param);

	axis = zephir_get_intval(axis_param);
	distance = zephir_get_doubleval(distance_param);


	if (axis == 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_DOUBLE(&_0$$3, distance);
		zephir_update_property_zval(this_ptr, SL("minY"), &_0$$3);
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_DOUBLE(&_0$$3, distance);
		zephir_update_property_zval(this_ptr, SL("maxY"), &_0$$3);
	} else if (axis == 1) {
		ZEPHIR_INIT_ZVAL_NREF(_1$$4);
		ZVAL_DOUBLE(&_1$$4, distance);
		zephir_update_property_zval(this_ptr, SL("minZ"), &_1$$4);
		ZEPHIR_INIT_ZVAL_NREF(_1$$4);
		ZVAL_DOUBLE(&_1$$4, distance);
		zephir_update_property_zval(this_ptr, SL("maxZ"), &_1$$4);
	} else if (axis == 2) {
		ZEPHIR_INIT_ZVAL_NREF(_2$$5);
		ZVAL_DOUBLE(&_2$$5, distance);
		zephir_update_property_zval(this_ptr, SL("minX"), &_2$$5);
		ZEPHIR_INIT_ZVAL_NREF(_2$$5);
		ZVAL_DOUBLE(&_2$$5, distance);
		zephir_update_property_zval(this_ptr, SL("maxX"), &_2$$5);
	} else {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STRW(spl_ce_InvalidArgumentException, "Invalid axis {axis}", "pocketmine/math/axisalignedbb.zep", 303);
		return;
	}
	RETURN_THISW();

}

/**
 * Returns a stretched copy of this bounding box.
 * @see AxisAlignedBB::stretch()
 *
 * @param int   $axis
 * @param float $distance
 *
 * @return AxisAlignedBB
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, stretchedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *axis_param = NULL, *distance_param = NULL, _0, _1, _2;
	zend_long axis, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &axis_param, &distance_param);

	axis = zephir_get_intval(axis_param);
	distance = zephir_get_doubleval(distance_param);


	ZEPHIR_INIT_VAR(&_0);
	if (zephir_clone(&_0, this_ptr TSRMLS_CC) == FAILURE) {
		RETURN_MM();
	}
	ZVAL_LONG(&_1, axis);
	ZVAL_DOUBLE(&_2, distance);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "stretch", NULL, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reduces the dimension of the AABB on the given axis. Inverse of stretch().
 * @see AxisAlignedBB::stretch()
 *
 * @param int   $axis
 * @param float $distance
 *
 * @return $this
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, squash) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *axis_param = NULL, *distance_param = NULL, _0, _1;
	zend_long axis, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &axis_param, &distance_param);

	axis = zephir_get_intval(axis_param);
	distance = zephir_get_doubleval(distance_param);


	ZVAL_LONG(&_0, axis);
	ZVAL_DOUBLE(&_1, -distance);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "stretch", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a squashed copy of this bounding box.
 * @see AxisAlignedBB::squash()
 *
 * @param int   $axis
 * @param float $distance
 *
 * @return AxisAlignedBB
 * @throws \InvalidArgumentException
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, squashedCopy) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double distance;
	zval *axis_param = NULL, *distance_param = NULL, _0, _1;
	zend_long axis, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &axis_param, &distance_param);

	axis = zephir_get_intval(axis_param);
	distance = zephir_get_doubleval(distance_param);


	ZVAL_LONG(&_0, axis);
	ZVAL_DOUBLE(&_1, -distance);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "stretchedcopy", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateXOffset) {

	zend_bool _2, _7, _10, _13;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bb, bb_sub, x, *x_param = NULL, x2, x1, _0, _1, _3, _4, _5, _6, _8, _9, _11, _12, _14, _15, _16$$5, _17$$5, _18$$7, _19$$7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
	ZVAL_UNDEF(&x);
	ZVAL_UNDEF(&x2);
	ZVAL_UNDEF(&x1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);
	ZVAL_UNDEF(&_18$$7);
	ZVAL_UNDEF(&_19$$7);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &bb, &x_param);

	x = zephir_get_doubleval(x_param);


	zephir_read_property(&_0, bb, SL("maxY"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_LE(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, bb, SL("minY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GE(&_3, &_4);
	}
	if (_2) {
		RETURN_CCTOR(&x);
	}
	zephir_read_property(&_5, bb, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	_7 = ZEPHIR_LE(&_5, &_6);
	if (!(_7)) {
		zephir_read_property(&_8, bb, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_9, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_7 = ZEPHIR_GE(&_8, &_9);
	}
	if (_7) {
		RETURN_CCTOR(&x);
	}
	_10 = ZEPHIR_GT_LONG(&x, 0);
	if (_10) {
		zephir_read_property(&_11, bb, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_12, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
		_10 = ZEPHIR_LE(&_11, &_12);
	}
	_13 = ZEPHIR_LT_LONG(&x, 0);
	if (_13) {
		zephir_read_property(&_14, bb, SL("minX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_15, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_13 = ZEPHIR_GE(&_14, &_15);
	}
	if (_10) {
		zephir_read_property(&_16$$5, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_17$$5, bb, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&x1);
		zephir_sub_function(&x1, &_16$$5, &_17$$5);
		if (ZEPHIR_LT(&x1, &x)) {
			ZEPHIR_CPY_WRT(&x, &x1);
		}
	} else if (_13) {
		zephir_read_property(&_18$$7, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_19$$7, bb, SL("minX"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&x2);
		zephir_sub_function(&x2, &_18$$7, &_19$$7);
		if (ZEPHIR_GT(&x2, &x)) {
			ZEPHIR_CPY_WRT(&x, &x2);
		}
	}
	RETURN_CCTOR(&x);

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateYOffset) {

	zend_bool _2, _7, _10, _13;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bb, bb_sub, y, *y_param = NULL, y2, y1, _0, _1, _3, _4, _5, _6, _8, _9, _11, _12, _14, _15, _16$$5, _17$$5, _18$$7, _19$$7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
	ZVAL_UNDEF(&y);
	ZVAL_UNDEF(&y2);
	ZVAL_UNDEF(&y1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);
	ZVAL_UNDEF(&_18$$7);
	ZVAL_UNDEF(&_19$$7);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &bb, &y_param);

	y = zephir_get_doubleval(y_param);


	zephir_read_property(&_0, bb, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_LE(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, bb, SL("minX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GE(&_3, &_4);
	}
	if (_2) {
		RETURN_CCTOR(&y);
	}
	zephir_read_property(&_5, bb, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	_7 = ZEPHIR_LE(&_5, &_6);
	if (!(_7)) {
		zephir_read_property(&_8, bb, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_9, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_7 = ZEPHIR_GE(&_8, &_9);
	}
	if (_7) {
		RETURN_CCTOR(&y);
	}
	_10 = ZEPHIR_GT_LONG(&y, 0);
	if (_10) {
		zephir_read_property(&_11, bb, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_12, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
		_10 = ZEPHIR_LE(&_11, &_12);
	}
	_13 = ZEPHIR_LT_LONG(&y, 0);
	if (_13) {
		zephir_read_property(&_14, bb, SL("minY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_15, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_13 = ZEPHIR_GE(&_14, &_15);
	}
	if (_10) {
		zephir_read_property(&_16$$5, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_17$$5, bb, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&y1);
		zephir_sub_function(&y1, &_16$$5, &_17$$5);
		if (ZEPHIR_LT(&y1, &y)) {
			ZEPHIR_CPY_WRT(&y, &y1);
		}
	} else if (_13) {
		zephir_read_property(&_18$$7, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_19$$7, bb, SL("minY"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&y2);
		zephir_sub_function(&y2, &_18$$7, &_19$$7);
		if (ZEPHIR_GT(&y2, &y)) {
			ZEPHIR_CPY_WRT(&y, &y2);
		}
	}
	RETURN_CCTOR(&y);

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateZOffset) {

	zend_bool _2, _7, _10, _13;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bb, bb_sub, z, *z_param = NULL, z2, z1, _0, _1, _3, _4, _5, _6, _8, _9, _11, _12, _14, _15, _16$$5, _17$$5, _18$$7, _19$$7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
	ZVAL_UNDEF(&z);
	ZVAL_UNDEF(&z2);
	ZVAL_UNDEF(&z1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);
	ZVAL_UNDEF(&_18$$7);
	ZVAL_UNDEF(&_19$$7);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &bb, &z_param);

	z = zephir_get_doubleval(z_param);


	zephir_read_property(&_0, bb, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_LE(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, bb, SL("minX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GE(&_3, &_4);
	}
	if (_2) {
		RETURN_CCTOR(&z);
	}
	zephir_read_property(&_5, bb, SL("maxY"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	_7 = ZEPHIR_LE(&_5, &_6);
	if (!(_7)) {
		zephir_read_property(&_8, bb, SL("minY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_9, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_7 = ZEPHIR_GE(&_8, &_9);
	}
	if (_7) {
		RETURN_CCTOR(&z);
	}
	_10 = ZEPHIR_GT_LONG(&z, 0);
	if (_10) {
		zephir_read_property(&_11, bb, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_12, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		_10 = ZEPHIR_LE(&_11, &_12);
	}
	_13 = ZEPHIR_LT_LONG(&z, 0);
	if (_13) {
		zephir_read_property(&_14, bb, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_15, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_13 = ZEPHIR_GE(&_14, &_15);
	}
	if (_10) {
		zephir_read_property(&_16$$5, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_17$$5, bb, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&z1);
		zephir_sub_function(&z1, &_16$$5, &_17$$5);
		if (ZEPHIR_LT(&z1, &z)) {
			ZEPHIR_CPY_WRT(&z, &z1);
		}
	} else if (_13) {
		zephir_read_property(&_18$$7, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_19$$7, bb, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&z2);
		zephir_sub_function(&z2, &_18$$7, &_19$$7);
		if (ZEPHIR_GT(&z2, &z)) {
			ZEPHIR_CPY_WRT(&z, &z2);
		}
	}
	RETURN_CCTOR(&z);

}

/**
 * Returns whether any part of the specified AABB is inside (intersects with) this one.
 *
 * @param AxisAlignedBB $bb
 * @param float         $epsilon
 *
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, intersectsWith) {

	zend_bool _3, _8$$3, _13$$4;
	double epsilon;
	zval *bb, bb_sub, *epsilon_param = NULL, _0, _1, _2, _4, _5$$3, _6$$3, _7$$3, _9$$3, _10$$4, _11$$4, _12$$4, _14$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_14$$4);

	zephir_fetch_params_without_memory_grow(1, 1, &bb, &epsilon_param);

	if (!epsilon_param) {
		epsilon = 0.00001;
	} else {
		epsilon = zephir_get_doubleval(epsilon_param);
	}


	zephir_read_property(&_0, bb, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_2);
	zephir_sub_function(&_2, &_0, &_1);
	_3 = ZEPHIR_GT_DOUBLE(&_2, epsilon);
	if (_3) {
		zephir_read_property(&_0, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_1, bb, SL("minX"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_SINIT_VAR(_4);
		zephir_sub_function(&_4, &_0, &_1);
		_3 = ZEPHIR_GT_DOUBLE(&_4, epsilon);
	}
	if (_3) {
		zephir_read_property(&_5$$3, bb, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$3, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_SINIT_VAR(_7$$3);
		zephir_sub_function(&_7$$3, &_5$$3, &_6$$3);
		_8$$3 = ZEPHIR_GT_DOUBLE(&_7$$3, epsilon);
		if (_8$$3) {
			zephir_read_property(&_5$$3, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_6$$3, bb, SL("minY"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_SINIT_VAR(_9$$3);
			zephir_sub_function(&_9$$3, &_5$$3, &_6$$3);
			_8$$3 = ZEPHIR_GT_DOUBLE(&_9$$3, epsilon);
		}
		if (_8$$3) {
			zephir_read_property(&_10$$4, bb, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_11$$4, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_SINIT_VAR(_12$$4);
			zephir_sub_function(&_12$$4, &_10$$4, &_11$$4);
			_13$$4 = ZEPHIR_GT_DOUBLE(&_12$$4, epsilon);
			if (_13$$4) {
				zephir_read_property(&_10$$4, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
				zephir_read_property(&_11$$4, bb, SL("minZ"), PH_NOISY_CC | PH_READONLY);
				ZEPHIR_SINIT_VAR(_14$$4);
				zephir_sub_function(&_14$$4, &_10$$4, &_11$$4);
				_13$$4 = ZEPHIR_GT_DOUBLE(&_14$$4, epsilon);
			}
			RETURN_BOOL(_13$$4);
		}
	}
	RETURN_BOOL(0);

}

/**
 * Returns whether the specified vector is within the bounds of this AABB on all axes.
 *
 * @param Vector3 $vector
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInside) {

	zend_bool _2, _7, _12;
	zval *vector, vector_sub, _0, _1, _3, _4, _5, _6, _8, _9, _10, _11, _13, _14;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&vector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);

	zephir_fetch_params_without_memory_grow(1, 0, &vector);



	zephir_read_property(&_0, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_LE(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GE(&_3, &_4);
	}
	if (_2) {
		RETURN_BOOL(0);
	}
	zephir_read_property(&_5, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	_7 = ZEPHIR_LE(&_5, &_6);
	if (!(_7)) {
		zephir_read_property(&_8, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_9, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_7 = ZEPHIR_GE(&_8, &_9);
	}
	if (_7) {
		RETURN_BOOL(0);
	}
	zephir_read_property(&_10, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_11, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	_12 = ZEPHIR_GT(&_10, &_11);
	if (_12) {
		zephir_read_property(&_13, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_14, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_12 = ZEPHIR_LT(&_13, &_14);
	}
	RETURN_BOOL(_12);

}

/**
 * Returns the mean average of the AABB's X, Y and Z lengths.
 * @return float
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, getAverageEdgeLength) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_2);
	zephir_sub_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_3);
	zephir_add_function(&_3, &_2, &_0);
	zephir_read_property(&_0, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_NVAR(_2);
	zephir_sub_function(&_2, &_3, &_0);
	zephir_read_property(&_0, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_NVAR(_3);
	zephir_add_function(&_3, &_2, &_0);
	zephir_read_property(&_0, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_4);
	zephir_sub_function(&_4, &_3, &_0);
	RETURN_MM_DOUBLE(zephir_safe_div_zval_long(&_4, 3 TSRMLS_CC));

}

/**
 * Returns the interior volume of the AABB.
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, getVolume) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	zephir_sub_function(&_2, &_0, &_1);
	zephir_read_property(&_0, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	zephir_sub_function(&_3, &_0, &_1);
	ZEPHIR_SINIT_VAR(_4);
	mul_function(&_4, &_2, &_3 TSRMLS_CC);
	zephir_read_property(&_0, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_LNVAR(_2);
	zephir_sub_function(&_2, &_0, &_1);
	mul_function(return_value, &_4, &_2 TSRMLS_CC);
	RETURN_MM();

}

/**
 * Returns whether the specified vector is within the Y and Z bounds of this AABB.
 *
 * @param Vector3 $vector
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInYZ) {

	zend_bool _2, _5, _8;
	zval *vector, vector_sub, _0, _1, _3, _4, _6, _7, _9, _10;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&vector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);

	zephir_fetch_params_without_memory_grow(1, 0, &vector);



	zephir_read_property(&_0, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_GE(&_0, &_1);
	if (_2) {
		zephir_read_property(&_3, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_LE(&_3, &_4);
	}
	_5 = _2;
	if (_5) {
		zephir_read_property(&_6, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_7, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		_5 = ZEPHIR_GE(&_6, &_7);
	}
	_8 = _5;
	if (_8) {
		zephir_read_property(&_9, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_10, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_8 = ZEPHIR_LE(&_9, &_10);
	}
	RETURN_BOOL(_8);

}

/**
 * Returns whether the specified vector is within the X and Z bounds of this AABB.
 *
 * @param Vector3 $vector
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInXZ) {

	zend_bool _2, _5, _8;
	zval *vector, vector_sub, _0, _1, _3, _4, _6, _7, _9, _10;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&vector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);

	zephir_fetch_params_without_memory_grow(1, 0, &vector);



	zephir_read_property(&_0, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_GE(&_0, &_1);
	if (_2) {
		zephir_read_property(&_3, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_LE(&_3, &_4);
	}
	_5 = _2;
	if (_5) {
		zephir_read_property(&_6, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_7, this_ptr, SL("minZ"), PH_NOISY_CC | PH_READONLY);
		_5 = ZEPHIR_GE(&_6, &_7);
	}
	_8 = _5;
	if (_8) {
		zephir_read_property(&_9, vector, SL("z"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_10, this_ptr, SL("maxZ"), PH_NOISY_CC | PH_READONLY);
		_8 = ZEPHIR_LE(&_9, &_10);
	}
	RETURN_BOOL(_8);

}

/**
 * Returns whether the specified vector is within the X and Y bounds of this AABB.
 *
 * @param Vector3 $vector
 * @return bool
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInXY) {

	zend_bool _2, _5, _8;
	zval *vector, vector_sub, _0, _1, _3, _4, _6, _7, _9, _10;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&vector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);

	zephir_fetch_params_without_memory_grow(1, 0, &vector);



	zephir_read_property(&_0, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("minX"), PH_NOISY_CC | PH_READONLY);
	_2 = ZEPHIR_GE(&_0, &_1);
	if (_2) {
		zephir_read_property(&_3, vector, SL("x"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4, this_ptr, SL("maxX"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_LE(&_3, &_4);
	}
	_5 = _2;
	if (_5) {
		zephir_read_property(&_6, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_7, this_ptr, SL("minY"), PH_NOISY_CC | PH_READONLY);
		_5 = ZEPHIR_GE(&_6, &_7);
	}
	_8 = _5;
	if (_8) {
		zephir_read_property(&_9, vector, SL("y"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_10, this_ptr, SL("maxY"), PH_NOISY_CC | PH_READONLY);
		_8 = ZEPHIR_LE(&_9, &_10);
	}
	RETURN_BOOL(_8);

}

/**
 * Performs a ray-trace and calculates the point on the AABB's edge nearest the start position that the ray-trace
 * collided with. Returns a RayTraceResult with colliding vector closest to the start position.
 * Returns null if no colliding point was found.
 *
 * @param Vector3 $pos1
 * @param Vector3 $pos2
 *
 * @return RayTraceResult|null
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateIntercept) {

	zval _22;
	zend_bool _7, _10, _12, _15, _17, _20;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_9 = NULL, *_14 = NULL, *_19 = NULL, *_25 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pos1, pos1_sub, *pos2, pos2_sub, f, d, distance, vector, v6, v5, v4, v3, v2, v1, _0, _1, _2, _3, _4, _5, _6, _8, _11, _13, _16, _18, _21, v, *_23, _24;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pos1_sub);
	ZVAL_UNDEF(&pos2_sub);
	ZVAL_UNDEF(&f);
	ZVAL_UNDEF(&d);
	ZVAL_UNDEF(&distance);
	ZVAL_UNDEF(&vector);
	ZVAL_UNDEF(&v6);
	ZVAL_UNDEF(&v5);
	ZVAL_UNDEF(&v4);
	ZVAL_UNDEF(&v3);
	ZVAL_UNDEF(&v2);
	ZVAL_UNDEF(&v1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_22);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pos1, &pos2);



	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("minX"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_0));
	ZEPHIR_CALL_METHOD(&v1, pos1, "getintermediatewithxvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_2);
	zephir_read_property(&_2, this_ptr, SL("maxX"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_2));
	ZEPHIR_CALL_METHOD(&v2, pos1, "getintermediatewithxvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_3);
	zephir_read_property(&_3, this_ptr, SL("minY"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_3));
	ZEPHIR_CALL_METHOD(&v3, pos1, "getintermediatewithyvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_4);
	zephir_read_property(&_4, this_ptr, SL("maxY"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_4));
	ZEPHIR_CALL_METHOD(&v4, pos1, "getintermediatewithyvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_5);
	zephir_read_property(&_5, this_ptr, SL("minZ"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_5));
	ZEPHIR_CALL_METHOD(&v5, pos1, "getintermediatewithzvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_6);
	zephir_read_property(&_6, this_ptr, SL("maxZ"), PH_NOISY_CC);
	ZVAL_DOUBLE(&_1, zephir_get_doubleval(&_6));
	ZEPHIR_CALL_METHOD(&v6, pos1, "getintermediatewithzvalue", NULL, 0, pos2, &_1);
	zephir_check_call_status();
	_7 = Z_TYPE_P(&v1) != IS_NULL;
	if (_7) {
		ZEPHIR_CALL_METHOD(&_8, this_ptr, "isvectorinyz", &_9, 0, &v1);
		zephir_check_call_status();
		_7 = !zephir_is_true(&_8);
	}
	if (_7) {
		ZEPHIR_INIT_NVAR(&v1);
		ZVAL_NULL(&v1);
	}
	_10 = Z_TYPE_P(&v2) != IS_NULL;
	if (_10) {
		ZEPHIR_CALL_METHOD(&_11, this_ptr, "isvectorinyz", &_9, 0, &v2);
		zephir_check_call_status();
		_10 = !zephir_is_true(&_11);
	}
	if (_10) {
		ZEPHIR_INIT_NVAR(&v2);
		ZVAL_NULL(&v2);
	}
	_12 = Z_TYPE_P(&v3) != IS_NULL;
	if (_12) {
		ZEPHIR_CALL_METHOD(&_13, this_ptr, "isvectorinxz", &_14, 0, &v3);
		zephir_check_call_status();
		_12 = !zephir_is_true(&_13);
	}
	if (_12) {
		ZEPHIR_INIT_NVAR(&v3);
		ZVAL_NULL(&v3);
	}
	_15 = Z_TYPE_P(&v4) != IS_NULL;
	if (_15) {
		ZEPHIR_CALL_METHOD(&_16, this_ptr, "isvectorinxz", &_14, 0, &v4);
		zephir_check_call_status();
		_15 = !zephir_is_true(&_16);
	}
	if (_15) {
		ZEPHIR_INIT_NVAR(&v4);
		ZVAL_NULL(&v4);
	}
	_17 = Z_TYPE_P(&v5) != IS_NULL;
	if (_17) {
		ZEPHIR_CALL_METHOD(&_18, this_ptr, "isvectorinxy", &_19, 0, &v5);
		zephir_check_call_status();
		_17 = !zephir_is_true(&_18);
	}
	if (_17) {
		ZEPHIR_INIT_NVAR(&v5);
		ZVAL_NULL(&v5);
	}
	_20 = Z_TYPE_P(&v6) != IS_NULL;
	if (_20) {
		ZEPHIR_CALL_METHOD(&_21, this_ptr, "isvectorinxy", &_19, 0, &v6);
		zephir_check_call_status();
		_20 = !zephir_is_true(&_21);
	}
	if (_20) {
		ZEPHIR_INIT_NVAR(&v6);
		ZVAL_NULL(&v6);
	}
	ZEPHIR_INIT_VAR(&vector);
	ZVAL_NULL(&vector);
	ZEPHIR_INIT_VAR(&distance);
	ZEPHIR_MM_GET_CONSTANT(&distance, "PHP_INT_MAX");
	ZEPHIR_INIT_VAR(&_22);
	zephir_create_array(&_22, 6, 0 TSRMLS_CC);
	zephir_array_fast_append(&_22, &v1);
	zephir_array_fast_append(&_22, &v2);
	zephir_array_fast_append(&_22, &v3);
	zephir_array_fast_append(&_22, &v4);
	zephir_array_fast_append(&_22, &v5);
	zephir_array_fast_append(&_22, &v6);
	zephir_is_iterable(&_22, 0, "pocketmine/math/axisalignedbb.zep", 575);
	if (Z_TYPE_P(&_22) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_22), _23)
		{
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _23);
			if (Z_TYPE_P(&v) != IS_NULL) {
				ZEPHIR_CALL_METHOD(&d, pos1, "distancesquared", &_25, 0, &v);
				zephir_check_call_status();
				if (ZEPHIR_LT(&d, &distance)) {
					ZEPHIR_CPY_WRT(&vector, &v);
					ZEPHIR_CPY_WRT(&distance, &d);
				}
			}
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &_22, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_24, &_22, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_24)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&v, &_22, "current", NULL, 0);
			zephir_check_call_status();
				if (Z_TYPE_P(&v) != IS_NULL) {
					ZEPHIR_CALL_METHOD(&d, pos1, "distancesquared", &_25, 0, &v);
					zephir_check_call_status();
					if (ZEPHIR_LT(&d, &distance)) {
						ZEPHIR_CPY_WRT(&vector, &v);
						ZEPHIR_CPY_WRT(&distance, &d);
					}
				}
			ZEPHIR_CALL_METHOD(NULL, &_22, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	if (Z_TYPE_P(&vector) == IS_NULL) {
		RETURN_MM_NULL();
	}
	ZEPHIR_INIT_VAR(&f);
	ZVAL_LONG(&f, -1);
	if (ZEPHIR_IS_IDENTICAL(&vector, &v1)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 4);
	} else if (ZEPHIR_IS_IDENTICAL(&vector, &v2)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 5);
	} else if (ZEPHIR_IS_IDENTICAL(&vector, &v3)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 0);
	} else if (ZEPHIR_IS_IDENTICAL(&vector, &v4)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 1);
	} else if (ZEPHIR_IS_IDENTICAL(&vector, &v5)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 2);
	} else if (ZEPHIR_IS_IDENTICAL(&vector, &v6)) {
		ZEPHIR_INIT_NVAR(&f);
		ZVAL_LONG(&f, 3);
	}
	object_init_ex(return_value, pocketmine_math_raytraceresult_ce);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 2, this_ptr, &f, &vector);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, __toString) {

	zval *this_ptr = getThis();


	RETURN_STRING("AxisAlignedBB({this->minX}, {this->minY}, {this->minZ}, {this->maxX}, {this->maxY}, {this->maxZ})");

}

/**
 * Returns a 1x1x1 bounding box starting at grid position 0,0,0.
 *
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, one) {

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

	object_init_ex(return_value, pocketmine_math_axisalignedbb_ce);
	ZVAL_LONG(&_0, 0);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZVAL_LONG(&_3, 1);
	ZVAL_LONG(&_4, 1);
	ZVAL_LONG(&_5, 1);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 1, &_0, &_1, &_2, &_3, &_4, &_5);
	zephir_check_call_status();
	RETURN_MM();

}

