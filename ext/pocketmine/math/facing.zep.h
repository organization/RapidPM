
extern zend_class_entry *pocketmine_math_facing_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_Facing);

PHP_METHOD(Pocketmine_Math_Facing, axis);
PHP_METHOD(Pocketmine_Math_Facing, isPositive);
PHP_METHOD(Pocketmine_Math_Facing, opposite);
PHP_METHOD(Pocketmine_Math_Facing, rotate);
PHP_METHOD(Pocketmine_Math_Facing, rotateY);
PHP_METHOD(Pocketmine_Math_Facing, rotateZ);
PHP_METHOD(Pocketmine_Math_Facing, rotateX);
PHP_METHOD(Pocketmine_Math_Facing, validate);
void zephir_init_static_properties_Pocketmine_Math_Facing(TSRMLS_D);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_axis, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_axis, 0, 1, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_ispositive, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_ispositive, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_opposite, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_opposite, 0, 1, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotate, 0, 3, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotate, 0, 3, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, clockwise, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, clockwise)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatey, 0, 2, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatey, 0, 2, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, clockwise, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, clockwise)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatez, 0, 2, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatez, 0, 2, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, clockwise, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, clockwise)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatex, 0, 2, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_rotatex, 0, 2, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, direction)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, clockwise, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, clockwise)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_validate, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_facing_validate, 0, 1, IS_VOID, NULL, 0)
#endif
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_facing_validate, 0, 0, 1)
#define arginfo_pocketmine_math_facing_validate NULL
#endif

#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, facing, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, facing)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_facing_method_entry) {
	PHP_ME(Pocketmine_Math_Facing, axis, arginfo_pocketmine_math_facing_axis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, isPositive, arginfo_pocketmine_math_facing_ispositive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, opposite, arginfo_pocketmine_math_facing_opposite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, rotate, arginfo_pocketmine_math_facing_rotate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, rotateY, arginfo_pocketmine_math_facing_rotatey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, rotateZ, arginfo_pocketmine_math_facing_rotatez, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, rotateX, arginfo_pocketmine_math_facing_rotatex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Facing, validate, arginfo_pocketmine_math_facing_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
