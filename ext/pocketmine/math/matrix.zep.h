
extern zend_class_entry *pocketmine_math_matrix_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_Matrix);

PHP_METHOD(Pocketmine_Math_Matrix, getRows);
PHP_METHOD(Pocketmine_Math_Matrix, getColumns);
PHP_METHOD(Pocketmine_Math_Matrix, offsetExists);
PHP_METHOD(Pocketmine_Math_Matrix, offsetGet);
PHP_METHOD(Pocketmine_Math_Matrix, offsetSet);
PHP_METHOD(Pocketmine_Math_Matrix, offsetUnset);
PHP_METHOD(Pocketmine_Math_Matrix, __construct);
PHP_METHOD(Pocketmine_Math_Matrix, set);
PHP_METHOD(Pocketmine_Math_Matrix, setElement);
PHP_METHOD(Pocketmine_Math_Matrix, getElement);
PHP_METHOD(Pocketmine_Math_Matrix, isSquare);
PHP_METHOD(Pocketmine_Math_Matrix, add);
PHP_METHOD(Pocketmine_Math_Matrix, subtract);
PHP_METHOD(Pocketmine_Math_Matrix, multiplyScalar);
PHP_METHOD(Pocketmine_Math_Matrix, divideScalar);
PHP_METHOD(Pocketmine_Math_Matrix, transpose);
PHP_METHOD(Pocketmine_Math_Matrix, product);
PHP_METHOD(Pocketmine_Math_Matrix, determinant);
PHP_METHOD(Pocketmine_Math_Matrix, __toString);
void zep_Pocketmine_Math_Matrix_getRows_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Matrix_getColumns_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Matrix_offsetExists_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext );
void zep_Pocketmine_Math_Matrix_offsetGet_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext );
void zep_Pocketmine_Math_Matrix_offsetSet_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext , zval *value_ext );
void zep_Pocketmine_Math_Matrix_offsetUnset_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *offset_ext );
void zep_Pocketmine_Math_Matrix_set_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *m_param_ext);
void zep_Pocketmine_Math_Matrix_setElement_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *row_ext , zval *column_ext , zval *value_ext );
void zep_Pocketmine_Math_Matrix_getElement_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *row_ext , zval *column_ext );
void zep_Pocketmine_Math_Matrix_isSquare_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Matrix_add_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext );
void zep_Pocketmine_Math_Matrix_subtract_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext );
void zep_Pocketmine_Math_Matrix_multiplyScalar_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *number_ext );
void zep_Pocketmine_Math_Matrix_divideScalar_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *number_ext );
void zep_Pocketmine_Math_Matrix_transpose_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Matrix_product_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *matrix_ext );
void zep_Pocketmine_Math_Matrix_determinant_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Matrix___toString_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
zend_object *zephir_init_properties_Pocketmine_Math_Matrix(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetexists, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetget, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetset, 0, 0, 2)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetunset, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, rows)
	ZEND_ARG_INFO(0, columns)
	ZEND_ARG_ARRAY_INFO(0, set, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_set, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, m, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_setelement, 0, 0, 3)
	ZEND_ARG_INFO(0, row)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_getelement, 0, 0, 2)
	ZEND_ARG_INFO(0, row)
	ZEND_ARG_INFO(0, column)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_add, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_subtract, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_multiplyscalar, 0, 0, 1)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_dividescalar, 0, 0, 1)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_product, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetexists_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetget_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetset_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_offsetunset_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_set_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, m, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_setelement_zephir_internal_call, 0, 0, 3)
	ZEND_ARG_INFO(0, row)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_getelement_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, row)
	ZEND_ARG_INFO(0, column)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_add_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_subtract_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_multiplyscalar_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_dividescalar_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_matrix_product_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, matrix, Pocketmine\\Math\\Matrix, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_matrix_method_entry) {
	PHP_ME(Pocketmine_Math_Matrix, getRows, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, getColumns, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, offsetExists, arginfo_pocketmine_math_matrix_offsetexists, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, offsetGet, arginfo_pocketmine_math_matrix_offsetget, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, offsetSet, arginfo_pocketmine_math_matrix_offsetset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, offsetUnset, arginfo_pocketmine_math_matrix_offsetunset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, __construct, arginfo_pocketmine_math_matrix___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Math_Matrix, set, arginfo_pocketmine_math_matrix_set, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, setElement, arginfo_pocketmine_math_matrix_setelement, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, getElement, arginfo_pocketmine_math_matrix_getelement, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, isSquare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, add, arginfo_pocketmine_math_matrix_add, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, subtract, arginfo_pocketmine_math_matrix_subtract, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, multiplyScalar, arginfo_pocketmine_math_matrix_multiplyscalar, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, divideScalar, arginfo_pocketmine_math_matrix_dividescalar, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, transpose, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, product, arginfo_pocketmine_math_matrix_product, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, determinant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Matrix, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
