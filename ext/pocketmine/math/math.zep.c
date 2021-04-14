
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
#include "kernel/math.h"
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
/**
 * Math related classes, like matrices, bounding boxes and vector
 */
ZEPHIR_INIT_CLASS(Pocketmine_Math_Math)
{
	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Math, pocketmine, math_math, pocketmine_math_math_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;
}

/**
 * @param float $n
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Math_Math, floorFloat)
{
	zend_long i = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *n = NULL, n_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&n_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(n)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &n);


	i = zephir_get_intval(n);
	ZEPHIR_INIT_VAR(&_0);
	if (ZEPHIR_GE_LONG(n, i)) {
		ZVAL_LONG(&_0, i);
	} else {
		ZVAL_LONG(&_0, (i - 1));
	}
	RETURN_CCTOR(&_0);
}

/**
 * @param float $n
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Math_Math, ceilFloat)
{
	zend_long i = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *n = NULL, n_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&n_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(n)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &n);


	i = zephir_get_intval(n);
	ZEPHIR_INIT_VAR(&_0);
	if (ZEPHIR_LE_LONG(n, i)) {
		ZVAL_LONG(&_0, i);
	} else {
		ZVAL_LONG(&_0, (i + 1));
	}
	RETURN_CCTOR(&_0);
}

/**
 * Solves a quadratic equation with the given coefficients and returns an array of up to two solutions.
 *
 * @param float $a
 * @param float $b
 * @param float $c
 *
 * @return float[]
 */
PHP_METHOD(Pocketmine_Math_Math, solveQuadratic)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *a_param = NULL, *b_param = NULL, *c_param = NULL, sqrtDiscriminant, discriminant, _0, _1, _2, _3$$3, _4$$4;
	double a, b, c;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&sqrtDiscriminant);
	ZVAL_UNDEF(&discriminant);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
		Z_PARAM_ZVAL(c)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &a_param, &b_param, &c_param);
	a = zephir_get_doubleval(a_param);
	b = zephir_get_doubleval(b_param);
	c = zephir_get_doubleval(c_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_DOUBLE(&_1, b);
	ZVAL_LONG(&_2, 2);
	zephir_pow_function(&_0, &_1, &_2);
	ZEPHIR_INIT_VAR(&discriminant);
	ZVAL_DOUBLE(&discriminant, (zephir_get_numberval(&_0) - (double) ((double) (4 * a) * c)));
	if (ZEPHIR_GT_LONG(&discriminant, 0)) {
		ZEPHIR_INIT_VAR(&sqrtDiscriminant);
		ZVAL_DOUBLE(&sqrtDiscriminant, zephir_sqrt(&discriminant));
		zephir_create_array(return_value, 2, 0);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_DOUBLE(&_3$$3, zephir_safe_div_double_long(((-b + zephir_get_numberval(&sqrtDiscriminant))), ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_3$$3);
		ZEPHIR_INIT_NVAR(&_3$$3);
		ZVAL_DOUBLE(&_3$$3, zephir_safe_div_double_long(((-b - zephir_get_numberval(&sqrtDiscriminant))), ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_3$$3);
		RETURN_MM();
	} else if (ZEPHIR_IS_LONG(&discriminant, 0)) {
		zephir_create_array(return_value, 1, 0);
		ZEPHIR_INIT_VAR(&_4$$4);
		ZVAL_DOUBLE(&_4$$4, zephir_safe_div_double_long(-b, ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_4$$4);
		RETURN_MM();
	} else {
		array_init(return_value);
		RETURN_MM();
	}
}

/**
 * @param float $n
 *
 * @return int
 */
void zep_Pocketmine_Math_Math_floorFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *n_ext )
{
	zend_long i = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *n = NULL, n_sub, _0;
		ZVAL_UNDEF(&n_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(n)
		Z_PARAM_ZVAL(n)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	n = n_ext;



	i = zephir_get_intval(n);
	ZEPHIR_INIT_VAR(&_0);
	if (ZEPHIR_GE_LONG(n, i)) {
		ZVAL_LONG(&_0, i);
	} else {
		ZVAL_LONG(&_0, (i - 1));
	}
	RETURN_CCTOR(&_0);
}

/**
 * @param float $n
 *
 * @return int
 */
void zep_Pocketmine_Math_Math_ceilFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *n_ext )
{
	zend_long i = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *n = NULL, n_sub, _0;
		ZVAL_UNDEF(&n_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(n)
		Z_PARAM_ZVAL(n)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	n = n_ext;



	i = zephir_get_intval(n);
	ZEPHIR_INIT_VAR(&_0);
	if (ZEPHIR_LE_LONG(n, i)) {
		ZVAL_LONG(&_0, i);
	} else {
		ZVAL_LONG(&_0, (i + 1));
	}
	RETURN_CCTOR(&_0);
}

/**
 * Solves a quadratic equation with the given coefficients and returns an array of up to two solutions.
 *
 * @param float $a
 * @param float $b
 * @param float $c
 *
 * @return float[]
 */
void zep_Pocketmine_Math_Math_solveQuadratic_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *a_param_ext, zval *b_param_ext, zval *c_param_ext)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *a_param = NULL, *b_param = NULL, *c_param = NULL, sqrtDiscriminant, discriminant, _0, _1, _2, _3$$3, _4$$4;
	double a, b, c;
		ZVAL_UNDEF(&sqrtDiscriminant);
	ZVAL_UNDEF(&discriminant);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 3)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
		Z_PARAM_ZVAL(c)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	a_param = a_param_ext;

	b_param = b_param_ext;

	c_param = c_param_ext;

	a = zephir_get_doubleval(a_param);
	b = zephir_get_doubleval(b_param);
	c = zephir_get_doubleval(c_param);
	a = zephir_get_doubleval(a_param);
	b = zephir_get_doubleval(b_param);
	c = zephir_get_doubleval(c_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_DOUBLE(&_1, b);
	ZVAL_LONG(&_2, 2);
	zephir_pow_function(&_0, &_1, &_2);
	ZEPHIR_INIT_VAR(&discriminant);
	ZVAL_DOUBLE(&discriminant, (zephir_get_numberval(&_0) - (double) ((double) (4 * a) * c)));
	if (ZEPHIR_GT_LONG(&discriminant, 0)) {
		ZEPHIR_INIT_VAR(&sqrtDiscriminant);
		ZVAL_DOUBLE(&sqrtDiscriminant, zephir_sqrt(&discriminant));
		zephir_create_array(return_value, 2, 0);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_DOUBLE(&_3$$3, zephir_safe_div_double_long(((-b + zephir_get_numberval(&sqrtDiscriminant))), ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_3$$3);
		ZEPHIR_INIT_NVAR(&_3$$3);
		ZVAL_DOUBLE(&_3$$3, zephir_safe_div_double_long(((-b - zephir_get_numberval(&sqrtDiscriminant))), ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_3$$3);
		RETURN_MM();
	} else if (ZEPHIR_IS_LONG(&discriminant, 0)) {
		zephir_create_array(return_value, 1, 0);
		ZEPHIR_INIT_VAR(&_4$$4);
		ZVAL_DOUBLE(&_4$$4, zephir_safe_div_double_long(-b, ((double) (2 * a))));
		zephir_array_fast_append(return_value, &_4$$4);
		RETURN_MM();
	} else {
		array_init(return_value);
		RETURN_MM();
	}
}

