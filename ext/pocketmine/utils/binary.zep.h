
extern zend_class_entry *pocketmine_utils_binary_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Utils_Binary);

PHP_METHOD(Pocketmine_Utils_Binary, signByte);
PHP_METHOD(Pocketmine_Utils_Binary, unsignByte);
PHP_METHOD(Pocketmine_Utils_Binary, signShort);
PHP_METHOD(Pocketmine_Utils_Binary, unsignShort);
PHP_METHOD(Pocketmine_Utils_Binary, signInt);
PHP_METHOD(Pocketmine_Utils_Binary, unsignInt);
PHP_METHOD(Pocketmine_Utils_Binary, flipShortEndianness);
PHP_METHOD(Pocketmine_Utils_Binary, flipIntEndianness);
PHP_METHOD(Pocketmine_Utils_Binary, flipLongEndianness);
PHP_METHOD(Pocketmine_Utils_Binary, readBool);
PHP_METHOD(Pocketmine_Utils_Binary, writeBool);
PHP_METHOD(Pocketmine_Utils_Binary, readByte);
PHP_METHOD(Pocketmine_Utils_Binary, readSignedByte);
PHP_METHOD(Pocketmine_Utils_Binary, writeByte);
PHP_METHOD(Pocketmine_Utils_Binary, readShort);
PHP_METHOD(Pocketmine_Utils_Binary, readSignedShort);
PHP_METHOD(Pocketmine_Utils_Binary, writeShort);
PHP_METHOD(Pocketmine_Utils_Binary, readLShort);
PHP_METHOD(Pocketmine_Utils_Binary, readSignedLShort);
PHP_METHOD(Pocketmine_Utils_Binary, writeLShort);
PHP_METHOD(Pocketmine_Utils_Binary, readTriad);
PHP_METHOD(Pocketmine_Utils_Binary, writeTriad);
PHP_METHOD(Pocketmine_Utils_Binary, readLTriad);
PHP_METHOD(Pocketmine_Utils_Binary, writeLTriad);
PHP_METHOD(Pocketmine_Utils_Binary, readInt);
PHP_METHOD(Pocketmine_Utils_Binary, writeInt);
PHP_METHOD(Pocketmine_Utils_Binary, readLInt);
PHP_METHOD(Pocketmine_Utils_Binary, writeLInt);
PHP_METHOD(Pocketmine_Utils_Binary, readFloat);
PHP_METHOD(Pocketmine_Utils_Binary, readRoundedFloat);
PHP_METHOD(Pocketmine_Utils_Binary, writeFloat);
PHP_METHOD(Pocketmine_Utils_Binary, readLFloat);
PHP_METHOD(Pocketmine_Utils_Binary, readRoundedLFloat);
PHP_METHOD(Pocketmine_Utils_Binary, writeLFloat);
PHP_METHOD(Pocketmine_Utils_Binary, printFloat);
PHP_METHOD(Pocketmine_Utils_Binary, readDouble);
PHP_METHOD(Pocketmine_Utils_Binary, writeDouble);
PHP_METHOD(Pocketmine_Utils_Binary, readLDouble);
PHP_METHOD(Pocketmine_Utils_Binary, writeLDouble);
PHP_METHOD(Pocketmine_Utils_Binary, readLong);
PHP_METHOD(Pocketmine_Utils_Binary, writeLong);
PHP_METHOD(Pocketmine_Utils_Binary, readLLong);
PHP_METHOD(Pocketmine_Utils_Binary, writeLLong);
PHP_METHOD(Pocketmine_Utils_Binary, readVarInt);
PHP_METHOD(Pocketmine_Utils_Binary, readUnsignedVarInt);
PHP_METHOD(Pocketmine_Utils_Binary, writeVarInt);
PHP_METHOD(Pocketmine_Utils_Binary, writeUnsignedVarInt);
PHP_METHOD(Pocketmine_Utils_Binary, readVarLong);
PHP_METHOD(Pocketmine_Utils_Binary, readUnsignedVarLong);
PHP_METHOD(Pocketmine_Utils_Binary, writeVarLong);
PHP_METHOD(Pocketmine_Utils_Binary, writeUnsignedVarLong);
void zep_Pocketmine_Utils_Binary_signByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_unsignByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_signShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_unsignShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_signInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_unsignInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_flipShortEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_flipIntEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_flipLongEndianness_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readBool_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *b_param_ext);
void zep_Pocketmine_Utils_Binary_writeBool_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *b_param_ext);
void zep_Pocketmine_Utils_Binary_readByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext);
void zep_Pocketmine_Utils_Binary_readSignedByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext);
void zep_Pocketmine_Utils_Binary_writeByte_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *c_param_ext);
void zep_Pocketmine_Utils_Binary_readShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_readSignedShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_readSignedLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLShort_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLTriad_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_readRoundedFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext, zval *accuracy_param_ext);
void zep_Pocketmine_Utils_Binary_writeFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_readRoundedLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext, zval *accuracy_param_ext);
void zep_Pocketmine_Utils_Binary_writeLFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_printFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLDouble_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readLLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *str_param_ext);
void zep_Pocketmine_Utils_Binary_writeLLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_param_ext, zval *offset_ext );
void zep_Pocketmine_Utils_Binary_readUnsignedVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_ext , zval *offset_ext );
void zep_Pocketmine_Utils_Binary_writeVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_param_ext);
void zep_Pocketmine_Utils_Binary_writeUnsignedVarInt_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);
void zep_Pocketmine_Utils_Binary_readVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_param_ext, zval *offset_ext );
void zep_Pocketmine_Utils_Binary_readUnsignedVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *buffer_ext , zval *offset_ext );
void zep_Pocketmine_Utils_Binary_writeVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *v_param_ext);
void zep_Pocketmine_Utils_Binary_writeUnsignedVarLong_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *value_param_ext);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_signbyte, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_unsignbyte, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_signshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_unsignshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_signint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_unsignint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_flipshortendianness, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_flipintendianness, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_fliplongendianness, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writebool, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readbyte, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readsignedbyte, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writebyte, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readsignedshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeshort, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readlshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readsignedlshort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writelshort, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readtriad, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writetriad, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readltriad, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeltriad, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readlint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writelint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readfloat, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readroundedfloat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writefloat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readlfloat, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readroundedlfloat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writelfloat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_printfloat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readdouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writedouble, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readldouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeldouble, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readlong, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writelong, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readllong, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writellong, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readvarint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readunsignedvarint, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, buffer)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writevarint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeunsignedvarint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readvarlong, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_readunsignedvarlong, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, buffer)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writevarlong, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binary_writeunsignedvarlong, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_signbyte_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_unsignbyte_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_signshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_unsignshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_signint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_unsignint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_flipshortendianness_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_flipintendianness_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_fliplongendianness_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readbool_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, b, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writebool_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readbyte_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readsignedbyte_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writebyte_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readsignedshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readlshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readsignedlshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writelshort_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readtriad_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writetriad_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readltriad_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeltriad_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readlint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writelint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readroundedfloat_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writefloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readlfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readroundedlfloat_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writelfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_printfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readdouble_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writedouble_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readldouble_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeldouble_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readlong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writelong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readllong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writellong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readvarint_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readunsignedvarint_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, buffer)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writevarint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeunsignedvarint_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readvarlong_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_readunsignedvarlong_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, buffer)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writevarlong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binary_writeunsignedvarlong_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_utils_binary_method_entry) {
	PHP_ME(Pocketmine_Utils_Binary, signByte, arginfo_pocketmine_utils_binary_signbyte, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, unsignByte, arginfo_pocketmine_utils_binary_unsignbyte, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, signShort, arginfo_pocketmine_utils_binary_signshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, unsignShort, arginfo_pocketmine_utils_binary_unsignshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, signInt, arginfo_pocketmine_utils_binary_signint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, unsignInt, arginfo_pocketmine_utils_binary_unsignint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, flipShortEndianness, arginfo_pocketmine_utils_binary_flipshortendianness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, flipIntEndianness, arginfo_pocketmine_utils_binary_flipintendianness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, flipLongEndianness, arginfo_pocketmine_utils_binary_fliplongendianness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readBool, arginfo_pocketmine_utils_binary_readbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeBool, arginfo_pocketmine_utils_binary_writebool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readByte, arginfo_pocketmine_utils_binary_readbyte, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readSignedByte, arginfo_pocketmine_utils_binary_readsignedbyte, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeByte, arginfo_pocketmine_utils_binary_writebyte, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readShort, arginfo_pocketmine_utils_binary_readshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readSignedShort, arginfo_pocketmine_utils_binary_readsignedshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeShort, arginfo_pocketmine_utils_binary_writeshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLShort, arginfo_pocketmine_utils_binary_readlshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readSignedLShort, arginfo_pocketmine_utils_binary_readsignedlshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLShort, arginfo_pocketmine_utils_binary_writelshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readTriad, arginfo_pocketmine_utils_binary_readtriad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeTriad, arginfo_pocketmine_utils_binary_writetriad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLTriad, arginfo_pocketmine_utils_binary_readltriad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLTriad, arginfo_pocketmine_utils_binary_writeltriad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readInt, arginfo_pocketmine_utils_binary_readint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeInt, arginfo_pocketmine_utils_binary_writeint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLInt, arginfo_pocketmine_utils_binary_readlint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLInt, arginfo_pocketmine_utils_binary_writelint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readFloat, arginfo_pocketmine_utils_binary_readfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readRoundedFloat, arginfo_pocketmine_utils_binary_readroundedfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeFloat, arginfo_pocketmine_utils_binary_writefloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLFloat, arginfo_pocketmine_utils_binary_readlfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readRoundedLFloat, arginfo_pocketmine_utils_binary_readroundedlfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLFloat, arginfo_pocketmine_utils_binary_writelfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, printFloat, arginfo_pocketmine_utils_binary_printfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readDouble, arginfo_pocketmine_utils_binary_readdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeDouble, arginfo_pocketmine_utils_binary_writedouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLDouble, arginfo_pocketmine_utils_binary_readldouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLDouble, arginfo_pocketmine_utils_binary_writeldouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLong, arginfo_pocketmine_utils_binary_readlong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLong, arginfo_pocketmine_utils_binary_writelong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readLLong, arginfo_pocketmine_utils_binary_readllong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeLLong, arginfo_pocketmine_utils_binary_writellong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readVarInt, arginfo_pocketmine_utils_binary_readvarint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readUnsignedVarInt, arginfo_pocketmine_utils_binary_readunsignedvarint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeVarInt, arginfo_pocketmine_utils_binary_writevarint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeUnsignedVarInt, arginfo_pocketmine_utils_binary_writeunsignedvarint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readVarLong, arginfo_pocketmine_utils_binary_readvarlong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, readUnsignedVarLong, arginfo_pocketmine_utils_binary_readunsignedvarlong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeVarLong, arginfo_pocketmine_utils_binary_writevarlong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Utils_Binary, writeUnsignedVarLong, arginfo_pocketmine_utils_binary_writeunsignedvarlong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
