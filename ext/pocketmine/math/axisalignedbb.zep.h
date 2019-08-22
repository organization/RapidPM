
extern zend_class_entry *pocketmine_math_axisalignedbb_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_AxisAlignedBB);

PHP_METHOD(Pocketmine_Math_AxisAlignedBB, __construct);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, setBounds);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, setBB);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, addCoord);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, expand);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, expandedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, offset);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, offsetCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, contract);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, contractedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, extend);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, extendedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, trim);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, trimmedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, stretch);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, stretchedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, squash);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, squashedCopy);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateXOffset);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateYOffset);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateZOffset);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, intersectsWith);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInside);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, getAverageEdgeLength);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, getVolume);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInYZ);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInXZ);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, isVectorInXY);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, calculateIntercept);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, __toString);
PHP_METHOD(Pocketmine_Math_AxisAlignedBB, one);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_axisalignedbb___construct, 0, 0, 6)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minX, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minX)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minY, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minY)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minZ, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minZ)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxX, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxX)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxY, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxY)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxZ, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxZ)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_axisalignedbb_setbounds, 0, 0, 6)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minX, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minX)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minY, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minY)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, minZ, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, minZ)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxX, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxX)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxY, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxY)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, maxZ, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, maxZ)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_setbb, 0, 1, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_setbb, 0, 1, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_addcoord, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_addcoord, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_expand, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_expand, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_expandedcopy, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_expandedcopy, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_offset, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_offset, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_offsetcopy, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_offsetcopy, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_contract, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_contract, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_contractedcopy, 0, 3, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_contractedcopy, 0, 3, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
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
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_extend, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_extend, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, face, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, face)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_extendedcopy, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_extendedcopy, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, face, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, face)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_trim, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_trim, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, face, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, face)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_trimmedcopy, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_trimmedcopy, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, face, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, face)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_stretch, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_stretch, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_stretchedcopy, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_stretchedcopy, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_squash, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_squash, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_squashedcopy, 0, 2, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_squashedcopy, 0, 2, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, axis)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, distance)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculatexoffset, 0, 2, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculatexoffset, 0, 2, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, x)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculateyoffset, 0, 2, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculateyoffset, 0, 2, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, y)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculatezoffset, 0, 2, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculatezoffset, 0, 2, IS_DOUBLE, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, z)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_intersectswith, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_intersectswith, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, bb, Pocketmine\\Math\\AxisAlignedBB, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, epsilon, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, epsilon)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinside, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinside, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, vector, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_getaverageedgelength, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_getaverageedgelength, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_getvolume, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_getvolume, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinyz, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinyz, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, vector, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinxz, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinxz, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, vector, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinxy, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_isvectorinxy, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, vector, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculateintercept, 0, 2, Pocketmine\\Math\\RayTraceResult, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_calculateintercept, 0, 2, IS_OBJECT, "Pocketmine\\Math\\RayTraceResult", 1)
#endif
	ZEND_ARG_OBJ_INFO(0, pos1, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_OBJ_INFO(0, pos2, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_axisalignedbb_one, 0, 0, Pocketmine\\Math\\AxisAlignedBB, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_axisalignedbb_one, 0, 0, IS_OBJECT, "Pocketmine\\Math\\AxisAlignedBB", 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_axisalignedbb_method_entry) {
	PHP_ME(Pocketmine_Math_AxisAlignedBB, __construct, arginfo_pocketmine_math_axisalignedbb___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, setBounds, arginfo_pocketmine_math_axisalignedbb_setbounds, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, setBB, arginfo_pocketmine_math_axisalignedbb_setbb, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, addCoord, arginfo_pocketmine_math_axisalignedbb_addcoord, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, expand, arginfo_pocketmine_math_axisalignedbb_expand, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, expandedCopy, arginfo_pocketmine_math_axisalignedbb_expandedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, offset, arginfo_pocketmine_math_axisalignedbb_offset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, offsetCopy, arginfo_pocketmine_math_axisalignedbb_offsetcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, contract, arginfo_pocketmine_math_axisalignedbb_contract, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, contractedCopy, arginfo_pocketmine_math_axisalignedbb_contractedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, extend, arginfo_pocketmine_math_axisalignedbb_extend, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, extendedCopy, arginfo_pocketmine_math_axisalignedbb_extendedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, trim, arginfo_pocketmine_math_axisalignedbb_trim, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, trimmedCopy, arginfo_pocketmine_math_axisalignedbb_trimmedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, stretch, arginfo_pocketmine_math_axisalignedbb_stretch, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, stretchedCopy, arginfo_pocketmine_math_axisalignedbb_stretchedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, squash, arginfo_pocketmine_math_axisalignedbb_squash, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, squashedCopy, arginfo_pocketmine_math_axisalignedbb_squashedcopy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, calculateXOffset, arginfo_pocketmine_math_axisalignedbb_calculatexoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, calculateYOffset, arginfo_pocketmine_math_axisalignedbb_calculateyoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, calculateZOffset, arginfo_pocketmine_math_axisalignedbb_calculatezoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, intersectsWith, arginfo_pocketmine_math_axisalignedbb_intersectswith, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, isVectorInside, arginfo_pocketmine_math_axisalignedbb_isvectorinside, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, getAverageEdgeLength, arginfo_pocketmine_math_axisalignedbb_getaverageedgelength, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, getVolume, arginfo_pocketmine_math_axisalignedbb_getvolume, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, isVectorInYZ, arginfo_pocketmine_math_axisalignedbb_isvectorinyz, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, isVectorInXZ, arginfo_pocketmine_math_axisalignedbb_isvectorinxz, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, isVectorInXY, arginfo_pocketmine_math_axisalignedbb_isvectorinxy, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, calculateIntercept, arginfo_pocketmine_math_axisalignedbb_calculateintercept, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Math_AxisAlignedBB, one, arginfo_pocketmine_math_axisalignedbb_one, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
