
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
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/string.h"


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
ZEPHIR_INIT_CLASS(Pocketmine_Math_Matrix) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, Matrix, pocketmine, math_matrix, pocketmine_math_matrix_method_entry, 0);

	zend_declare_property_null(pocketmine_math_matrix_ce, SL("matrix"), ZEND_ACC_PRIVATE);

	zend_declare_property_long(pocketmine_math_matrix_ce, SL("rows"), 0, ZEND_ACC_PRIVATE);

	zend_declare_property_long(pocketmine_math_matrix_ce, SL("columns"), 0, ZEND_ACC_PRIVATE);

	pocketmine_math_matrix_ce->create_object = zephir_init_properties_Pocketmine_Math_Matrix;

	zend_class_implements(pocketmine_math_matrix_ce, 1, zend_ce_arrayaccess);
	return SUCCESS;

}

PHP_METHOD(Pocketmine_Math_Matrix, getRows) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "rows");

}

PHP_METHOD(Pocketmine_Math_Matrix, getColumns) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "columns");

}

PHP_METHOD(Pocketmine_Math_Matrix, offsetExists) {

	zval *offset = NULL, offset_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(1, 0, &offset);



	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	RETURN_BOOL(zephir_array_isset_long(&_0, zephir_get_intval(offset)));

}

PHP_METHOD(Pocketmine_Math_Matrix, offsetGet) {

	zval *offset = NULL, offset_sub, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	zephir_fetch_params_without_memory_grow(1, 0, &offset);



	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_1, &_0, zephir_get_intval(offset), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 35);
	RETURN_CTORW(&_1);

}

PHP_METHOD(Pocketmine_Math_Matrix, offsetSet) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *offset = NULL, offset_sub, *value = NULL, value_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &offset, &value);



	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, zephir_get_intval(offset));
	zephir_update_property_array(this_ptr, SL("matrix"), &_0, value);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Math_Matrix, offsetUnset) {

	zval *offset = NULL, offset_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(1, 0, &offset);



	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_unset_long(&_0, zephir_get_intval(offset), PH_SEPARATE);

}

PHP_METHOD(Pocketmine_Math_Matrix, __construct) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval set;
	zval *rows = NULL, rows_sub, *columns = NULL, columns_sub, *set_param = NULL, _0, _1, _2, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&rows_sub);
	ZVAL_UNDEF(&columns_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&set);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &rows, &columns, &set_param);

	if (!set_param) {
		ZEPHIR_INIT_VAR(&set);
		array_init(&set);
	} else {
		zephir_get_arrval(&set, set_param);
	}


	ZVAL_LONG(&_0, 1);
	ZVAL_LONG(&_1, zephir_get_intval(rows));
	ZEPHIR_CALL_FUNCTION(&_2, "max", &_3, 4, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("rows"), &_2);
	ZVAL_LONG(&_0, 1);
	ZVAL_LONG(&_1, zephir_get_intval(columns));
	ZEPHIR_CALL_FUNCTION(&_4, "max", &_3, 4, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("columns"), &_4);
	ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P1(this_ptr, zep_Pocketmine_Math_Matrix_set_zephir_internal_call, &set);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Math_Matrix, set) {

	zend_long _2, _3, _7$$3, _8$$3;
	zend_bool _1, _6$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *m_param = NULL, c, r, _0, _4$$3, _5$$3, _9$$4, _10$$4, _11$$4;
	zval m;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&m);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &m_param);

	zephir_get_arrval(&m, m_param);


	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			ZEPHIR_INIT_NVAR(&_4$$3);
			array_init(&_4$$3);
			zephir_update_property_array(this_ptr, SL("matrix"), &r, &_4$$3);
			zephir_read_property(&_5$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_8$$3 = (zephir_get_numberval(&_5$$3) - 1);
			_7$$3 = 0;
			_6$$3 = 0;
			if (_7$$3 <= _8$$3) {
				while (1) {
					if (_6$$3) {
						_7$$3++;
						if (!(_7$$3 <= _8$$3)) {
							break;
						}
					} else {
						_6$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _7$$3);
					ZEPHIR_INIT_NVAR(&_9$$4);
					zephir_array_fetch(&_10$$4, &m, &r, PH_READONLY, "pocketmine/math/matrix.zep", 62);
					if (zephir_array_isset(&_10$$4, &c)) {
						zephir_array_fetch(&_11$$4, &m, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 62);
						ZEPHIR_OBS_NVAR(&_9$$4);
						zephir_array_fetch(&_9$$4, &_11$$4, &c, PH_NOISY, "pocketmine/math/matrix.zep", 62);
					} else {
						ZEPHIR_INIT_NVAR(&_9$$4);
						ZVAL_LONG(&_9$$4, 0);
					}
					zephir_update_property_array_multi(this_ptr, SL("matrix"), &_9$$4, SL("zz"), 2, &r, &c);
				}
			}
		}
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Math_Matrix, setElement) {

	zend_bool _1, _2, _4;
	zval *row = NULL, row_sub, *column = NULL, column_sub, *value = NULL, value_sub, _0, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&row_sub);
	ZVAL_UNDEF(&column_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);

	zephir_fetch_params_without_memory_grow(3, 0, &row, &column, &value);



	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_1 = ZEPHIR_GT(row, &_0);
	if (!(_1)) {
		_1 = ZEPHIR_LT_LONG(row, 0);
	}
	_2 = _1;
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GT(column, &_3);
	}
	_4 = _2;
	if (!(_4)) {
		_4 = ZEPHIR_LT_LONG(column, 0);
	}
	if (_4) {
		RETURN_BOOL(0);
	}
	zephir_update_property_array_multi(this_ptr, SL("matrix"), value, SL("ll"), 2, zephir_get_intval(row), zephir_get_intval(column));
	RETURN_BOOL(1);

}

PHP_METHOD(Pocketmine_Math_Matrix, getElement) {

	zend_bool _1, _2, _4;
	zval *row = NULL, row_sub, *column = NULL, column_sub, _0, _3, _5, _6, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&row_sub);
	ZVAL_UNDEF(&column_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);

	zephir_fetch_params_without_memory_grow(2, 0, &row, &column);



	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_1 = ZEPHIR_GT(row, &_0);
	if (!(_1)) {
		_1 = ZEPHIR_LT_LONG(row, 0);
	}
	_2 = _1;
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GT(column, &_3);
	}
	_4 = _2;
	if (!(_4)) {
		_4 = ZEPHIR_LT_LONG(column, 0);
	}
	if (_4) {
		RETURN_BOOL(0);
	}
	zephir_read_property(&_5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_6, &_5, zephir_get_intval(row), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 81);
	zephir_array_fetch_long(&_7, &_6, zephir_get_intval(column), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 81);
	RETURN_CTORW(&_7);

}

PHP_METHOD(Pocketmine_Math_Matrix, isSquare) {

	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	RETURN_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_1));

}

PHP_METHOD(Pocketmine_Math_Matrix, add) {

	zend_bool _2, _8, _12$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _9, _10, _13$$4, _14$$4;
	zval *matrix = NULL, matrix_sub, c, r, result, _0, _1, _3, _4, _5, _6, _7, _11$$4, _15$$5, _16$$5, _17$$5, _18$$5, _19$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);
	ZVAL_UNDEF(&_18$$5);
	ZVAL_UNDEF(&_19$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &matrix);



	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	_2 = !ZEPHIR_IS_IDENTICAL(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_INTERNAL_METHOD_P0(&_4, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
		zephir_check_call_status();
		_2 = !ZEPHIR_IS_IDENTICAL(&_3, &_4);
	}
	if (_2) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_5, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_5, &_6);
	zephir_check_call_status();
	zephir_read_property(&_7, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_10 = (zephir_get_numberval(&_7) - 1);
	_9 = 0;
	_8 = 0;
	if (_9 <= _10) {
		while (1) {
			if (_8) {
				_9++;
				if (!(_9 <= _10)) {
					break;
				}
			} else {
				_8 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _9);
			zephir_read_property(&_11$$4, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_14$$4 = (zephir_get_numberval(&_11$$4) - 1);
			_13$$4 = 0;
			_12$$4 = 0;
			if (_13$$4 <= _14$$4) {
				while (1) {
					if (_12$$4) {
						_13$$4++;
						if (!(_13$$4 <= _14$$4)) {
							break;
						}
					} else {
						_12$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _13$$4);
					zephir_read_property(&_15$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_16$$5, &_15$$5, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 100);
					zephir_array_fetch(&_17$$5, &_16$$5, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 100);
					ZEPHIR_CALL_INTERNAL_METHOD_P2(&_18$$5, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &r, &c);
					zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_19$$5);
					zephir_add_function(&_19$$5, &_17$$5, &_18$$5);
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &r, &c, &_19$$5);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, subtract) {

	zend_bool _2, _6, _10$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_18 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _7, _8, _11$$4, _12$$4;
	zval *matrix = NULL, matrix_sub, c, r, result, _0, _1, _3, _4, _5, _9$$4, _13$$5, _14$$5, _15$$5, _16$$5, _17$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_14$$5);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &matrix);



	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	_2 = !ZEPHIR_IS_IDENTICAL(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_INTERNAL_METHOD_P0(&_4, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
		zephir_check_call_status();
		_2 = !ZEPHIR_IS_IDENTICAL(&_3, &_4);
	}
	if (_2) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_5, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_8 = (zephir_get_numberval(&_5) - 1);
	_7 = 0;
	_6 = 0;
	if (_7 <= _8) {
		while (1) {
			if (_6) {
				_7++;
				if (!(_7 <= _8)) {
					break;
				}
			} else {
				_6 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _7);
			zephir_read_property(&_9$$4, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_12$$4 = (zephir_get_numberval(&_9$$4) - 1);
			_11$$4 = 0;
			_10$$4 = 0;
			if (_11$$4 <= _12$$4) {
				while (1) {
					if (_10$$4) {
						_11$$4++;
						if (!(_11$$4 <= _12$$4)) {
							break;
						}
					} else {
						_10$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _11$$4);
					zephir_read_property(&_13$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_14$$5, &_13$$5, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 117);
					zephir_array_fetch(&_15$$5, &_14$$5, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 117);
					ZEPHIR_CALL_INTERNAL_METHOD_P2(&_16$$5, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &r, &c);
					zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_17$$5);
					zephir_sub_function(&_17$$5, &_15$$5, &_16$$5);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_18, 0, &r, &c, &_17$$5);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, multiplyScalar) {

	zend_bool _1, _5$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _2, _3, _6$$3, _7$$3;
	zval *number = NULL, number_sub, c, r, result, _0, _4$$3, _8$$4, _9$$4, _10$$4, _11$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&number_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number);



	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			zephir_read_property(&_4$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_7$$3 = (zephir_get_numberval(&_4$$3) - 1);
			_6$$3 = 0;
			_5$$3 = 0;
			if (_6$$3 <= _7$$3) {
				while (1) {
					if (_5$$3) {
						_6$$3++;
						if (!(_6$$3 <= _7$$3)) {
							break;
						}
					} else {
						_5$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _6$$3);
					zephir_read_property(&_8$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_9$$4, &_8$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 131);
					zephir_array_fetch(&_10$$4, &_9$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 131);
					ZEPHIR_INIT_NVAR(&_11$$4);
					mul_function(&_11$$4, &_10$$4, number);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_12, 0, &r, &c, &_11$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, divideScalar) {

	zend_bool _1, _5$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _2, _3, _6$$3, _7$$3;
	zval *number = NULL, number_sub, c, r, result, _0, _4$$3, _8$$4, _9$$4, _10$$4, _11$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&number_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &number);



	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			zephir_read_property(&_4$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_7$$3 = (zephir_get_numberval(&_4$$3) - 1);
			_6$$3 = 0;
			_5$$3 = 0;
			if (_6$$3 <= _7$$3) {
				while (1) {
					if (_5$$3) {
						_6$$3++;
						if (!(_6$$3 <= _7$$3)) {
							break;
						}
					} else {
						_5$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _6$$3);
					zephir_read_property(&_8$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_9$$4, &_8$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 145);
					zephir_array_fetch(&_10$$4, &_9$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 145);
					ZEPHIR_INIT_NVAR(&_11$$4);
					div_function(&_11$$4, &_10$$4, number);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_12, 0, &r, &c, &_11$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, transpose) {

	zend_bool _3, _7$$3;
	zval c, r, result, _0, _1, _2, _6$$3, _10$$4, _11$$4, _12$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _4, _5, _8$$3, _9$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_0, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_0, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_5 = (zephir_get_numberval(&_2) - 1);
	_4 = 0;
	_3 = 0;
	if (_4 <= _5) {
		while (1) {
			if (_3) {
				_4++;
				if (!(_4 <= _5)) {
					break;
				}
			} else {
				_3 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _4);
			zephir_read_property(&_6$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_9$$3 = (zephir_get_numberval(&_6$$3) - 1);
			_8$$3 = 0;
			_7$$3 = 0;
			if (_8$$3 <= _9$$3) {
				while (1) {
					if (_7$$3) {
						_8$$3++;
						if (!(_8$$3 <= _9$$3)) {
							break;
						}
					} else {
						_7$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _8$$3);
					zephir_read_property(&_10$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_11$$4, &_10$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 159);
					zephir_array_fetch(&_12$$4, &_11$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 159);
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &c, &r, &_12$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, product) {

	zend_bool _4, _7$$4, _11$$5;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _5, _6, _8$$4, _9$$4, _12$$5, _13$$5;
	zval *matrix = NULL, matrix_sub, k, sum, j, i, result, c, _0, _1, _2, _3, _10$$5, _14$$6, _15$$6, _16$$6, _17$$6, _18$$6;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&sum);
	ZVAL_UNDEF(&j);
	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$6);
	ZVAL_UNDEF(&_18$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &matrix);



	zephir_read_property(&_0, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	if (!ZEPHIR_IS_IDENTICAL(&_0, &_1)) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&c, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_2, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_2, &c);
	zephir_check_call_status();
	zephir_read_property(&_3, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_6 = (zephir_get_numberval(&_3) - 1);
	_5 = 0;
	_4 = 0;
	if (_5 <= _6) {
		while (1) {
			if (_4) {
				_5++;
				if (!(_5 <= _6)) {
					break;
				}
			} else {
				_4 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _5);
			_9$$4 = (zephir_get_numberval(&c) - 1);
			_8$$4 = 0;
			_7$$4 = 0;
			if (_8$$4 <= _9$$4) {
				while (1) {
					if (_7$$4) {
						_8$$4++;
						if (!(_8$$4 <= _9$$4)) {
							break;
						}
					} else {
						_7$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&j);
					ZVAL_LONG(&j, _8$$4);
					ZEPHIR_INIT_NVAR(&sum);
					ZVAL_LONG(&sum, 0);
					zephir_read_property(&_10$$5, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
					_13$$5 = (zephir_get_numberval(&_10$$5) - 1);
					_12$$5 = 0;
					_11$$5 = 0;
					if (_12$$5 <= _13$$5) {
						while (1) {
							if (_11$$5) {
								_12$$5++;
								if (!(_12$$5 <= _13$$5)) {
									break;
								}
							} else {
								_11$$5 = 1;
							}
							ZEPHIR_INIT_NVAR(&k);
							ZVAL_LONG(&k, _12$$5);
							zephir_read_property(&_14$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
							zephir_array_fetch(&_15$$6, &_14$$6, &i, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 183);
							zephir_array_fetch(&_16$$6, &_15$$6, &k, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 183);
							ZEPHIR_CALL_INTERNAL_METHOD_P2(&_17$$6, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &k, &j);
							zephir_check_call_status();
							ZEPHIR_INIT_NVAR(&_18$$6);
							mul_function(&_18$$6, &_16$$6, &_17$$6);
							ZEPHIR_ADD_ASSIGN(&sum, &_18$$6);
						}
					}
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &i, &j, &sum);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

PHP_METHOD(Pocketmine_Math_Matrix, determinant) {

	zval _0, _1, _2$$5, _3$$5, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5, _11$$5, _12$$5, _13$$5, _14$$6, _15$$6, _16$$6, _17$$6, _18$$6, _19$$6, _20$$6, _21$$6, _22$$6, _23$$6, _24$$6, _25$$6, _26$$6, _27$$6, _28$$6, _29$$6, _30$$6, _31$$6, _32$$6, _33$$6, _34$$6, _35$$6, _36$$6, _37$$6, _38$$6, _39$$6, _40$$6, _41$$6, _42$$6, _43$$6, _44$$6, _45$$6, _46$$6, _47$$6, _48$$6, _49$$6, _50$$6, _51$$6, _52$$6, _53$$6;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$6);
	ZVAL_UNDEF(&_18$$6);
	ZVAL_UNDEF(&_19$$6);
	ZVAL_UNDEF(&_20$$6);
	ZVAL_UNDEF(&_21$$6);
	ZVAL_UNDEF(&_22$$6);
	ZVAL_UNDEF(&_23$$6);
	ZVAL_UNDEF(&_24$$6);
	ZVAL_UNDEF(&_25$$6);
	ZVAL_UNDEF(&_26$$6);
	ZVAL_UNDEF(&_27$$6);
	ZVAL_UNDEF(&_28$$6);
	ZVAL_UNDEF(&_29$$6);
	ZVAL_UNDEF(&_30$$6);
	ZVAL_UNDEF(&_31$$6);
	ZVAL_UNDEF(&_32$$6);
	ZVAL_UNDEF(&_33$$6);
	ZVAL_UNDEF(&_34$$6);
	ZVAL_UNDEF(&_35$$6);
	ZVAL_UNDEF(&_36$$6);
	ZVAL_UNDEF(&_37$$6);
	ZVAL_UNDEF(&_38$$6);
	ZVAL_UNDEF(&_39$$6);
	ZVAL_UNDEF(&_40$$6);
	ZVAL_UNDEF(&_41$$6);
	ZVAL_UNDEF(&_42$$6);
	ZVAL_UNDEF(&_43$$6);
	ZVAL_UNDEF(&_44$$6);
	ZVAL_UNDEF(&_45$$6);
	ZVAL_UNDEF(&_46$$6);
	ZVAL_UNDEF(&_47$$6);
	ZVAL_UNDEF(&_48$$6);
	ZVAL_UNDEF(&_49$$6);
	ZVAL_UNDEF(&_50$$6);
	ZVAL_UNDEF(&_51$$6);
	ZVAL_UNDEF(&_52$$6);
	ZVAL_UNDEF(&_53$$6);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Matrix_isSquare_zephir_internal_call);
	zephir_check_call_status();
	if (!ZEPHIR_IS_TRUE_IDENTICAL(&_0)) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_OBS_VAR(&_1);
	zephir_read_property(&_1, this_ptr, SL("rows"), PH_NOISY_CC);
	do {
		if (ZEPHIR_IS_LONG(&_1, 1)) {
			RETURN_MM_LONG(0);
		}
		if (ZEPHIR_IS_LONG(&_1, 2)) {
			zephir_read_property(&_2$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_3$$5, &_2$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_4$$5, &_3$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_read_property(&_5$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_6$$5, &_5$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_7$$5, &_6$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			ZEPHIR_INIT_VAR(&_8$$5);
			mul_function(&_8$$5, &_4$$5, &_7$$5);
			zephir_read_property(&_9$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_4$$5, &_9$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_7$$5, &_4$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_read_property(&_10$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_11$$5, &_10$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_12$$5, &_11$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			ZEPHIR_INIT_VAR(&_13$$5);
			mul_function(&_13$$5, &_7$$5, &_12$$5);
			zephir_sub_function(return_value, &_8$$5, &_13$$5);
			RETURN_MM();
		}
		if (ZEPHIR_IS_LONG(&_1, 3)) {
			zephir_read_property(&_14$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_15$$6, &_14$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_16$$6, &_15$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_17$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_18$$6, &_17$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_19$$6, &_18$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_20$$6);
			mul_function(&_20$$6, &_16$$6, &_19$$6);
			zephir_read_property(&_21$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_16$$6, &_21$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_19$$6, &_16$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_22$$6);
			mul_function(&_22$$6, &_20$$6, &_19$$6);
			zephir_read_property(&_23$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_19$$6, &_23$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_24$$6, &_19$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_25$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_26$$6, &_25$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_27$$6, &_26$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_24$$6, &_27$$6);
			zephir_read_property(&_28$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_24$$6, &_28$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_27$$6, &_24$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_27$$6);
			ZEPHIR_INIT_NVAR(&_20$$6);
			zephir_add_function(&_20$$6, &_22$$6, &_29$$6);
			zephir_read_property(&_30$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_27$$6, &_30$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_31$$6, &_27$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_32$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_33$$6, &_32$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_34$$6, &_33$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_22$$6);
			mul_function(&_22$$6, &_31$$6, &_34$$6);
			zephir_read_property(&_35$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_31$$6, &_35$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_34$$6, &_31$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_22$$6, &_34$$6);
			ZEPHIR_INIT_NVAR(&_22$$6);
			zephir_add_function(&_22$$6, &_20$$6, &_29$$6);
			zephir_read_property(&_36$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_34$$6, &_36$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_37$$6, &_34$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_38$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_39$$6, &_38$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_40$$6, &_39$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_37$$6, &_40$$6);
			zephir_read_property(&_41$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_37$$6, &_41$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_40$$6, &_37$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_40$$6);
			ZEPHIR_INIT_NVAR(&_20$$6);
			zephir_sub_function(&_20$$6, &_22$$6, &_29$$6);
			zephir_read_property(&_42$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_40$$6, &_42$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_43$$6, &_40$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_44$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_45$$6, &_44$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_46$$6, &_45$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_22$$6);
			mul_function(&_22$$6, &_43$$6, &_46$$6);
			zephir_read_property(&_47$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_43$$6, &_47$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_46$$6, &_43$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_22$$6, &_46$$6);
			ZEPHIR_INIT_NVAR(&_22$$6);
			zephir_sub_function(&_22$$6, &_20$$6, &_29$$6);
			zephir_read_property(&_48$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_46$$6, &_48$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_49$$6, &_46$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_50$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_51$$6, &_50$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_52$$6, &_51$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_49$$6, &_52$$6);
			zephir_read_property(&_53$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_49$$6, &_53$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_52$$6, &_49$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_52$$6);
			zephir_sub_function(return_value, &_22$$6, &_29$$6);
			RETURN_MM();
		}
	} while(0);

	RETURN_MM_BOOL(0);

}

PHP_METHOD(Pocketmine_Math_Matrix, __toString) {

	zend_long _2, _3;
	zend_bool _1;
	zval r, s, _0, _8, _9, _10, _4$$3, _5$$3, _6$$3, _7$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&s);
	ZVAL_STRING(&s, "");
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			ZEPHIR_INIT_NVAR(&_4$$3);
			zephir_read_property(&_5$$3, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch(&_6$$3, &_5$$3, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 214);
			zephir_fast_join_str(&_4$$3, SL(","), &_6$$3);
			ZEPHIR_INIT_NVAR(&_7$$3);
			ZEPHIR_CONCAT_VS(&_7$$3, &_4$$3, ";");
			zephir_concat_self(&s, &_7$$3);
		}
	}
	ZVAL_LONG(&_8, 0);
	ZVAL_LONG(&_9, -1);
	ZEPHIR_INIT_VAR(&_10);
	zephir_substr(&_10, &s, 0 , -1 , 0);
	ZEPHIR_CONCAT_SVS(return_value, "Matrix({this->rows}x{this->columns};", &_10, ")");
	RETURN_MM();

}

void zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	

	RETURN_MEMBER(getThis(), "rows");

}

void zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	

	RETURN_MEMBER(getThis(), "columns");

}

void zep_Pocketmine_Math_Matrix_offsetExists_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext ) {

	zval *offset = NULL, offset_sub, _0;
		ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);

	offset = offset_ext;




	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	RETURN_BOOL(zephir_array_isset_long(&_0, zephir_get_intval(offset)));

}

void zep_Pocketmine_Math_Matrix_offsetGet_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext ) {

	zval *offset = NULL, offset_sub, _0, _1;
		ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	offset = offset_ext;




	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_1, &_0, zephir_get_intval(offset), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 35);
	RETURN_CTORW(&_1);

}

void zep_Pocketmine_Math_Matrix_offsetSet_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext , zval *value_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *offset = NULL, offset_sub, *value = NULL, value_sub, _0;
		ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	offset = offset_ext;

	value = value_ext;




	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, zephir_get_intval(offset));
	zephir_update_property_array(this_ptr, SL("matrix"), &_0, value);
	ZEPHIR_MM_RESTORE();

}

void zep_Pocketmine_Math_Matrix_offsetUnset_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext ) {

	zval *offset = NULL, offset_sub, _0;
		ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_0);

	offset = offset_ext;




	zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_unset_long(&_0, zephir_get_intval(offset), PH_SEPARATE);

}

void zep_Pocketmine_Math_Matrix_set_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *m_param_ext) {

	zend_long _2, _3, _7$$3, _8$$3;
	zend_bool _1, _6$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *m_param = NULL, c, r, _0, _4$$3, _5$$3, _9$$4, _10$$4, _11$$4;
	zval m;
		ZVAL_UNDEF(&m);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	m_param = m_param_ext;


	zephir_get_arrval(&m, m_param);


	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			ZEPHIR_INIT_NVAR(&_4$$3);
			array_init(&_4$$3);
			zephir_update_property_array(this_ptr, SL("matrix"), &r, &_4$$3);
			zephir_read_property(&_5$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_8$$3 = (zephir_get_numberval(&_5$$3) - 1);
			_7$$3 = 0;
			_6$$3 = 0;
			if (_7$$3 <= _8$$3) {
				while (1) {
					if (_6$$3) {
						_7$$3++;
						if (!(_7$$3 <= _8$$3)) {
							break;
						}
					} else {
						_6$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _7$$3);
					ZEPHIR_INIT_NVAR(&_9$$4);
					zephir_array_fetch(&_10$$4, &m, &r, PH_READONLY, "pocketmine/math/matrix.zep", 62);
					if (zephir_array_isset(&_10$$4, &c)) {
						zephir_array_fetch(&_11$$4, &m, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 62);
						ZEPHIR_OBS_NVAR(&_9$$4);
						zephir_array_fetch(&_9$$4, &_11$$4, &c, PH_NOISY, "pocketmine/math/matrix.zep", 62);
					} else {
						ZEPHIR_INIT_NVAR(&_9$$4);
						ZVAL_LONG(&_9$$4, 0);
					}
					zephir_update_property_array_multi(this_ptr, SL("matrix"), &_9$$4, SL("zz"), 2, &r, &c);
				}
			}
		}
	}
	ZEPHIR_MM_RESTORE();

}

void zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *row_ext , zval *column_ext , zval *value_ext ) {

	zend_bool _1, _2, _4;
	zval *row = NULL, row_sub, *column = NULL, column_sub, *value = NULL, value_sub, _0, _3;
		ZVAL_UNDEF(&row_sub);
	ZVAL_UNDEF(&column_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);

	row = row_ext;

	column = column_ext;

	value = value_ext;




	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_1 = ZEPHIR_GT(row, &_0);
	if (!(_1)) {
		_1 = ZEPHIR_LT_LONG(row, 0);
	}
	_2 = _1;
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GT(column, &_3);
	}
	_4 = _2;
	if (!(_4)) {
		_4 = ZEPHIR_LT_LONG(column, 0);
	}
	if (_4) {
		RETURN_BOOL(0);
	}
	zephir_update_property_array_multi(this_ptr, SL("matrix"), value, SL("ll"), 2, zephir_get_intval(row), zephir_get_intval(column));
	RETURN_BOOL(1);

}

void zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *row_ext , zval *column_ext ) {

	zend_bool _1, _2, _4;
	zval *row = NULL, row_sub, *column = NULL, column_sub, _0, _3, _5, _6, _7;
		ZVAL_UNDEF(&row_sub);
	ZVAL_UNDEF(&column_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);

	row = row_ext;

	column = column_ext;




	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_1 = ZEPHIR_GT(row, &_0);
	if (!(_1)) {
		_1 = ZEPHIR_LT_LONG(row, 0);
	}
	_2 = _1;
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		_2 = ZEPHIR_GT(column, &_3);
	}
	_4 = _2;
	if (!(_4)) {
		_4 = ZEPHIR_LT_LONG(column, 0);
	}
	if (_4) {
		RETURN_BOOL(0);
	}
	zephir_read_property(&_5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_long(&_6, &_5, zephir_get_intval(row), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 81);
	zephir_array_fetch_long(&_7, &_6, zephir_get_intval(column), PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 81);
	RETURN_CTORW(&_7);

}

void zep_Pocketmine_Math_Matrix_isSquare_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0, _1;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	RETURN_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_1));

}

void zep_Pocketmine_Math_Matrix_add_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext ) {

	zend_bool _2, _8, _12$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _9, _10, _13$$4, _14$$4;
	zval *matrix = NULL, matrix_sub, c, r, result, _0, _1, _3, _4, _5, _6, _7, _11$$4, _15$$5, _16$$5, _17$$5, _18$$5, _19$$5;
		ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);
	ZVAL_UNDEF(&_18$$5);
	ZVAL_UNDEF(&_19$$5);

	ZEPHIR_MM_GROW();
	matrix = matrix_ext;




	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	_2 = !ZEPHIR_IS_IDENTICAL(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_INTERNAL_METHOD_P0(&_4, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
		zephir_check_call_status();
		_2 = !ZEPHIR_IS_IDENTICAL(&_3, &_4);
	}
	if (_2) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_5, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_5, &_6);
	zephir_check_call_status();
	zephir_read_property(&_7, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_10 = (zephir_get_numberval(&_7) - 1);
	_9 = 0;
	_8 = 0;
	if (_9 <= _10) {
		while (1) {
			if (_8) {
				_9++;
				if (!(_9 <= _10)) {
					break;
				}
			} else {
				_8 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _9);
			zephir_read_property(&_11$$4, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_14$$4 = (zephir_get_numberval(&_11$$4) - 1);
			_13$$4 = 0;
			_12$$4 = 0;
			if (_13$$4 <= _14$$4) {
				while (1) {
					if (_12$$4) {
						_13$$4++;
						if (!(_13$$4 <= _14$$4)) {
							break;
						}
					} else {
						_12$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _13$$4);
					zephir_read_property(&_15$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_16$$5, &_15$$5, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 100);
					zephir_array_fetch(&_17$$5, &_16$$5, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 100);
					ZEPHIR_CALL_INTERNAL_METHOD_P2(&_18$$5, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &r, &c);
					zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_19$$5);
					zephir_add_function(&_19$$5, &_17$$5, &_18$$5);
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &r, &c, &_19$$5);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_subtract_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext ) {

	zend_bool _2, _6, _10$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_18 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _7, _8, _11$$4, _12$$4;
	zval *matrix = NULL, matrix_sub, c, r, result, _0, _1, _3, _4, _5, _9$$4, _13$$5, _14$$5, _15$$5, _16$$5, _17$$5;
		ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_14$$5);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_17$$5);

	ZEPHIR_MM_GROW();
	matrix = matrix_ext;




	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	_2 = !ZEPHIR_IS_IDENTICAL(&_0, &_1);
	if (!(_2)) {
		zephir_read_property(&_3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_INTERNAL_METHOD_P0(&_4, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
		zephir_check_call_status();
		_2 = !ZEPHIR_IS_IDENTICAL(&_3, &_4);
	}
	if (_2) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_5, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_8 = (zephir_get_numberval(&_5) - 1);
	_7 = 0;
	_6 = 0;
	if (_7 <= _8) {
		while (1) {
			if (_6) {
				_7++;
				if (!(_7 <= _8)) {
					break;
				}
			} else {
				_6 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _7);
			zephir_read_property(&_9$$4, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_12$$4 = (zephir_get_numberval(&_9$$4) - 1);
			_11$$4 = 0;
			_10$$4 = 0;
			if (_11$$4 <= _12$$4) {
				while (1) {
					if (_10$$4) {
						_11$$4++;
						if (!(_11$$4 <= _12$$4)) {
							break;
						}
					} else {
						_10$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _11$$4);
					zephir_read_property(&_13$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_14$$5, &_13$$5, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 117);
					zephir_array_fetch(&_15$$5, &_14$$5, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 117);
					ZEPHIR_CALL_INTERNAL_METHOD_P2(&_16$$5, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &r, &c);
					zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_17$$5);
					zephir_sub_function(&_17$$5, &_15$$5, &_16$$5);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_18, 0, &r, &c, &_17$$5);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_multiplyScalar_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_ext ) {

	zend_bool _1, _5$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _2, _3, _6$$3, _7$$3;
	zval *number = NULL, number_sub, c, r, result, _0, _4$$3, _8$$4, _9$$4, _10$$4, _11$$4;
		ZVAL_UNDEF(&number_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	number = number_ext;




	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			zephir_read_property(&_4$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_7$$3 = (zephir_get_numberval(&_4$$3) - 1);
			_6$$3 = 0;
			_5$$3 = 0;
			if (_6$$3 <= _7$$3) {
				while (1) {
					if (_5$$3) {
						_6$$3++;
						if (!(_6$$3 <= _7$$3)) {
							break;
						}
					} else {
						_5$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _6$$3);
					zephir_read_property(&_8$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_9$$4, &_8$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 131);
					zephir_array_fetch(&_10$$4, &_9$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 131);
					ZEPHIR_INIT_NVAR(&_11$$4);
					mul_function(&_11$$4, &_10$$4, number);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_12, 0, &r, &c, &_11$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_divideScalar_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *number_ext ) {

	zend_bool _1, _5$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _2, _3, _6$$3, _7$$3;
	zval *number = NULL, number_sub, c, r, result, _0, _4$$3, _8$$4, _9$$4, _10$$4, _11$$4;
		ZVAL_UNDEF(&number_sub);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();
	number = number_ext;




	ZEPHIR_INIT_VAR(&result);
	if (zephir_clone(&result, this_ptr) == FAILURE) {
		RETURN_MM();
	}
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			zephir_read_property(&_4$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_7$$3 = (zephir_get_numberval(&_4$$3) - 1);
			_6$$3 = 0;
			_5$$3 = 0;
			if (_6$$3 <= _7$$3) {
				while (1) {
					if (_5$$3) {
						_6$$3++;
						if (!(_6$$3 <= _7$$3)) {
							break;
						}
					} else {
						_5$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _6$$3);
					zephir_read_property(&_8$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_9$$4, &_8$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 145);
					zephir_array_fetch(&_10$$4, &_9$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 145);
					ZEPHIR_INIT_NVAR(&_11$$4);
					div_function(&_11$$4, &_10$$4, number);
					ZEPHIR_CALL_METHOD(NULL, &result, "setelement", &_12, 0, &r, &c, &_11$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_transpose_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zend_bool _3, _7$$3;
	zval c, r, result, _0, _1, _2, _6$$3, _10$$4, _11$$4, _12$$4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _4, _5, _8$$3, _9$$3;
		ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_0, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_0, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_5 = (zephir_get_numberval(&_2) - 1);
	_4 = 0;
	_3 = 0;
	if (_4 <= _5) {
		while (1) {
			if (_3) {
				_4++;
				if (!(_4 <= _5)) {
					break;
				}
			} else {
				_3 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _4);
			zephir_read_property(&_6$$3, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
			_9$$3 = (zephir_get_numberval(&_6$$3) - 1);
			_8$$3 = 0;
			_7$$3 = 0;
			if (_8$$3 <= _9$$3) {
				while (1) {
					if (_7$$3) {
						_8$$3++;
						if (!(_8$$3 <= _9$$3)) {
							break;
						}
					} else {
						_7$$3 = 1;
					}
					ZEPHIR_INIT_NVAR(&c);
					ZVAL_LONG(&c, _8$$3);
					zephir_read_property(&_10$$4, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
					zephir_array_fetch(&_11$$4, &_10$$4, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 159);
					zephir_array_fetch(&_12$$4, &_11$$4, &c, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 159);
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &c, &r, &_12$$4);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_product_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext ) {

	zend_bool _4, _7$$4, _11$$5;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, _5, _6, _8$$4, _9$$4, _12$$5, _13$$5;
	zval *matrix = NULL, matrix_sub, k, sum, j, i, result, c, _0, _1, _2, _3, _10$$5, _14$$6, _15$$6, _16$$6, _17$$6, _18$$6;
		ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&sum);
	ZVAL_UNDEF(&j);
	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$6);
	ZVAL_UNDEF(&_18$$6);

	ZEPHIR_MM_GROW();
	matrix = matrix_ext;




	zephir_read_property(&_0, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_1, matrix, zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call);
	zephir_check_call_status();
	if (!ZEPHIR_IS_IDENTICAL(&_0, &_1)) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_CALL_INTERNAL_METHOD_P0(&c, matrix, zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&result);
	object_init_ex(&result, pocketmine_math_matrix_ce);
	zephir_read_property(&_2, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, &result, "__construct", NULL, 5, &_2, &c);
	zephir_check_call_status();
	zephir_read_property(&_3, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_6 = (zephir_get_numberval(&_3) - 1);
	_5 = 0;
	_4 = 0;
	if (_5 <= _6) {
		while (1) {
			if (_4) {
				_5++;
				if (!(_5 <= _6)) {
					break;
				}
			} else {
				_4 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _5);
			_9$$4 = (zephir_get_numberval(&c) - 1);
			_8$$4 = 0;
			_7$$4 = 0;
			if (_8$$4 <= _9$$4) {
				while (1) {
					if (_7$$4) {
						_8$$4++;
						if (!(_8$$4 <= _9$$4)) {
							break;
						}
					} else {
						_7$$4 = 1;
					}
					ZEPHIR_INIT_NVAR(&j);
					ZVAL_LONG(&j, _8$$4);
					ZEPHIR_INIT_NVAR(&sum);
					ZVAL_LONG(&sum, 0);
					zephir_read_property(&_10$$5, this_ptr, SL("columns"), PH_NOISY_CC | PH_READONLY);
					_13$$5 = (zephir_get_numberval(&_10$$5) - 1);
					_12$$5 = 0;
					_11$$5 = 0;
					if (_12$$5 <= _13$$5) {
						while (1) {
							if (_11$$5) {
								_12$$5++;
								if (!(_12$$5 <= _13$$5)) {
									break;
								}
							} else {
								_11$$5 = 1;
							}
							ZEPHIR_INIT_NVAR(&k);
							ZVAL_LONG(&k, _12$$5);
							zephir_read_property(&_14$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
							zephir_array_fetch(&_15$$6, &_14$$6, &i, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 183);
							zephir_array_fetch(&_16$$6, &_15$$6, &k, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 183);
							ZEPHIR_CALL_INTERNAL_METHOD_P2(&_17$$6, matrix, zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call, &k, &j);
							zephir_check_call_status();
							ZEPHIR_INIT_NVAR(&_18$$6);
							mul_function(&_18$$6, &_16$$6, &_17$$6);
							ZEPHIR_ADD_ASSIGN(&sum, &_18$$6);
						}
					}
					ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(&result, zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call, &i, &j, &sum);
					zephir_check_call_status();
				}
			}
		}
	}
	RETURN_CCTOR(&result);

}

void zep_Pocketmine_Math_Matrix_determinant_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zval _0, _1, _2$$5, _3$$5, _4$$5, _5$$5, _6$$5, _7$$5, _8$$5, _9$$5, _10$$5, _11$$5, _12$$5, _13$$5, _14$$6, _15$$6, _16$$6, _17$$6, _18$$6, _19$$6, _20$$6, _21$$6, _22$$6, _23$$6, _24$$6, _25$$6, _26$$6, _27$$6, _28$$6, _29$$6, _30$$6, _31$$6, _32$$6, _33$$6, _34$$6, _35$$6, _36$$6, _37$$6, _38$$6, _39$$6, _40$$6, _41$$6, _42$$6, _43$$6, _44$$6, _45$$6, _46$$6, _47$$6, _48$$6, _49$$6, _50$$6, _51$$6, _52$$6, _53$$6;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$6);
	ZVAL_UNDEF(&_18$$6);
	ZVAL_UNDEF(&_19$$6);
	ZVAL_UNDEF(&_20$$6);
	ZVAL_UNDEF(&_21$$6);
	ZVAL_UNDEF(&_22$$6);
	ZVAL_UNDEF(&_23$$6);
	ZVAL_UNDEF(&_24$$6);
	ZVAL_UNDEF(&_25$$6);
	ZVAL_UNDEF(&_26$$6);
	ZVAL_UNDEF(&_27$$6);
	ZVAL_UNDEF(&_28$$6);
	ZVAL_UNDEF(&_29$$6);
	ZVAL_UNDEF(&_30$$6);
	ZVAL_UNDEF(&_31$$6);
	ZVAL_UNDEF(&_32$$6);
	ZVAL_UNDEF(&_33$$6);
	ZVAL_UNDEF(&_34$$6);
	ZVAL_UNDEF(&_35$$6);
	ZVAL_UNDEF(&_36$$6);
	ZVAL_UNDEF(&_37$$6);
	ZVAL_UNDEF(&_38$$6);
	ZVAL_UNDEF(&_39$$6);
	ZVAL_UNDEF(&_40$$6);
	ZVAL_UNDEF(&_41$$6);
	ZVAL_UNDEF(&_42$$6);
	ZVAL_UNDEF(&_43$$6);
	ZVAL_UNDEF(&_44$$6);
	ZVAL_UNDEF(&_45$$6);
	ZVAL_UNDEF(&_46$$6);
	ZVAL_UNDEF(&_47$$6);
	ZVAL_UNDEF(&_48$$6);
	ZVAL_UNDEF(&_49$$6);
	ZVAL_UNDEF(&_50$$6);
	ZVAL_UNDEF(&_51$$6);
	ZVAL_UNDEF(&_52$$6);
	ZVAL_UNDEF(&_53$$6);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_INTERNAL_METHOD_P0(&_0, this_ptr, zep_Pocketmine_Math_Matrix_isSquare_zephir_internal_call);
	zephir_check_call_status();
	if (!ZEPHIR_IS_TRUE_IDENTICAL(&_0)) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_OBS_VAR(&_1);
	zephir_read_property(&_1, this_ptr, SL("rows"), PH_NOISY_CC);
	do {
		if (ZEPHIR_IS_LONG(&_1, 1)) {
			RETURN_MM_LONG(0);
		}
		if (ZEPHIR_IS_LONG(&_1, 2)) {
			zephir_read_property(&_2$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_3$$5, &_2$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_4$$5, &_3$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_read_property(&_5$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_6$$5, &_5$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_7$$5, &_6$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			ZEPHIR_INIT_VAR(&_8$$5);
			mul_function(&_8$$5, &_4$$5, &_7$$5);
			zephir_read_property(&_9$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_4$$5, &_9$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_7$$5, &_4$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_read_property(&_10$$5, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_11$$5, &_10$$5, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			zephir_array_fetch_long(&_12$$5, &_11$$5, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 201);
			ZEPHIR_INIT_VAR(&_13$$5);
			mul_function(&_13$$5, &_7$$5, &_12$$5);
			zephir_sub_function(return_value, &_8$$5, &_13$$5);
			RETURN_MM();
		}
		if (ZEPHIR_IS_LONG(&_1, 3)) {
			zephir_read_property(&_14$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_15$$6, &_14$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_16$$6, &_15$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_17$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_18$$6, &_17$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_19$$6, &_18$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_20$$6);
			mul_function(&_20$$6, &_16$$6, &_19$$6);
			zephir_read_property(&_21$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_16$$6, &_21$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_19$$6, &_16$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_22$$6);
			mul_function(&_22$$6, &_20$$6, &_19$$6);
			zephir_read_property(&_23$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_19$$6, &_23$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_24$$6, &_19$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_25$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_26$$6, &_25$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_27$$6, &_26$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_24$$6, &_27$$6);
			zephir_read_property(&_28$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_24$$6, &_28$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_27$$6, &_24$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_VAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_27$$6);
			ZEPHIR_INIT_NVAR(&_20$$6);
			zephir_add_function(&_20$$6, &_22$$6, &_29$$6);
			zephir_read_property(&_30$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_27$$6, &_30$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_31$$6, &_27$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_32$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_33$$6, &_32$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_34$$6, &_33$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_22$$6);
			mul_function(&_22$$6, &_31$$6, &_34$$6);
			zephir_read_property(&_35$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_31$$6, &_35$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_34$$6, &_31$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_22$$6, &_34$$6);
			ZEPHIR_INIT_NVAR(&_22$$6);
			zephir_add_function(&_22$$6, &_20$$6, &_29$$6);
			zephir_read_property(&_36$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_34$$6, &_36$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_37$$6, &_34$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_38$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_39$$6, &_38$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_40$$6, &_39$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_37$$6, &_40$$6);
			zephir_read_property(&_41$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_37$$6, &_41$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_40$$6, &_37$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_40$$6);
			ZEPHIR_INIT_NVAR(&_20$$6);
			zephir_sub_function(&_20$$6, &_22$$6, &_29$$6);
			zephir_read_property(&_42$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_40$$6, &_42$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_43$$6, &_40$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_44$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_45$$6, &_44$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_46$$6, &_45$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_22$$6);
			mul_function(&_22$$6, &_43$$6, &_46$$6);
			zephir_read_property(&_47$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_43$$6, &_47$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_46$$6, &_43$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_22$$6, &_46$$6);
			ZEPHIR_INIT_NVAR(&_22$$6);
			zephir_sub_function(&_22$$6, &_20$$6, &_29$$6);
			zephir_read_property(&_48$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_46$$6, &_48$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_49$$6, &_46$$6, 2, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_read_property(&_50$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_51$$6, &_50$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_52$$6, &_51$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_20$$6);
			mul_function(&_20$$6, &_49$$6, &_52$$6);
			zephir_read_property(&_53$$6, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_long(&_49$$6, &_53$$6, 0, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			zephir_array_fetch_long(&_52$$6, &_49$$6, 1, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 203);
			ZEPHIR_INIT_NVAR(&_29$$6);
			mul_function(&_29$$6, &_20$$6, &_52$$6);
			zephir_sub_function(return_value, &_22$$6, &_29$$6);
			RETURN_MM();
		}
	} while(0);

	RETURN_MM_BOOL(0);

}

void zep_Pocketmine_Math_Matrix___toString_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used) {

	zend_long _2, _3;
	zend_bool _1;
	zval r, s, _0, _8, _9, _10, _4$$3, _5$$3, _6$$3, _7$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&s);
	ZVAL_STRING(&s, "");
	zephir_read_property(&_0, this_ptr, SL("rows"), PH_NOISY_CC | PH_READONLY);
	_3 = (zephir_get_numberval(&_0) - 1);
	_2 = 0;
	_1 = 0;
	if (_2 <= _3) {
		while (1) {
			if (_1) {
				_2++;
				if (!(_2 <= _3)) {
					break;
				}
			} else {
				_1 = 1;
			}
			ZEPHIR_INIT_NVAR(&r);
			ZVAL_LONG(&r, _2);
			ZEPHIR_INIT_NVAR(&_4$$3);
			zephir_read_property(&_5$$3, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch(&_6$$3, &_5$$3, &r, PH_NOISY | PH_READONLY, "pocketmine/math/matrix.zep", 214);
			zephir_fast_join_str(&_4$$3, SL(","), &_6$$3);
			ZEPHIR_INIT_NVAR(&_7$$3);
			ZEPHIR_CONCAT_VS(&_7$$3, &_4$$3, ";");
			zephir_concat_self(&s, &_7$$3);
		}
	}
	ZVAL_LONG(&_8, 0);
	ZVAL_LONG(&_9, -1);
	ZEPHIR_INIT_VAR(&_10);
	zephir_substr(&_10, &s, 0 , -1 , 0);
	ZEPHIR_CONCAT_SVS(return_value, "Matrix({this->rows}x{this->columns};", &_10, ")");
	RETURN_MM();

}

zend_object *zephir_init_properties_Pocketmine_Math_Matrix(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("matrix"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("matrix"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

