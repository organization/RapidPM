
extern zend_class_entry *pocketmine_math_vectormath_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_VectorMath);

PHP_METHOD(Pocketmine_Math_VectorMath, getDirection2D);
void zep_Pocketmine_Math_VectorMath_getDirection2D_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *azimuth_param_ext);

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vectormath_getdirection2d, 0, 1, Pocketmine\\Math\\Vector2, 0)
	ZEND_ARG_TYPE_INFO(0, azimuth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vectormath_getdirection2d_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, azimuth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_vectormath_method_entry) {
	PHP_ME(Pocketmine_Math_VectorMath, getDirection2D, arginfo_pocketmine_math_vectormath_getdirection2d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
