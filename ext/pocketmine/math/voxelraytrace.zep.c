
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/array.h"
#include "get_inf.h"
#include "kernel/math.h"


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
ZEPHIR_INIT_CLASS(Pocketmine_Math_VoxelRayTrace) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, VoxelRayTrace, pocketmine, math_voxelraytrace, pocketmine_math_voxelraytrace_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;

}

/**
 * Performs a ray trace from the start position in the given direction, for a distance of $maxDistance. This
 * returns a Generator which yields Vector3s containing the coordinates of voxels it passes through.
 *
 * @param Vector3 $start
 * @param Vector3 $directionVector
 * @param float   $maxDistance
 *
 * @return \Generator|Vector3[]
 */
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, inDirection) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double maxDistance;
	zval *start = NULL, start_sub, *directionVector = NULL, directionVector_sub, *maxDistance_param = NULL, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&directionVector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(directionVector, pocketmine_math_vector3_ce)
		Z_PARAM_ZVAL(maxDistance)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &start, &directionVector, &maxDistance_param);

	maxDistance = zephir_get_doubleval(maxDistance_param);


	ZVAL_DOUBLE(&_2, maxDistance);
	ZEPHIR_CALL_INTERNAL_METHOD_P1(&_1, directionVector, zep_Pocketmine_Math_Vector3_multiply_zephir_internal_call, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, start, "add", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P2(pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_betweenPoints_zephir_internal_call, start, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Spaceship operator
 */
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, spaceShip) {

	zval *a = NULL, a_sub, *b = NULL, b_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&a_sub);
	ZVAL_UNDEF(&b_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(2, 0, &a, &b);



	if (ZEPHIR_IS_EQUAL(a, b)) {
		RETURN_LONG(0);
	} else if (ZEPHIR_LT(a, b)) {
		RETURN_LONG(-1);
	} else {
		RETURN_LONG(1);
	}

}

/**
 * Performs a ray trace between the start and end coordinates. This returns a Generator which yields Vector3s
 * containing the coordinates of voxels it passes through.
 *
 * This is an implementation of the algorithm described in the link below.
 * @link http://www.cse.yorku.ca/~amana/research/grid.pdf
 *
 * @param Vector3 $start
 * @param Vector3 $end
 *
 * @return \Generator|Vector3[]
 */
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, betweenPoints) {

	zend_bool _15$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, counter;
	zval *start = NULL, start_sub, *end = NULL, end_sub, tDeltaZ, tDeltaY, tDeltaX, tMaxZ, tMaxY, tMaxX, stepZ, stepY, stepX, radius, directionVector, currentBlock, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, temp;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&end_sub);
	ZVAL_UNDEF(&tDeltaZ);
	ZVAL_UNDEF(&tDeltaY);
	ZVAL_UNDEF(&tDeltaX);
	ZVAL_UNDEF(&tMaxZ);
	ZVAL_UNDEF(&tMaxY);
	ZVAL_UNDEF(&tMaxX);
	ZVAL_UNDEF(&stepZ);
	ZVAL_UNDEF(&stepY);
	ZVAL_UNDEF(&stepX);
	ZVAL_UNDEF(&radius);
	ZVAL_UNDEF(&directionVector);
	ZVAL_UNDEF(&currentBlock);
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
	ZVAL_UNDEF(&temp);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(end, pocketmine_math_vector3_ce)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &start, &end);



	ZEPHIR_CALL_INTERNAL_METHOD_P0(&currentBlock, start, zep_Pocketmine_Math_Vector3_floor_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, end, "subtract", NULL, 0, start);
	zephir_check_call_status();
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&directionVector, &_0, zep_Pocketmine_Math_Vector3_normalize_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, &directionVector, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_LE_LONG(&_1, 0)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Start and end points are the same, giving a zero direction vector", "pocketmine/math/voxelraytrace.zep", 74);
		return;
	}
	ZEPHIR_CALL_INTERNAL_METHOD_P1(&radius, start, zep_Pocketmine_Math_Vector3_distance_zephir_internal_call, end);
	zephir_check_call_status();
	zephir_read_property(&_2, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepX, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_2, &_3);
	zephir_check_call_status();
	zephir_read_property(&_3, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_4, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepY, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_3, &_4);
	zephir_check_call_status();
	zephir_read_property(&_4, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_5, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepZ, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_4, &_5);
	zephir_check_call_status();
	zephir_read_property(&_5, start, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxX, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_5, &_6);
	zephir_check_call_status();
	zephir_read_property(&_7, start, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_8, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxY, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_7, &_8);
	zephir_check_call_status();
	zephir_read_property(&_9, start, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_10, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxZ, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_9, &_10);
	zephir_check_call_status();
	zephir_read_property(&_11, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_11, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaX);
		ZVAL_LONG(&tDeltaX, 0);
	} else {
		zephir_read_property(&_12, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaX);
		div_function(&tDeltaX, &stepX, &_12);
	}
	zephir_read_property(&_12, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_12, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaY);
		ZVAL_LONG(&tDeltaY, 0);
	} else {
		zephir_read_property(&_13, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaY);
		div_function(&tDeltaY, &stepY, &_13);
	}
	zephir_read_property(&_13, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_13, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaZ);
		ZVAL_LONG(&tDeltaZ, 0);
	} else {
		zephir_read_property(&_14, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaZ);
		div_function(&tDeltaZ, &stepZ, &_14);
	}
	ZEPHIR_INIT_VAR(&temp);
	array_init(&temp);
	counter = 0;
	while (1) {
		if (!(1)) {
			break;
		}
		counter++;
		zephir_array_update_long(&temp, counter, &currentBlock, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		_15$$4 = ZEPHIR_LT(&tMaxX, &tMaxY);
		if (_15$$4) {
			_15$$4 = ZEPHIR_LT(&tMaxX, &tMaxZ);
		}
		if (_15$$4) {
			if (ZEPHIR_GT(&tMaxX, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("x"), &stepX);
			ZEPHIR_ADD_ASSIGN(&tMaxX, &tDeltaX);
		} else if (ZEPHIR_LT(&tMaxY, &tMaxZ)) {
			if (ZEPHIR_GT(&tMaxY, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("y"), &stepY);
			ZEPHIR_ADD_ASSIGN(&tMaxY, &tDeltaY);
		} else {
			if (ZEPHIR_GT(&tMaxZ, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("z"), &stepZ);
			ZEPHIR_ADD_ASSIGN(&tMaxZ, &tDeltaZ);
		}
	}
	object_init_ex(return_value, zephir_get_internal_ce(SL("arrayiterator")));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 11, &temp);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns the distance that must be travelled on an axis from the start point with the direction vector component to
 * cross a block boundary.
 *
 * For example, given an X coordinate inside a block and the X component of a direction vector, will return the distance
 * travelled by that direction component to reach a block with a different X coordinate.
 *
 * Find the smallest positive t such that s+t*ds is an integer.
 *
 * @param float $s Starting coordinate
 * @param float $ds Direction vector component of the relevant axis
 *
 * @return float Distance along the ray trace that must be travelled to cross a boundary.
 */
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, rayTraceDistanceToBoundary) {

	zval *s_param = NULL, *ds_param = NULL, _0$$4, _1;
	double s, ds, inf$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$4);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(ds)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(2, 0, &s_param, &ds_param);

	s = zephir_get_doubleval(s_param);
	ds = zephir_get_doubleval(ds_param);


	if (ds == 0) {
		inf$$3 = get_inf();
		RETURN_DOUBLE(inf$$3);
	}
	if (ds < 0) {
		s = -s;
		ds = -ds;
		ZVAL_DOUBLE(&_0$$4, s);
		if (zephir_floor(&_0$$4) == s) {
			RETURN_DOUBLE(0.0);
		}
	}
	ZVAL_DOUBLE(&_1, s);
	RETURN_DOUBLE(zephir_safe_div_double_double((((double) 1 - ((s - zephir_floor(&_1))))), ds));

}

/**
 * Performs a ray trace from the start position in the given direction, for a distance of $maxDistance. This
 * returns a Generator which yields Vector3s containing the coordinates of voxels it passes through.
 *
 * @param Vector3 $start
 * @param Vector3 $directionVector
 * @param float   $maxDistance
 *
 * @return \Generator|Vector3[]
 */
void zep_Pocketmine_Math_VoxelRayTrace_inDirection_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *start_ext , zval *directionVector_ext , zval *maxDistance_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	double maxDistance;
	zval *start = NULL, start_sub, *directionVector = NULL, directionVector_sub, *maxDistance_param = NULL, _0, _1, _2;
		ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&directionVector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 3)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(directionVector, pocketmine_math_vector3_ce)
		Z_PARAM_ZVAL(maxDistance)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(directionVector, pocketmine_math_vector3_ce)
		Z_PARAM_ZVAL(maxDistance)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	start = start_ext;

	directionVector = directionVector_ext;

	maxDistance_param = maxDistance_param_ext;


	maxDistance = zephir_get_doubleval(maxDistance_param);
	maxDistance = zephir_get_doubleval(maxDistance_param);


	ZVAL_DOUBLE(&_2, maxDistance);
	ZEPHIR_CALL_INTERNAL_METHOD_P1(&_1, directionVector, zep_Pocketmine_Math_Vector3_multiply_zephir_internal_call, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, start, "add", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P2(pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_betweenPoints_zephir_internal_call, start, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Spaceship operator
 */
void zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *a_ext , zval *b_ext ) {

	zval *a = NULL, a_sub, *b = NULL, b_sub;
		ZVAL_UNDEF(&a_sub);
	ZVAL_UNDEF(&b_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	a = a_ext;

	b = b_ext;




	if (ZEPHIR_IS_EQUAL(a, b)) {
		RETURN_LONG(0);
	} else if (ZEPHIR_LT(a, b)) {
		RETURN_LONG(-1);
	} else {
		RETURN_LONG(1);
	}

}

/**
 * Performs a ray trace between the start and end coordinates. This returns a Generator which yields Vector3s
 * containing the coordinates of voxels it passes through.
 *
 * This is an implementation of the algorithm described in the link below.
 * @link http://www.cse.yorku.ca/~amana/research/grid.pdf
 *
 * @param Vector3 $start
 * @param Vector3 $end
 *
 * @return \Generator|Vector3[]
 */
void zep_Pocketmine_Math_VoxelRayTrace_betweenPoints_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *start_ext , zval *end_ext ) {

	zend_bool _15$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, counter;
	zval *start = NULL, start_sub, *end = NULL, end_sub, tDeltaZ, tDeltaY, tDeltaX, tMaxZ, tMaxY, tMaxX, stepZ, stepY, stepX, radius, directionVector, currentBlock, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, temp;
		ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&end_sub);
	ZVAL_UNDEF(&tDeltaZ);
	ZVAL_UNDEF(&tDeltaY);
	ZVAL_UNDEF(&tDeltaX);
	ZVAL_UNDEF(&tMaxZ);
	ZVAL_UNDEF(&tMaxY);
	ZVAL_UNDEF(&tMaxX);
	ZVAL_UNDEF(&stepZ);
	ZVAL_UNDEF(&stepY);
	ZVAL_UNDEF(&stepX);
	ZVAL_UNDEF(&radius);
	ZVAL_UNDEF(&directionVector);
	ZVAL_UNDEF(&currentBlock);
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
	ZVAL_UNDEF(&temp);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(end, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(start, pocketmine_math_vector3_ce)
		Z_PARAM_OBJECT_OF_CLASS(end, pocketmine_math_vector3_ce)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	start = start_ext;

	end = end_ext;




	ZEPHIR_CALL_INTERNAL_METHOD_P0(&currentBlock, start, zep_Pocketmine_Math_Vector3_floor_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, end, "subtract", NULL, 0, start);
	zephir_check_call_status();
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&directionVector, &_0, zep_Pocketmine_Math_Vector3_normalize_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, &directionVector, zep_Pocketmine_Math_Vector3_lengthSquared_zephir_internal_call);
	zephir_check_call_status();
	if (ZEPHIR_LE_LONG(&_1, 0)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Start and end points are the same, giving a zero direction vector", "pocketmine/math/voxelraytrace.zep", 74);
		return;
	}
	ZEPHIR_CALL_INTERNAL_METHOD_P1(&radius, start, zep_Pocketmine_Math_Vector3_distance_zephir_internal_call, end);
	zephir_check_call_status();
	zephir_read_property(&_2, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_3, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepX, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_2, &_3);
	zephir_check_call_status();
	zephir_read_property(&_3, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_4, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepY, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_3, &_4);
	zephir_check_call_status();
	zephir_read_property(&_4, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	ZVAL_LONG(&_5, 0);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&stepZ, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call, &_4, &_5);
	zephir_check_call_status();
	zephir_read_property(&_5, start, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxX, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_5, &_6);
	zephir_check_call_status();
	zephir_read_property(&_7, start, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_8, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxY, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_7, &_8);
	zephir_check_call_status();
	zephir_read_property(&_9, start, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_10, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&tMaxZ, pocketmine_math_voxelraytrace_ce, zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call, &_9, &_10);
	zephir_check_call_status();
	zephir_read_property(&_11, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_11, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaX);
		ZVAL_LONG(&tDeltaX, 0);
	} else {
		zephir_read_property(&_12, &directionVector, ZEND_STRL("x"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaX);
		div_function(&tDeltaX, &stepX, &_12);
	}
	zephir_read_property(&_12, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_12, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaY);
		ZVAL_LONG(&tDeltaY, 0);
	} else {
		zephir_read_property(&_13, &directionVector, ZEND_STRL("y"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaY);
		div_function(&tDeltaY, &stepY, &_13);
	}
	zephir_read_property(&_13, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_LONG(&_13, 0)) {
		ZEPHIR_INIT_VAR(&tDeltaZ);
		ZVAL_LONG(&tDeltaZ, 0);
	} else {
		zephir_read_property(&_14, &directionVector, ZEND_STRL("z"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_NVAR(&tDeltaZ);
		div_function(&tDeltaZ, &stepZ, &_14);
	}
	ZEPHIR_INIT_VAR(&temp);
	array_init(&temp);
	counter = 0;
	while (1) {
		if (!(1)) {
			break;
		}
		counter++;
		zephir_array_update_long(&temp, counter, &currentBlock, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		_15$$4 = ZEPHIR_LT(&tMaxX, &tMaxY);
		if (_15$$4) {
			_15$$4 = ZEPHIR_LT(&tMaxX, &tMaxZ);
		}
		if (_15$$4) {
			if (ZEPHIR_GT(&tMaxX, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("x"), &stepX);
			ZEPHIR_ADD_ASSIGN(&tMaxX, &tDeltaX);
		} else if (ZEPHIR_LT(&tMaxY, &tMaxZ)) {
			if (ZEPHIR_GT(&tMaxY, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("y"), &stepY);
			ZEPHIR_ADD_ASSIGN(&tMaxY, &tDeltaY);
		} else {
			if (ZEPHIR_GT(&tMaxZ, &radius)) {
				break;
			}
			zephir_update_property_zval(&currentBlock, ZEND_STRL("z"), &stepZ);
			ZEPHIR_ADD_ASSIGN(&tMaxZ, &tDeltaZ);
		}
	}
	object_init_ex(return_value, zephir_get_internal_ce(SL("arrayiterator")));
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 11, &temp);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns the distance that must be travelled on an axis from the start point with the direction vector component to
 * cross a block boundary.
 *
 * For example, given an X coordinate inside a block and the X component of a direction vector, will return the distance
 * travelled by that direction component to reach a block with a different X coordinate.
 *
 * Find the smallest positive t such that s+t*ds is an integer.
 *
 * @param float $s Starting coordinate
 * @param float $ds Direction vector component of the relevant axis
 *
 * @return float Distance along the ray trace that must be travelled to cross a boundary.
 */
void zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *s_param_ext, zval *ds_param_ext) {

	zval *s_param = NULL, *ds_param = NULL, _0$$4, _1;
	double s, ds, inf$$3;
		ZVAL_UNDEF(&_0$$4);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(ds)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(ds)
	ZEND_PARSE_PARAMETERS_END();

#endif


	s_param = s_param_ext;

	ds_param = ds_param_ext;


	s = zephir_get_doubleval(s_param);
	ds = zephir_get_doubleval(ds_param);
	s = zephir_get_doubleval(s_param);
	ds = zephir_get_doubleval(ds_param);


	if (ds == 0) {
		inf$$3 = get_inf();
		RETURN_DOUBLE(inf$$3);
	}
	if (ds < 0) {
		s = -s;
		ds = -ds;
		ZVAL_DOUBLE(&_0$$4, s);
		if (zephir_floor(&_0$$4) == s) {
			RETURN_DOUBLE(0.0);
		}
	}
	ZVAL_DOUBLE(&_1, s);
	RETURN_DOUBLE(zephir_safe_div_double_double((((double) 1 - ((s - zephir_floor(&_1))))), ds));

}

