
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "rapidpm.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *pocketmine_math_axisalignedbb_ce;
zend_class_entry *pocketmine_math_facing_ce;
zend_class_entry *pocketmine_math_math_ce;
zend_class_entry *pocketmine_math_matrix_ce;
zend_class_entry *pocketmine_math_raytraceresult_ce;
zend_class_entry *pocketmine_math_vector2_ce;
zend_class_entry *pocketmine_math_vector3_ce;
zend_class_entry *pocketmine_math_vectormath_ce;
zend_class_entry *pocketmine_math_voxelraytrace_ce;
zend_class_entry *pocketmine_utils_binary_ce;
zend_class_entry *pocketmine_utils_binarydataexception_ce;
zend_class_entry *pocketmine_utils_binarystream_ce;

ZEND_DECLARE_MODULE_GLOBALS(rapidpm)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(rapidpm)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Pocketmine_Math_AxisAlignedBB);
	ZEPHIR_INIT(Pocketmine_Math_Facing);
	ZEPHIR_INIT(Pocketmine_Math_Math);
	ZEPHIR_INIT(Pocketmine_Math_Matrix);
	ZEPHIR_INIT(Pocketmine_Math_RayTraceResult);
	ZEPHIR_INIT(Pocketmine_Math_Vector2);
	ZEPHIR_INIT(Pocketmine_Math_Vector3);
	ZEPHIR_INIT(Pocketmine_Math_VectorMath);
	ZEPHIR_INIT(Pocketmine_Math_VoxelRayTrace);
	ZEPHIR_INIT(Pocketmine_Utils_Binary);
	ZEPHIR_INIT(Pocketmine_Utils_BinaryDataException);
	ZEPHIR_INIT(Pocketmine_Utils_BinaryStream);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(rapidpm)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_rapidpm_globals *rapidpm_globals TSRMLS_DC)
{
	rapidpm_globals->initialized = 0;

	/* Cache Enabled */
	rapidpm_globals->cache_enabled = 1;

	/* Recursive Lock */
	rapidpm_globals->recursive_lock = 0;

	/* Static cache */
	memset(rapidpm_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_rapidpm_globals *rapidpm_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(rapidpm)
{
	zend_rapidpm_globals *rapidpm_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	rapidpm_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(rapidpm_globals_ptr);
	zephir_initialize_memory(rapidpm_globals_ptr);

		zephir_init_static_properties_Pocketmine_Math_Facing(TSRMLS_C);
	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(rapidpm)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(rapidpm)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_RAPIDPM_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_RAPIDPM_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_RAPIDPM_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_RAPIDPM_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_RAPIDPM_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(rapidpm)
{
	php_zephir_init_globals(rapidpm_globals);
	php_zephir_init_module_globals(rapidpm_globals);
}

static PHP_GSHUTDOWN_FUNCTION(rapidpm)
{
	
}


zend_function_entry php_rapidpm_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_rapidpm_deps[] = {
	
	ZEND_MOD_END
};

zend_module_entry rapidpm_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_rapidpm_deps,
	PHP_RAPIDPM_EXTNAME,
	php_rapidpm_functions,
	PHP_MINIT(rapidpm),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(rapidpm),
#else
	NULL,
#endif
	PHP_RINIT(rapidpm),
	PHP_RSHUTDOWN(rapidpm),
	PHP_MINFO(rapidpm),
	PHP_RAPIDPM_VERSION,
	ZEND_MODULE_GLOBALS(rapidpm),
	PHP_GINIT(rapidpm),
	PHP_GSHUTDOWN(rapidpm),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(rapidpm),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_RAPIDPM
ZEND_GET_MODULE(rapidpm)
#endif
