
extern zend_class_entry *pocketmine_math_math_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_Math);

PHP_METHOD(Pocketmine_Math_Math, floorFloat);
PHP_METHOD(Pocketmine_Math_Math, ceilFloat);
PHP_METHOD(Pocketmine_Math_Math, solveQuadratic);
void zep_Pocketmine_Math_Math_floorFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *n_ext );
void zep_Pocketmine_Math_Math_ceilFloat_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *n_ext );
void zep_Pocketmine_Math_Math_solveQuadratic_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *a_param_ext, zval *b_param_ext, zval *c_param_ext);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_floorfloat, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_floorfloat, 0, 1, IS_LONG, NULL, 0)
#endif
	ZEND_ARG_INFO(0, n)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_ceilfloat, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_ceilfloat, 0, 1, IS_LONG, NULL, 0)
#endif
	ZEND_ARG_INFO(0, n)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_solvequadratic, 0, 3, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_math_solvequadratic, 0, 3, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, a)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, b)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, c, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, c)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_math_floorfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, n)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_math_ceilfloat_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, n)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_math_solvequadratic_zephir_internal_call, 0, 0, 3)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, a)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, b)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, c, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, c)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_math_method_entry) {
	PHP_ME(Pocketmine_Math_Math, floorFloat, arginfo_pocketmine_math_math_floorfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Math, ceilFloat, arginfo_pocketmine_math_math_ceilfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Math, solveQuadratic, arginfo_pocketmine_math_math_solvequadratic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
