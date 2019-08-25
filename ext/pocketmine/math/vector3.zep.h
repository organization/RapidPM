
extern zend_class_entry *pocketmine_math_vector3_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_Vector3);

PHP_METHOD(Pocketmine_Math_Vector3, getX);
PHP_METHOD(Pocketmine_Math_Vector3, getY);
PHP_METHOD(Pocketmine_Math_Vector3, getZ);
PHP_METHOD(Pocketmine_Math_Vector3, __construct);
PHP_METHOD(Pocketmine_Math_Vector3, getFloorX);
PHP_METHOD(Pocketmine_Math_Vector3, getFloorY);
PHP_METHOD(Pocketmine_Math_Vector3, getFloorZ);
PHP_METHOD(Pocketmine_Math_Vector3, add);
PHP_METHOD(Pocketmine_Math_Vector3, subtract);
PHP_METHOD(Pocketmine_Math_Vector3, multiply);
PHP_METHOD(Pocketmine_Math_Vector3, divide);
PHP_METHOD(Pocketmine_Math_Vector3, ceil);
PHP_METHOD(Pocketmine_Math_Vector3, floor);
PHP_METHOD(Pocketmine_Math_Vector3, round);
PHP_METHOD(Pocketmine_Math_Vector3, abs);
PHP_METHOD(Pocketmine_Math_Vector3, getSide);
PHP_METHOD(Pocketmine_Math_Vector3, down);
PHP_METHOD(Pocketmine_Math_Vector3, up);
PHP_METHOD(Pocketmine_Math_Vector3, north);
PHP_METHOD(Pocketmine_Math_Vector3, south);
PHP_METHOD(Pocketmine_Math_Vector3, west);
PHP_METHOD(Pocketmine_Math_Vector3, east);
PHP_METHOD(Pocketmine_Math_Vector3, sides);
PHP_METHOD(Pocketmine_Math_Vector3, sidesArray);
PHP_METHOD(Pocketmine_Math_Vector3, sidesAroundAxis);
PHP_METHOD(Pocketmine_Math_Vector3, asVector3);
PHP_METHOD(Pocketmine_Math_Vector3, distance);
PHP_METHOD(Pocketmine_Math_Vector3, distanceSquared);
PHP_METHOD(Pocketmine_Math_Vector3, maxPlainDistance);
PHP_METHOD(Pocketmine_Math_Vector3, length);
PHP_METHOD(Pocketmine_Math_Vector3, lengthSquared);
PHP_METHOD(Pocketmine_Math_Vector3, normalize);
PHP_METHOD(Pocketmine_Math_Vector3, dot);
PHP_METHOD(Pocketmine_Math_Vector3, cross);
PHP_METHOD(Pocketmine_Math_Vector3, equals);
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithXValue);
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithYValue);
PHP_METHOD(Pocketmine_Math_Vector3, getIntermediateWithZValue);
PHP_METHOD(Pocketmine_Math_Vector3, setComponents);
PHP_METHOD(Pocketmine_Math_Vector3, __toString);
PHP_METHOD(Pocketmine_Math_Vector3, maxComponents);
PHP_METHOD(Pocketmine_Math_Vector3, minComponents);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, z)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloorx, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloorx, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloory, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloory, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloorz, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getfloorz, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_add, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_add, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, z)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_subtract, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_subtract, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, z)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_multiply, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_multiply, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_divide, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_divide, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, number, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, number)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_ceil, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_ceil, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_floor, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_floor, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_round, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_round, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, precision)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, mode)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_abs, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_abs, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_getside, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, side, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, side)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_down, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_up, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_north, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_south, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_west, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_east, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_sides, 0, 0, Generator, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_sides, 0, 0, IS_OBJECT, "Generator", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_sidesarray, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_sidesarray, 0, 0, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, keys, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, keys)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_sidesaroundaxis, 0, 1, Generator, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_sidesaroundaxis, 0, 1, IS_OBJECT, "Generator", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, step)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_asvector3, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_asvector3, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_distance, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_distance, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, pos, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_distancesquared, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_distancesquared, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, pos, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_maxplaindistance, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_maxplaindistance, 0, 0, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, z)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_length, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_length, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_lengthsquared, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_lengthsquared, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_normalize, 0, 0, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_normalize, 0, 0, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_dot, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_dot, 0, 1, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_cross, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_cross, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_equals, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_equals, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithxvalue, 0, 2, Pocketmine\\Math\\Vector3, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithxvalue, 0, 2, IS_OBJECT, "Pocketmine\\Math\\Vector3", 1)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, x)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithyvalue, 0, 2, Pocketmine\\Math\\Vector3, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithyvalue, 0, 2, IS_OBJECT, "Pocketmine\\Math\\Vector3", 1)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithzvalue, 0, 2, Pocketmine\\Math\\Vector3, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_getintermediatewithzvalue, 0, 2, IS_OBJECT, "Pocketmine\\Math\\Vector3", 1)
#endif
	ZEND_ARG_OBJ_INFO(0, v, Pocketmine\\Math\\Vector3, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_vector3_setcomponents, 0, 0, 3)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, z)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_maxcomponents, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_maxcomponents, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, positions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_vector3_mincomponents, 0, 1, Pocketmine\\Math\\Vector3, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_vector3_mincomponents, 0, 1, IS_OBJECT, "Pocketmine\\Math\\Vector3", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, positions, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_vector3_method_entry) {
	PHP_ME(Pocketmine_Math_Vector3, getX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getZ, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, __construct, arginfo_pocketmine_math_vector3___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Math_Vector3, getFloorX, arginfo_pocketmine_math_vector3_getfloorx, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getFloorY, arginfo_pocketmine_math_vector3_getfloory, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getFloorZ, arginfo_pocketmine_math_vector3_getfloorz, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, add, arginfo_pocketmine_math_vector3_add, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, subtract, arginfo_pocketmine_math_vector3_subtract, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, multiply, arginfo_pocketmine_math_vector3_multiply, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, divide, arginfo_pocketmine_math_vector3_divide, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, ceil, arginfo_pocketmine_math_vector3_ceil, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, floor, arginfo_pocketmine_math_vector3_floor, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, round, arginfo_pocketmine_math_vector3_round, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, abs, arginfo_pocketmine_math_vector3_abs, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getSide, arginfo_pocketmine_math_vector3_getside, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, down, arginfo_pocketmine_math_vector3_down, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, up, arginfo_pocketmine_math_vector3_up, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, north, arginfo_pocketmine_math_vector3_north, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, south, arginfo_pocketmine_math_vector3_south, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, west, arginfo_pocketmine_math_vector3_west, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, east, arginfo_pocketmine_math_vector3_east, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, sides, arginfo_pocketmine_math_vector3_sides, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, sidesArray, arginfo_pocketmine_math_vector3_sidesarray, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, sidesAroundAxis, arginfo_pocketmine_math_vector3_sidesaroundaxis, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, asVector3, arginfo_pocketmine_math_vector3_asvector3, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, distance, arginfo_pocketmine_math_vector3_distance, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, distanceSquared, arginfo_pocketmine_math_vector3_distancesquared, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, maxPlainDistance, arginfo_pocketmine_math_vector3_maxplaindistance, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, length, arginfo_pocketmine_math_vector3_length, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, lengthSquared, arginfo_pocketmine_math_vector3_lengthsquared, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, normalize, arginfo_pocketmine_math_vector3_normalize, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, dot, arginfo_pocketmine_math_vector3_dot, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, cross, arginfo_pocketmine_math_vector3_cross, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, equals, arginfo_pocketmine_math_vector3_equals, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getIntermediateWithXValue, arginfo_pocketmine_math_vector3_getintermediatewithxvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getIntermediateWithYValue, arginfo_pocketmine_math_vector3_getintermediatewithyvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, getIntermediateWithZValue, arginfo_pocketmine_math_vector3_getintermediatewithzvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, setComponents, arginfo_pocketmine_math_vector3_setcomponents, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_Vector3, maxComponents, arginfo_pocketmine_math_vector3_maxcomponents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_Vector3, minComponents, arginfo_pocketmine_math_vector3_mincomponents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
