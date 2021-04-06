
extern zend_class_entry *pocketmine_math_voxelraytrace_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Math_VoxelRayTrace);

PHP_METHOD(Pocketmine_Math_VoxelRayTrace, inDirection);
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, spaceShip);
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, betweenPoints);
PHP_METHOD(Pocketmine_Math_VoxelRayTrace, rayTraceDistanceToBoundary);
void zep_Pocketmine_Math_VoxelRayTrace_inDirection_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *start_ext , zval *directionVector_ext , zval *maxDistance_param_ext);
void zep_Pocketmine_Math_VoxelRayTrace_spaceShip_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *a_ext , zval *b_ext );
void zep_Pocketmine_Math_VoxelRayTrace_betweenPoints_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *start_ext , zval *end_ext );
void zep_Pocketmine_Math_VoxelRayTrace_rayTraceDistanceToBoundary_zephir_internal_call(int ht, zend_execute_data *execute_data, zval *return_value, zval *this_ptr, int return_value_used, zval *s_param_ext, zval *ds_param_ext);

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_voxelraytrace_indirection, 0, 3, Generator, 0)
	ZEND_ARG_OBJ_INFO(0, start, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_OBJ_INFO(0, directionVector, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_TYPE_INFO(0, maxDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_voxelraytrace_spaceship, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, a)
	ZEND_ARG_INFO(0, b)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_pocketmine_math_voxelraytrace_betweenpoints, 0, 2, Generator, 0)
	ZEND_ARG_OBJ_INFO(0, start, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_OBJ_INFO(0, end, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_math_voxelraytrace_raytracedistancetoboundary, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_voxelraytrace_indirection_zephir_internal_call, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, start, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_OBJ_INFO(0, directionVector, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_TYPE_INFO(0, maxDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_voxelraytrace_spaceship_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, a)
	ZEND_ARG_INFO(0, b)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_voxelraytrace_betweenpoints_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, start, Pocketmine\\Math\\Vector3, 0)
	ZEND_ARG_OBJ_INFO(0, end, Pocketmine\\Math\\Vector3, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_math_voxelraytrace_raytracedistancetoboundary_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_math_voxelraytrace_method_entry) {
	PHP_ME(Pocketmine_Math_VoxelRayTrace, inDirection, arginfo_pocketmine_math_voxelraytrace_indirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_VoxelRayTrace, spaceShip, arginfo_pocketmine_math_voxelraytrace_spaceship, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_VoxelRayTrace, betweenPoints, arginfo_pocketmine_math_voxelraytrace_betweenpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Pocketmine_Math_VoxelRayTrace, rayTraceDistanceToBoundary, arginfo_pocketmine_math_voxelraytrace_raytracedistancetoboundary, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
