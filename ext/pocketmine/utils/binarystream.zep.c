
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
#include "kernel/string.h"
#include "kernel/exception.h"
#include "kernel/fcall.h"
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
ZEPHIR_INIT_CLASS(Pocketmine_Utils_BinaryStream) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Utils, BinaryStream, pocketmine, utils_binarystream, pocketmine_utils_binarystream_method_entry, 0);

	/** @var int */
	zend_declare_property_null(pocketmine_utils_binarystream_ce, SL("offset"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/** @var string */
	zend_declare_property_null(pocketmine_utils_binarystream_ce, SL("buffer"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

/**
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getOffset) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "offset");

}

/**
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getBuffer) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "buffer");

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, __construct) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long offset;
	zval *buffer_param = NULL, *offset_param = NULL, _0;
	zval buffer;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &buffer_param, &offset_param);

	if (!buffer_param) {
		ZEPHIR_INIT_VAR(&buffer);
		ZVAL_STRING(&buffer, "");
	} else {
		zephir_get_strval(&buffer, buffer_param);
	}
	if (!offset_param) {
		offset = 0;
	} else {
		offset = zephir_get_intval(offset_param);
	}


	zephir_update_property_zval(this_ptr, SL("buffer"), &buffer);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, offset);
	zephir_update_property_zval(this_ptr, SL("offset"), &_0);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, setOffset) {

	zval *offset_param = NULL, _0;
	zend_long offset;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(1, 0, &offset_param);

	offset = zephir_get_intval(offset_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, offset);
	zephir_update_property_zval(this_ptr, SL("offset"), &_0);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, reset) {

	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "");
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_INIT_ZVAL_NREF(_1);
	ZVAL_LONG(&_1, 0);
	zephir_update_property_zval(this_ptr, SL("offset"), &_1);
	ZEPHIR_MM_RESTORE();

}

/**
 * Rewinds the stream pointer to the start.
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, rewind) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, 0);
	zephir_update_property_zval(this_ptr, SL("offset"), &_0);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, setBuffer) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long offset;
	zval *buffer_param = NULL, *offset_param = NULL, _0;
	zval buffer;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&buffer);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &buffer_param, &offset_param);

	if (!buffer_param) {
		ZEPHIR_INIT_VAR(&buffer);
		ZVAL_STRING(&buffer, "");
	} else {
		zephir_get_strval(&buffer, buffer_param);
	}
	if (!offset_param) {
		offset = 0;
	} else {
		offset = zephir_get_intval(offset_param);
	}


	zephir_update_property_zval(this_ptr, SL("buffer"), &buffer);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, offset);
	zephir_update_property_zval(this_ptr, SL("offset"), &_0);
	ZEPHIR_MM_RESTORE();

}

/**
 * @param int|bool $len
 *
 * @return string
 *
 * @throws BinaryDataException if there are not enough bytes left in the buffer
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, get) {

	zval str;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *len, len_sub, remaining, buflen, _0, _4, _1$$4, _2$$4, _3$$5, _5$$7, _6$$7, _7$$7, _8$$7, _9$$8, _10$$8, _11$$8;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&len_sub);
	ZVAL_UNDEF(&remaining);
	ZVAL_UNDEF(&buflen);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_5$$7);
	ZVAL_UNDEF(&_6$$7);
	ZVAL_UNDEF(&_7$$7);
	ZVAL_UNDEF(&_8$$7);
	ZVAL_UNDEF(&_9$$8);
	ZVAL_UNDEF(&_10$$8);
	ZVAL_UNDEF(&_11$$8);
	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &len);



	if (ZEPHIR_IS_LONG_IDENTICAL(len, 0)) {
		RETURN_MM_STRING("");
	}
	zephir_read_property(&_0, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&buflen);
	ZVAL_LONG(&buflen, zephir_fast_strlen_ev(&_0));
	if (ZEPHIR_IS_TRUE_IDENTICAL(len)) {
		zephir_read_property(&_1$$4, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_2$$4, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&str);
		zephir_substr(&str, &_1$$4, zephir_get_intval(&_2$$4), 0, ZEPHIR_SUBSTR_NO_LENGTH);
		zephir_update_property_zval(this_ptr, SL("offset"), &buflen);
		RETURN_CTOR(&str);
	}
	if (ZEPHIR_LT_LONG(len, 0)) {
		ZEPHIR_INIT_ZVAL_NREF(_3$$5);
		ZVAL_LONG(&_3$$5, (zephir_get_numberval(&buflen) - 1));
		zephir_update_property_zval(this_ptr, SL("offset"), &_3$$5);
		RETURN_MM_STRING("");
	}
	zephir_read_property(&_4, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&remaining);
	zephir_sub_function(&remaining, &buflen, &_4);
	if (ZEPHIR_LT(&remaining, len)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "Not enough bytes left in buffer: need {len}, have {remaining}", "pocketmine/utils/binarystream.zep", 88);
		return;
	}
	RETURN_ON_FAILURE(zephir_property_incr(this_ptr, SL("offset") TSRMLS_CC));
	if (ZEPHIR_IS_LONG_IDENTICAL(len, 1)) {
		zephir_read_property(&_5$$7, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_6$$7, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_7$$7, (zephir_get_numberval(&_6$$7) - 1));
		ZVAL_LONG(&_8$$7, 1);
		zephir_substr(return_value, &_5$$7, zephir_get_intval(&_7$$7), 1 , 0);
		RETURN_MM();
	} else {
		zephir_update_property_zval(this_ptr, SL("offset"), len);
		zephir_read_property(&_9$$8, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_10$$8, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_SINIT_VAR(_11$$8);
		zephir_sub_function(&_11$$8, &_10$$8, len);
		ZVAL_LONG(&_10$$8, (zephir_get_numberval(&_11$$8) - 1));
		zephir_substr(return_value, &_9$$8, zephir_get_intval(&_10$$8), zephir_get_intval(len), 0);
		RETURN_MM();
	}
	ZEPHIR_MM_RESTORE();

}

/**
 * @return string
 * @throws BinaryDataException
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getRemaining) {

	zval str, _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&str);
	zephir_substr(&str, &_0, zephir_get_intval(&_1), 0, ZEPHIR_SUBSTR_NO_LENGTH);
	if (ZEPHIR_IS_FALSE_IDENTICAL(&str)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(pocketmine_utils_binarydataexception_ce, "No bytes left to read", "pocketmine/utils/binarystream.zep", 109);
		return;
	}
	zephir_read_property(&_2, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_ZVAL_NREF(_3);
	ZVAL_LONG(&_3, zephir_fast_strlen_ev(&_2));
	zephir_update_property_zval(this_ptr, SL("offset"), &_3);
	RETURN_CCTOR(&str);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, put) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	zephir_update_property_zval(this_ptr, SL("buffer"), &str);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getBool) {

	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 1);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(!ZEPHIR_IS_STRING_IDENTICAL(&_0, "\0"));

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putBool) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0;
	zend_bool v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_boolval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	if (v) {
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_STRING(&_0, "\1");
	} else {
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_STRING(&_0, "\0");
	}
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getByte) {

	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 1);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_FUNCTION("ord", NULL, 18, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putByte) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_0, v);
	ZEPHIR_CALL_FUNCTION(&_1, "chr", NULL, 19, &_0);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_1);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getShort) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 2);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "n");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 142 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getSignedShort) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 2);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "n");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 147 TSRMLS_CC);
	RETURN_MM_LONG((((int) (zephir_get_numberval(&_4)) << 48) >> 48));

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getLShort) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 2);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "v");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 157 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getSignedLShort) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 2);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "v");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 162 TSRMLS_CC);
	RETURN_MM_LONG((((int) (zephir_get_numberval(&_4)) << 48) >> 48));

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putLShort) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "v");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getTriad) {

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

	ZVAL_LONG(&_1, 3);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SV(&_2, "\\0", &_0);
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "N");
	ZEPHIR_CALL_FUNCTION(&_4, "unpack", NULL, 20, &_3, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_5, &_4, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 172 TSRMLS_CC);
	RETURN_CTOR(&_5);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 1);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_substr(&_0, &_2, 1 , 0, ZEPHIR_SUBSTR_NO_LENGTH);
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getLTriad) {

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

	ZVAL_LONG(&_1, 3);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VS(&_2, &_0, "\\0");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "V");
	ZEPHIR_CALL_FUNCTION(&_4, "unpack", NULL, 20, &_3, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_5, &_4, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 182 TSRMLS_CC);
	RETURN_CTOR(&_5);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putLTriad) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2, _3;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_3, -1);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_substr(&_0, &_2, 0 , -1 , 0);
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getInt) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "N");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 192 TSRMLS_CC);
	RETURN_MM_LONG((((int) (zephir_get_numberval(&_4)) << 32) >> 32));

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getLInt) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "V");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 202 TSRMLS_CC);
	RETURN_MM_LONG((((int) (zephir_get_numberval(&_4)) << 32) >> 32));

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putLInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "V");
	ZVAL_LONG(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getFloat) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "G");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 212 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getRoundedFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *accuracy_param = NULL, _0, _1, _2, _3, _4;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &accuracy_param);

	accuracy = zephir_get_intval(accuracy_param);


	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "G");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 217 TSRMLS_CC);
	ZVAL_LONG(&_1, accuracy);
	ZEPHIR_RETURN_CALL_FUNCTION("\round", NULL, 24, &_4, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v_param = NULL, _0, _1, _2;
	double v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_doubleval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "G");
	ZVAL_DOUBLE(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getLFloat) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "g");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 227 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getRoundedLFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *accuracy_param = NULL, _0, _1, _2, _3, _4;
	zend_long accuracy, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &accuracy_param);

	accuracy = zephir_get_intval(accuracy_param);


	ZVAL_LONG(&_1, 4);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "g");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 232 TSRMLS_CC);
	ZVAL_LONG(&_1, accuracy);
	ZEPHIR_RETURN_CALL_FUNCTION("\round", NULL, 24, &_4, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putLFloat) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v_param = NULL, _0, _1, _2;
	double v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_doubleval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "g");
	ZVAL_DOUBLE(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getDouble) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 8);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "E");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 242 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v_param = NULL, _0, _1, _2;
	double v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_doubleval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "E");
	ZVAL_DOUBLE(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, getLDouble) {

	zval _0, _1, _2, _3, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_1, 8);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "e");
	ZEPHIR_CALL_FUNCTION(&_3, "unpack", NULL, 20, &_2, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &_3, 1, PH_NOISY | PH_READONLY, "pocketmine/utils/binarystream.zep", 252 TSRMLS_CC);
	RETURN_CTOR(&_4);

}

PHP_METHOD(Pocketmine_Utils_BinaryStream, putLDouble) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v_param = NULL, _0, _1, _2;
	double v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_doubleval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "e");
	ZVAL_DOUBLE(&_1, v);
	ZEPHIR_CALL_FUNCTION(&_2, "pack", NULL, 21, &_0, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_2);
	ZEPHIR_MM_RESTORE();

}

/**
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLong) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_2, 8);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "get", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readlong", &_0, 0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $v
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2, _3;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "NN");
	ZVAL_LONG(&_1, (v >> 32));
	ZVAL_LONG(&_2, (v & 0xffffffff));
	ZEPHIR_CALL_FUNCTION(&_3, "pack", NULL, 21, &_0, &_1, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_3);
	ZEPHIR_MM_RESTORE();

}

/**
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLLong) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_2, 8);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "get", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readllong", &_0, 0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * @param int $v
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, _0, _1, _2, _3;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "VV");
	ZVAL_LONG(&_1, (v & 0xffffffff));
	ZVAL_LONG(&_2, (v >> 32));
	ZEPHIR_CALL_FUNCTION(&_3, "pack", NULL, 21, &_0, &_1, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_3);
	ZEPHIR_MM_RESTORE();

}

/**
 * Reads a 32-bit variable-length unsigned integer from the buffer and returns it.
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getUnsignedVarInt) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_1, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readunsignedvarint", &_0, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 32-bit variable-length unsigned integer to the end of the buffer.
 * @param int $v
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putUnsignedVarInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *v_param = NULL, _0, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_2, v);
	ZEPHIR_CALL_CE_STATIC(&_0, pocketmine_utils_binary_ce, "writeunsignedvarint", &_1, 0, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

/**
 * Reads a 32-bit zigzag-encoded variable-length integer from the buffer and returns it.
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getVarInt) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_1, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readvarint", &_0, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 32-bit zigzag-encoded variable-length integer to the end of the buffer.
 * @param int $v
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putVarInt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *v_param = NULL, _0, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_2, v);
	ZEPHIR_CALL_CE_STATIC(&_0, pocketmine_utils_binary_ce, "writevarint", &_1, 0, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

/**
 * Reads a 64-bit variable-length integer from the buffer and returns it.
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getUnsignedVarLong) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_1, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readunsignedvarlong", &_0, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 64-bit variable-length integer to the end of the buffer.
 * @param int $v
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putUnsignedVarLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *v_param = NULL, _0, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_2, v);
	ZEPHIR_CALL_CE_STATIC(&_0, pocketmine_utils_binary_ce, "writeunsignedvarlong", &_1, 0, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

/**
 * Reads a 64-bit zigzag-encoded variable-length integer from the buffer and returns it.
 * @return int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, getVarLong) {

	zval _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_1, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_2, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_CE_STATIC(pocketmine_utils_binary_ce, "readvarlong", &_0, 0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Writes a 64-bit zigzag-encoded variable-length integer to the end of the buffer.
 * @param int
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, putVarLong) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *v_param = NULL, _0, _2;
	zend_long v, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v_param);

	v = zephir_get_intval(v_param);


	ZVAL_LONG(&_2, v);
	ZEPHIR_CALL_CE_STATIC(&_0, pocketmine_utils_binary_ce, "writevarlong", &_1, 0, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("buffer"), &_0);
	ZEPHIR_MM_RESTORE();

}

/**
 * Returns whether the offset has reached the end of the buffer.
 * @return bool
 */
PHP_METHOD(Pocketmine_Utils_BinaryStream, feof) {

	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	zephir_read_property(&_0, this_ptr, SL("buffer"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("offset"), PH_NOISY_CC | PH_READONLY);
	RETURN_BOOL(!(zephir_array_isset(&_0, &_1)));

}

