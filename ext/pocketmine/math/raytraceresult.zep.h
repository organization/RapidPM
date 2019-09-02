
extern zend_class_entry *pocketmine_math_raytraceresult_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_RayTraceResult);

PHP_METHOD(Pocketmine_Math_RayTraceResult, __construct);
PHP_METHOD(Pocketmine_Math_RayTraceResult, getBoundingBox);
PHP_METHOD(Pocketmine_Math_RayTraceResult, getHitFace);
PHP_METHOD(Pocketmine_Math_RayTraceResult, getHitVector);
void zep_Pocketmine_Math_RayTraceResult_getBoundingBox_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_RayTraceResult_getHitFace_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_RayTraceResult_getHitVector_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_raytraceresult___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, hitFace, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, hitFace)
#endif
	ZEND_ARG_OBJ_INFO(0, hitVector, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_raytraceresult_getboundingbox, 0, 0, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_raytraceresult_getboundingbox, 0, 0, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_raytraceresult_gethitface, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_raytraceresult_gethitface, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_raytraceresult_gethitvector, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_raytraceresult_gethitvector, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_raytraceresult_method_entry) {
	PHP_ME(Pocketmine_Math_RayTraceResult, __construct, arginfo_pocketmine_math_raytraceresult___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Math_RayTraceResult, getBoundingBox, arginfo_pocketmine_math_raytraceresult_getboundingbox, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_RayTraceResult, getHitFace, arginfo_pocketmine_math_raytraceresult_gethitface, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_RayTraceResult, getHitVector, arginfo_pocketmine_math_raytraceresult_gethitvector, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
