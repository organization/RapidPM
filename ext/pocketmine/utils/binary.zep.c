
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
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/concat.h"
#include "kernel/string.h"
#include "kernel/math.h"
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"


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
 * Methods for working with binary strings
 */
ZEPHIR_INIT_CLASS(Pocketmine_Utils_Binary) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Utils, Binary, pocketmine, utils_binary, pocketmine_utils_binary_method_entry, 0);

	zephir_declare_class_constant_long(pocketmine_utils_binary_ce, SL("BIG_ENDIAN"), 0x0);

	zephir_declare_class_constant_long(pocketmine_utils_binary_ce, SL("LITTLE_ENDIAN"), 0x1);

	return SUCCESS;

}

PHP_METHOD(Pocketmine_Utils_Binary, signByte) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 56) >> 56));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignByte) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xff));

}

PHP_METHOD(Pocketmine_Utils_Binary, signShort) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 48) >> 48));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignShort) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xffff));

}

PHP_METHOD(Pocketmine_Utils_Binary, signInt) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 32) >> 32));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignInt) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();

#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xffffffff));

}

PHP_METHOD(Pocketmine_Utils_Binary, flipShortEndianness) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeShort_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLShort_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Utils_Binary, flipIntEndianness) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeInt_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLInt_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Utils_Binary, flipLongEndianness) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeLong_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLLong_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a byte boolean
 *
 * @param string $b
 *
 * @return bool
 */
PHP_METHOD(Pocketmine_Utils_Binary, readBool) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *b_param = NULL, _0, _1;
	zval b;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&b);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &b_param);

	zephir_get_strval(&b, b_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	RETURN_MM_BOOL(!ZEPHIR_IS_IDENTICAL(&b, &_1));

}

/**
 * Writes a byte boolean
 *
 * @param bool $b
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeBool) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *b_param = NULL, _0;
	zend_bool b;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &b_param);

	b = zephir_get_boolval(b_param);


	ZEPHIR_INIT_VAR(&_0);
	if (b) {
		ZVAL_LONG(&_0, '\1');
	} else {
		ZVAL_LONG(&_0, '\0');
	}
	RETURN_CCTOR(&_0);

}

/**
 * Reads an unsigned byte (0 - 255)
 *
 * @param string $c
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readByte) {

	unsigned char _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *c_param = NULL, _1;
	zval c;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("ord", NULL, 16, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a signed byte (-128 - 127)
 *
 * @param string $c
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readSignedByte) {

	unsigned char _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *c_param = NULL, _1, _2;
	zval c;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_CALL_FUNCTION(&_2, "ord", NULL, 16, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signByte_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes an unsigned/signed byte
 *
 * @param int $c
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeByte) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, _0;
	zend_long c, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	c = zephir_get_intval(c_param);


	ZVAL_LONG(&_0, c);
	ZEPHIR_RETURN_CALL_FUNCTION("chr", NULL, 15, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 16-bit unsigned big-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 146);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 16-bit signed big-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readSignedShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 158);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 16-bit signed/unsigned big-endian number
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 16-bit unsigned little-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 182);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 16-bit signed little-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readSignedLShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 194);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 16-bit signed/unsigned little-endian number
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 3-byte big-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2, _3, _4;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &_1, &str);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 17, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 218);
	RETURN_CTOR(&_4);

}

/**
 * Writes a 3-byte big-endian number
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1, _2;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 1);
	zephir_substr(return_value, &_2, 1 , 0, ZEPHIR_SUBSTR_NO_LENGTH);
	RETURN_MM();

}

/**
 * Reads a 3-byte little-endian number
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2, _3, _4;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &str, &_1);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 17, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 242);
	RETURN_CTOR(&_4);

}

/**
 * Writes a 3-byte little-endian number
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1, _2, _3;
	long value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_3, -1);
	zephir_substr(return_value, &_2, 0 , -1 , 0);
	RETURN_MM();

}

/**
 * Reads a 4-byte signed integer
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 266);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 4-byte integer
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	long value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte signed little-endian integer
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 290);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 4-byte signed little-endian integer
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	long value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte floating-point number
 *
 * @param string $str
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 314);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 4-byte floating-point number, rounded to the specified number of decimal places.
 *
 * @param string $str
 * @param int    $accuracy
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readRoundedFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, *accuracy_param = NULL, _0, _1;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &accuracy_param);

	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readFloat_zephir_internal_call, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL);
	RETURN_MM();

}

/**
 * Writes a 4-byte floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte little-endian floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 351);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 4-byte little-endian floating-point number rounded to the specified number of decimal places.
 *
 * @param string $str
 * @param int    $accuracy
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readRoundedLFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, *accuracy_param = NULL, _0, _1;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &accuracy_param);

	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLFloat_zephir_internal_call, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL);
	RETURN_MM();

}

/**
 * Writes a 4-byte little-endian floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a printable floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, printFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1, _2, _3;
	double value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "%F");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "sprintf", NULL, 19, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "/(\\.\\d+?)0+\\$/");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "\\$1");
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", NULL, 20, &_0, &_3, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 400);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte little-endian floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 424);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte floating-point little-endian number.
 *
 * @param float $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte integer.
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 448);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte integer.
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte little-endian integer.
 *
 * @param string $str
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readLLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 472);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte little-endian integer.
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeLLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 32-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_Binary, readVarInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, temp;
	zval *buffer_param = NULL, *offset = NULL, offset_sub, raw;
	zval buffer;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&raw);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer_param, &offset);

	zephir_get_strval(&buffer, buffer_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&raw, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readUnsignedVarInt_zephir_internal_call, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG((temp ^ (zephir_get_intval(&raw) & -9223372036854775808)));

}

/**
 * Reads a 32-bit variable-length unsigned integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 *
 * @throws BinaryDataException if the var-int did not end after 5 bytes or there were not enough bytes
 */
PHP_METHOD(Pocketmine_Utils_Binary, readUnsignedVarInt) {

	zval _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, i, value;
	zephir_fcall_cache_entry *_2 = NULL, *_5 = NULL;
	zval *buffer = NULL, buffer_sub, *offset = NULL, offset_sub, _1$$3, b$$3, _3$$3, _4$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer_sub);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&b$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_0$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer, &offset);

	ZEPHIR_SEPARATE_PARAM(offset);


	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 28)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 21, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 518);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 16, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarInt did not terminate after 5 bytes!", "pocketmine/utils/binary.zep", 528);
	return;

}

/**
 * Writes a 32-bit integer as a zigzag-encoded variable-length integer.
 *
 * @param int $v
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeVarInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	v = ((((v << 32)) >> 32));
	ZVAL_LONG(&_0, ((v << 1) ^ (v >> 31)));
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeUnsignedVarInt_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 32-bit unsigned integer as a variable-length integer.
 *
 * @param int $value
 *
 * @return string up to 5 bytes
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeUnsignedVarInt) {

	zend_bool _0;
	zval buf;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *value_param = NULL, i, _3$$4, _4$$4, _6$$5, _7$$5, _8$$3;
	zend_long value, ZEPHIR_LAST_CALL_STATUS, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&buf);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	value = (value & 0xffffffff);
	_2 = 4;
	_1 = 0;
	_0 = 0;
	if (_1 <= _2) {
		while (1) {
			if (_0) {
				_1++;
				if (!(_1 <= _2)) {
					break;
				}
			} else {
				_0 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _1);
			if (((value >> 7)) != 0) {
				ZVAL_LONG(&_3$$4, (value | 0x80));
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 15, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 15, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> 7) & (zephir_get_intval(&_8$$3) >> 6));
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarInt", "pocketmine/utils/binary.zep", 566);
	return;

}

/**
 * Reads a 64-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return long
 */
PHP_METHOD(Pocketmine_Utils_Binary, readVarLong) {

	long temp;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *buffer_param = NULL, *offset = NULL, offset_sub, raw;
	zval buffer;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&raw);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer_param, &offset);

	zephir_get_strval(&buffer, buffer_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&raw, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readUnsignedVarLong_zephir_internal_call, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG((temp ^ (zephir_get_intval(&raw) & -9223372036854775808)));

}

/**
 * Reads a 64-bit unsigned variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 *
 * @throws BinaryDataException if the var-int did not end after 10 bytes or there were not enough bytes
 */
PHP_METHOD(Pocketmine_Utils_Binary, readUnsignedVarLong) {

	zval _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, i, value;
	zephir_fcall_cache_entry *_2 = NULL, *_5 = NULL;
	zval *buffer = NULL, buffer_sub, *offset = NULL, offset_sub, _1$$3, b$$3, _3$$3, _4$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer_sub);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&b$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_0$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer, &offset);

	ZEPHIR_SEPARATE_PARAM(offset);


	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 63)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 21, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 600);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 16, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarLong did not terminate after 10 bytes!", "pocketmine/utils/binary.zep", 610);
	return;

}

/**
 * Writes a 64-bit integer as a zigzag-encoded variable-length long.
 *
 * @param int $v
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeVarLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_0, ((v << 1) ^ (v >> 63)));
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeUnsignedVarLong_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 64-bit unsigned integer as a variable-length long.
 *
 * @param int $value
 *
 * @return string
 */
PHP_METHOD(Pocketmine_Utils_Binary, writeUnsignedVarLong) {

	zend_bool _0;
	zval buf;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *value_param = NULL, i, _3$$4, _4$$4, _6$$5, _7$$5, _8$$3;
	zend_long value, ZEPHIR_LAST_CALL_STATUS, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&buf);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	_2 = 9;
	_1 = 0;
	_0 = 0;
	if (_1 <= _2) {
		while (1) {
			if (_0) {
				_1++;
				if (!(_1 <= _2)) {
					break;
				}
			} else {
				_0 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _1);
			if (((value >> 7)) != 0) {
				ZVAL_LONG(&_3$$4, (value | 0x80));
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 15, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 15, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> 7) & (zephir_get_intval(&_8$$3) >> 6));
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarLong", "pocketmine/utils/binary.zep", 647);
	return;

}

void zep_Pocketmine_Utils_Binary_signByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 56) >> 56));

}

void zep_Pocketmine_Utils_Binary_unsignByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xff));

}

void zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 48) >> 48));

}

void zep_Pocketmine_Utils_Binary_unsignShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xffff));

}

void zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 32) >> 32));

}

void zep_Pocketmine_Utils_Binary_unsignInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zval *value_param = NULL;
	zend_long value;
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xffffffff));

}

void zep_Pocketmine_Utils_Binary_flipShortEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeShort_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLShort_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Utils_Binary_flipIntEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeInt_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLInt_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

void zep_Pocketmine_Utils_Binary_flipLongEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeLong_zephir_internal_call, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLLong_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a byte boolean
 *
 * @param string $b
 *
 * @return bool
 */
void zep_Pocketmine_Utils_Binary_readBool_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *b_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *b_param = NULL, _0, _1;
	zval b;
		ZVAL_UNDEF(&b);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(b)
		Z_PARAM_STR(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	b_param = b_param_ext;


	zephir_get_strval(&b, b_param);
	zephir_get_strval(&b, b_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	RETURN_MM_BOOL(!ZEPHIR_IS_IDENTICAL(&b, &_1));

}

/**
 * Writes a byte boolean
 *
 * @param bool $b
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeBool_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *b_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *b_param = NULL, _0;
	zend_bool b;
		ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_BOOL(b)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	b_param = b_param_ext;


	b = zephir_get_boolval(b_param);
	b = zephir_get_boolval(b_param);


	ZEPHIR_INIT_VAR(&_0);
	if (b) {
		ZVAL_LONG(&_0, '\1');
	} else {
		ZVAL_LONG(&_0, '\0');
	}
	RETURN_CCTOR(&_0);

}

/**
 * Reads an unsigned byte (0 - 255)
 *
 * @param string $c
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext) {

	unsigned char _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *c_param = NULL, _1;
	zval c;
		ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(c)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	c_param = c_param_ext;


	zephir_get_strval(&c, c_param);
	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("ord", NULL, 16, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a signed byte (-128 - 127)
 *
 * @param string $c
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readSignedByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext) {

	unsigned char _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *c_param = NULL, _1, _2;
	zval c;
		ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(c)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	c_param = c_param_ext;


	zephir_get_strval(&c, c_param);
	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_CALL_FUNCTION(&_2, "ord", NULL, 16, &_1);
	zephir_check_call_status();
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signByte_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes an unsigned/signed byte
 *
 * @param int $c
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, _0;
	zend_long c, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(c)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	c_param = c_param_ext;


	c = zephir_get_intval(c_param);
	c = zephir_get_intval(c_param);


	ZVAL_LONG(&_0, c);
	ZEPHIR_RETURN_CALL_FUNCTION("chr", NULL, 15, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 16-bit unsigned big-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 146);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 16-bit signed big-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readSignedShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 158);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 16-bit signed/unsigned big-endian number
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 16-bit unsigned little-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 182);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 16-bit signed little-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readSignedLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 194);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 16-bit signed/unsigned little-endian number
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 3-byte big-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2, _3, _4;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &_1, &str);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 17, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 218);
	RETURN_CTOR(&_4);

}

/**
 * Writes a 3-byte big-endian number
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1, _2;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 1);
	zephir_substr(return_value, &_2, 1 , 0, ZEPHIR_SUBSTR_NO_LENGTH);
	RETURN_MM();

}

/**
 * Reads a 3-byte little-endian number
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readLTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2, _3, _4;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 15, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &str, &_1);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 17, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 242);
	RETURN_CTOR(&_4);

}

/**
 * Writes a 3-byte little-endian number
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1, _2, _3;
	long value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_3, -1);
	zephir_substr(return_value, &_2, 0 , -1 , 0);
	RETURN_MM();

}

/**
 * Reads a 4-byte signed integer
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 266);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 4-byte integer
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	long value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte signed little-endian integer
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readLInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 290);
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 4-byte signed little-endian integer
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	long value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte floating-point number
 *
 * @param string $str
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 314);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 4-byte floating-point number, rounded to the specified number of decimal places.
 *
 * @param string $str
 * @param int    $accuracy
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readRoundedFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext, zval *accuracy_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, *accuracy_param = NULL, _0, _1;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;

	accuracy_param = accuracy_param_ext;


	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);
	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readFloat_zephir_internal_call, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL);
	RETURN_MM();

}

/**
 * Writes a 4-byte floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_doubleval(value_param);
	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 4-byte little-endian floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 351);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 4-byte little-endian floating-point number rounded to the specified number of decimal places.
 *
 * @param string $str
 * @param int    $accuracy
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readRoundedLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext, zval *accuracy_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, *accuracy_param = NULL, _0, _1;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;

	accuracy_param = accuracy_param_ext;


	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);
	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&_0, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readLFloat_zephir_internal_call, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL);
	RETURN_MM();

}

/**
 * Writes a 4-byte little-endian floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_doubleval(value_param);
	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns a printable floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_printFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1, _2, _3;
	double value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_doubleval(value_param);
	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "%F");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "sprintf", NULL, 19, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "/(\\.\\d+?)0+\\$/");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "\\$1");
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", NULL, 20, &_0, &_3, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 400);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte floating-point number.
 *
 * @param float $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_doubleval(value_param);
	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte little-endian floating-point number.
 *
 * @param string $str
 *
 * @return float
 */
void zep_Pocketmine_Utils_Binary_readLDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 424);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte floating-point little-endian number.
 *
 * @param float $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, _0, _1;
	double value;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_doubleval(value_param);
	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte integer.
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 448);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte integer.
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads an 8-byte little-endian integer.
 *
 * @param string $str
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readLLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, _0, _1, _2;
	zval str;
		ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_STR(str)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	str_param = str_param_ext;


	zephir_get_strval(&str, str_param);
	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 17, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 472);
	RETURN_CTOR(&_2);

}

/**
 * Writes an 8-byte little-endian integer.
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeLLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL, _0, _1;
	zend_long value, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 18, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 32-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 */
void zep_Pocketmine_Utils_Binary_readVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_param_ext, zval *offset_ext ) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, temp;
	zval *buffer_param = NULL, *offset = NULL, offset_sub, raw;
	zval buffer;
		ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&raw);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	buffer_param = buffer_param_ext;

	offset = offset_ext;


	zephir_get_strval(&buffer, buffer_param);
	zephir_get_strval(&buffer, buffer_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&raw, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readUnsignedVarInt_zephir_internal_call, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG((temp ^ (zephir_get_intval(&raw) & -9223372036854775808)));

}

/**
 * Reads a 32-bit variable-length unsigned integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 *
 * @throws BinaryDataException if the var-int did not end after 5 bytes or there were not enough bytes
 */
void zep_Pocketmine_Utils_Binary_readUnsignedVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_ext , zval *offset_ext ) {

	zval _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, i, value;
	zephir_fcall_cache_entry *_2 = NULL, *_5 = NULL;
	zval *buffer = NULL, buffer_sub, *offset = NULL, offset_sub, _1$$3, b$$3, _3$$3, _4$$3;
		ZVAL_UNDEF(&buffer_sub);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&b$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_0$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	buffer = buffer_ext;

	offset = offset_ext;


	ZEPHIR_SEPARATE_PARAM(offset);
	ZEPHIR_SEPARATE_PARAM(offset);


	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 28)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 21, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 518);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 16, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarInt did not terminate after 5 bytes!", "pocketmine/utils/binary.zep", 528);
	return;

}

/**
 * Writes a 32-bit integer as a zigzag-encoded variable-length integer.
 *
 * @param int $v
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(v)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	v_param = v_param_ext;


	v = zephir_get_intval(v_param);
	v = zephir_get_intval(v_param);


	v = ((((v << 32)) >> 32));
	ZVAL_LONG(&_0, ((v << 1) ^ (v >> 31)));
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeUnsignedVarInt_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 32-bit unsigned integer as a variable-length integer.
 *
 * @param int $value
 *
 * @return string up to 5 bytes
 */
void zep_Pocketmine_Utils_Binary_writeUnsignedVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zend_bool _0;
	zval buf;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *value_param = NULL, i, _3$$4, _4$$4, _6$$5, _7$$5, _8$$3;
	zend_long value, ZEPHIR_LAST_CALL_STATUS, _1, _2;
		ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&buf);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	value = (value & 0xffffffff);
	_2 = 4;
	_1 = 0;
	_0 = 0;
	if (_1 <= _2) {
		while (1) {
			if (_0) {
				_1++;
				if (!(_1 <= _2)) {
					break;
				}
			} else {
				_0 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _1);
			if (((value >> 7)) != 0) {
				ZVAL_LONG(&_3$$4, (value | 0x80));
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 15, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 15, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> 7) & (zephir_get_intval(&_8$$3) >> 6));
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarInt", "pocketmine/utils/binary.zep", 566);
	return;

}

/**
 * Reads a 64-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return long
 */
void zep_Pocketmine_Utils_Binary_readVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_param_ext, zval *offset_ext ) {

	long temp;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *buffer_param = NULL, *offset = NULL, offset_sub, raw;
	zval buffer;
		ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&raw);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
		Z_PARAM_STR(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	buffer_param = buffer_param_ext;

	offset = offset_ext;


	zephir_get_strval(&buffer, buffer_param);
	zephir_get_strval(&buffer, buffer_param);


	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(&raw, pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_readUnsignedVarLong_zephir_internal_call, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG((temp ^ (zephir_get_intval(&raw) & -9223372036854775808)));

}

/**
 * Reads a 64-bit unsigned variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset reference parameter
 *
 * @return int
 *
 * @throws BinaryDataException if the var-int did not end after 10 bytes or there were not enough bytes
 */
void zep_Pocketmine_Utils_Binary_readUnsignedVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_ext , zval *offset_ext ) {

	zval _0$$3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, i, value;
	zephir_fcall_cache_entry *_2 = NULL, *_5 = NULL;
	zval *buffer = NULL, buffer_sub, *offset = NULL, offset_sub, _1$$3, b$$3, _3$$3, _4$$3;
		ZVAL_UNDEF(&buffer_sub);
	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&b$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_0$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 2)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
		Z_PARAM_ZVAL(buffer)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	buffer = buffer_ext;

	offset = offset_ext;


	ZEPHIR_SEPARATE_PARAM(offset);
	ZEPHIR_SEPARATE_PARAM(offset);


	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 63)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 21, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 600);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 16, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarLong did not terminate after 10 bytes!", "pocketmine/utils/binary.zep", 610);
	return;

}

/**
 * Writes a 64-bit integer as a zigzag-encoded variable-length long.
 *
 * @param int $v
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_param_ext) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
		ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(v)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	v_param = v_param_ext;


	v = zephir_get_intval(v_param);
	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_0, ((v << 1) ^ (v >> 63)));
	ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(pocketmine_utils_binary_ce, zep_Pocketmine_Utils_Binary_writeUnsignedVarLong_zephir_internal_call, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 64-bit unsigned integer as a variable-length long.
 *
 * @param int $value
 *
 * @return string
 */
void zep_Pocketmine_Utils_Binary_writeUnsignedVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext) {

	zend_bool _0;
	zval buf;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *value_param = NULL, i, _3$$4, _4$$4, _6$$5, _7$$5, _8$$3;
	zend_long value, ZEPHIR_LAST_CALL_STATUS, _1, _2;
		ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&buf);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 1)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

#endif


	ZEPHIR_MM_GROW();
	value_param = value_param_ext;


	value = zephir_get_intval(value_param);
	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	_2 = 9;
	_1 = 0;
	_0 = 0;
	if (_1 <= _2) {
		while (1) {
			if (_0) {
				_1++;
				if (!(_1 <= _2)) {
					break;
				}
			} else {
				_0 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _1);
			if (((value >> 7)) != 0) {
				ZVAL_LONG(&_3$$4, (value | 0x80));
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 15, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 15, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> 7) & (zephir_get_intval(&_8$$3) >> 6));
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarLong", "pocketmine/utils/binary.zep", 647);
	return;

}

