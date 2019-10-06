
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
#include "zval_ref_read.h"
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


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 56) >> 56));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignByte) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xff));

}

PHP_METHOD(Pocketmine_Utils_Binary, signShort) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 48) >> 48));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignShort) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG((value & 0xffff));

}

PHP_METHOD(Pocketmine_Utils_Binary, signInt) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();


	zephir_fetch_params_without_memory_grow(1, 0, &value_param);

	value = zephir_get_intval(value_param);


	RETURN_LONG(((value << 32) >> 32));

}

PHP_METHOD(Pocketmine_Utils_Binary, unsignInt) {

	zval *value_param = NULL;
	zend_long value;
	zval *this_ptr = getThis();


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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_SELF(&_0, "writeshort", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_SELF("readlshort", NULL, 0, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_SELF(&_0, "writeint", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_SELF("readlint", NULL, 0, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_SELF(&_0, "writelong", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_SELF("readllong", NULL, 0, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &b_param);

	zephir_get_strval(&b, b_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 18, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("ord", NULL, 19, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	zephir_get_strval(&c, c_param);


	_0 = ZEPHIR_STRING_OFFSET(&c, 0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRINGL(&_1, &_0, 1);
	ZEPHIR_CALL_FUNCTION(&_2, "ord", NULL, 19, &_1);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_SELF("signbyte", NULL, 0, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &c_param);

	c = zephir_get_intval(c_param);


	ZVAL_LONG(&_0, c);
	ZEPHIR_RETURN_CALL_FUNCTION("chr", NULL, 18, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 146 TSRMLS_CC);
	RETURN_CTOR(&_2);

}

/**
 * Reads a 16-bit signed big-endian number
 *
 * @param $str
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 158 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_SELF("signshort", NULL, 0, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 182 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 194 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_SELF("signshort", NULL, 0, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 18, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &_1, &str);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 218 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\\0");
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 18, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &str, &_1);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 242 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 266 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_SELF("signint", NULL, 0, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 290 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_SELF("signint", NULL, 0, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 314 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &accuracy_param);

	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_CALL_SELF(&_0, "readfloat", NULL, 0, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 351 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &accuracy_param);

	zephir_get_strval(&str, str_param);
	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_CALL_SELF(&_0, "readlfloat", NULL, 0, &str);
	zephir_check_call_status();
	ZVAL_LONG(&_1, accuracy);
	zephir_round(return_value, &_0, &_1, NULL TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "%F");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_CALL_FUNCTION(&_2, "sprintf", NULL, 22, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "/(\\.\\d+?)0+\\$/");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "\\$1");
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", NULL, 23, &_0, &_3, &_2);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 400 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 424 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_doubleval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZVAL_DOUBLE(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 448 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "J");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZEPHIR_CALL_FUNCTION(&_1, "unpack", NULL, 20, &_0, &str);
	zephir_check_call_status();
	zephir_array_fetch_long(&_2, &_1, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binary.zep", 472 TSRMLS_CC);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "P");
	ZVAL_LONG(&_1, value);
	ZEPHIR_RETURN_CALL_FUNCTION("pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Reads a 32-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer_param, &offset);

	zephir_get_strval(&buffer, buffer_param);


	zval_ref_read(offset);
	ZEPHIR_CALL_SELF(&raw, "readunsignedvarint", NULL, 0, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG(((temp ^ (zephir_get_intval(&raw) & 1)) << 63));

}

/**
 * Reads a 32-bit variable-length unsigned integer.
 *
 * @param string $buffer
 * @param int    $offset
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer, &offset);

	ZEPHIR_SEPARATE_PARAM(offset);


	zval_ref_read(offset);
	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 28)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 24, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 520);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 19, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarInt did not terminate after 5 bytes!", "pocketmine/utils/binary.zep", 530);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	v = ((((v << 32)) >> 32));
	ZVAL_LONG(&_0, (((v << 1) ^ v) >> 31));
	ZEPHIR_RETURN_CALL_SELF("writeunsignedvarint", NULL, 0, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	ZVAL_STRING(&buf, "");
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
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 18, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4 TSRMLS_CC);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 18, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5 TSRMLS_CC);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> (7 & zephir_get_intval(&_8$$3))) >> 6);
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarInt", "pocketmine/utils/binary.zep", 568);
	return;

}

/**
 * Reads a 64-bit zigzag-encoded variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer_param, &offset);

	zephir_get_strval(&buffer, buffer_param);


	zval_ref_read(offset);
	ZEPHIR_CALL_SELF(&raw, "readunsignedvarlong", NULL, 0, &buffer, offset);
	zephir_check_call_status();
	temp = (((((((zephir_get_intval(&raw) << 63)) >> 63)) ^ zephir_get_intval(&raw))) >> 1);
	RETURN_MM_LONG(((temp ^ (zephir_get_intval(&raw) & 1)) << 63));

}

/**
 * Reads a 64-bit unsigned variable-length integer.
 *
 * @param string $buffer
 * @param int    $offset
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &buffer, &offset);

	ZEPHIR_SEPARATE_PARAM(offset);


	zval_ref_read(offset);
	i = 0;
	value = 0;
	while (1) {
		if (!(i <= 63)) {
			break;
		}
		zephir_get_strval(&_0$$3, buffer);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "str_split", &_2, 24, &_0$$3);
		zephir_check_call_status();
		if (!(zephir_array_isset_long(&_1$$3, zephir_get_intval(offset)))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left in buffer", "pocketmine/utils/binary.zep", 604);
			return;
		}
		ZVAL_LONG(&_3$$3, 1);
		ZEPHIR_INIT_NVAR(&_4$$3);
		zephir_substr(&_4$$3, buffer, zephir_get_intval(offset), 1 , 0);
		ZEPHIR_CALL_FUNCTION(&b$$3, "ord", &_5, 19, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_SEPARATE(offset);
		zephir_increment(offset);
		value = (value | (((((int) (zephir_get_numberval(&b$$3)) & 0x7f)) << i)));
		if ((((int) (zephir_get_numberval(&b$$3)) & 0x80)) == 0) {
			RETURN_MM_LONG(value);
		}
		i += 7;
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "VarLong did not terminate after 10 bytes!", "pocketmine/utils/binary.zep", 614);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_0, (((v << 1) ^ v) >> 63));
	ZEPHIR_RETURN_CALL_SELF("writeunsignedvarlong", NULL, 0, &_0);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &value_param);

	value = zephir_get_intval(value_param);


	ZEPHIR_INIT_VAR(&buf);
	ZVAL_STRING(&buf, "");
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
				ZEPHIR_CALL_FUNCTION(&_4$$4, "chr", &_5, 18, &_3$$4);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_4$$4 TSRMLS_CC);
			} else {
				ZVAL_LONG(&_6$$5, (value & 0x7f));
				ZEPHIR_CALL_FUNCTION(&_7$$5, "chr", &_5, 18, &_6$$5);
				zephir_check_call_status();
				zephir_concat_self(&buf, &_7$$5 TSRMLS_CC);
				RETURN_CTOR(&buf);
			}
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZEPHIR_GET_CONSTANT(&_8$$3, "PHP_INT_MAX");
			value = ((value >> (7 & zephir_get_intval(&_8$$3))) >> 6);
		}
	}
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Value too large to be encoded as a VarLong", "pocketmine/utils/binary.zep", 651);
	return;

}

