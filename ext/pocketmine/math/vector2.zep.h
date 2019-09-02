
extern zend_class_entry *pocketmine_math_vector2_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_Vector2);

PHP_METHOD(Pocketmine_Math_Vector2, getX);
PHP_METHOD(Pocketmine_Math_Vector2, getY);
PHP_METHOD(Pocketmine_Math_Vector2, __construct);
PHP_METHOD(Pocketmine_Math_Vector2, getFloorX);
PHP_METHOD(Pocketmine_Math_Vector2, getFloorY);
PHP_METHOD(Pocketmine_Math_Vector2, add);
PHP_METHOD(Pocketmine_Math_Vector2, subtract);
PHP_METHOD(Pocketmine_Math_Vector2, ceil);
PHP_METHOD(Pocketmine_Math_Vector2, floor);
PHP_METHOD(Pocketmine_Math_Vector2, round);
PHP_METHOD(Pocketmine_Math_Vector2, abs);
PHP_METHOD(Pocketmine_Math_Vector2, multiply);
PHP_METHOD(Pocketmine_Math_Vector2, divide);
PHP_METHOD(Pocketmine_Math_Vector2, distance);
PHP_METHOD(Pocketmine_Math_Vector2, distanceSquared);
PHP_METHOD(Pocketmine_Math_Vector2, length);
PHP_METHOD(Pocketmine_Math_Vector2, lengthSquared);
PHP_METHOD(Pocketmine_Math_Vector2, normalize);
PHP_METHOD(Pocketmine_Math_Vector2, dot);
PHP_METHOD(Pocketmine_Math_Vector2, __toString);
void zep_Pocketmine_Math_Vector2_getX_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_getY_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_getFloorX_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_getFloorY_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_ceil_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_floor_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_round_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_abs_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_multiply_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext);
void zep_Pocketmine_Math_Vector2_divide_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *number_param_ext);
void zep_Pocketmine_Math_Vector2_length_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_lengthSquared_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_normalize_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);
void zep_Pocketmine_Math_Vector2_dot_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *v_ext );
void zep_Pocketmine_Math_Vector2___toString_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector2___construct, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, x)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_getfloorx, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_getfloorx, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_getfloory, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_getfloory, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_add, 0, 1, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_add, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
	ZEND_ARG_INFO(0, x)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_subtract, 0, 1, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_subtract, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
	ZEND_ARG_INFO(0, x)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_ceil, 0, 0, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_ceil, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_floor, 0, 0, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_floor, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_round, 0, 0, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_round, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_abs, 0, 0, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_abs, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_multiply, 0, 1, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_multiply, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_divide, 0, 1, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_divide, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_distance, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_distance, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_INFO(0, x)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_distancesquared, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_distancesquared, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_INFO(0, x)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_length, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_length, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_lengthsquared, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_lengthsquared, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector2_normalize, 0, 0, Pocketmine\\Math\\Vector2, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_normalize, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector2", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_dot, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector2_dot, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector2, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector2_multiply_zephir_internal_call, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector2_divide_zephir_internal_call, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector2_dot_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector2, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_vector2_method_entry) {
	PHP_ME(Pocketmine_Math_Vector2, getX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, getY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, __construct, arginfo_pocketmine_math_vector2___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Math_Vector2, getFloorX, arginfo_pocketmine_math_vector2_getfloorx, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, getFloorY, arginfo_pocketmine_math_vector2_getfloory, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, add, arginfo_pocketmine_math_vector2_add, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, subtract, arginfo_pocketmine_math_vector2_subtract, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, ceil, arginfo_pocketmine_math_vector2_ceil, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, floor, arginfo_pocketmine_math_vector2_floor, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, round, arginfo_pocketmine_math_vector2_round, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, abs, arginfo_pocketmine_math_vector2_abs, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, multiply, arginfo_pocketmine_math_vector2_multiply, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, divide, arginfo_pocketmine_math_vector2_divide, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, distance, arginfo_pocketmine_math_vector2_distance, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, distanceSquared, arginfo_pocketmine_math_vector2_distancesquared, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, length, arginfo_pocketmine_math_vector2_length, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, lengthSquared, arginfo_pocketmine_math_vector2_lengthsquared, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, normalize, arginfo_pocketmine_math_vector2_normalize, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, dot, arginfo_pocketmine_math_vector2_dot, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector2, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
