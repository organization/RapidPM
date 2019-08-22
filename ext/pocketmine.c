
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "pocketmine.h"

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

ZEND_DECLARE_MODULE_GLOBALS(pocketmine)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(pocketmine)
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
static PHP_MSHUTDOWN_FUNCTION(pocketmine)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_pocketmine_globals *pocketmine_globals TSRMLS_DC)
{
	pocketmine_globals->initialized = 0;

	/* Cache Enabled */
	pocketmine_globals->cache_enabled = 1;

	/* Recursive Lock */
	pocketmine_globals->recursive_lock = 0;

	/* Static cache */
	memset(pocketmine_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_pocketmine_globals *pocketmine_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(pocketmine)
{
	zend_pocketmine_globals *pocketmine_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	pocketmine_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(pocketmine_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(pocketmine_globals_ptr TSRMLS_CC);

		zephir_init_static_properties_Pocketmine_Math_Facing(TSRMLS_C);
	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(pocketmine)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(pocketmine)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_POCKETMINE_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_POCKETMINE_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_POCKETMINE_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_POCKETMINE_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_POCKETMINE_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(pocketmine)
{
	php_zephir_init_globals(pocketmine_globals TSRMLS_CC);
	php_zephir_init_module_globals(pocketmine_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(pocketmine)
{
	
}


zend_function_entry php_pocketmine_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_pocketmine_deps[] = {
	
	ZEND_MOD_END
};

zend_module_entry pocketmine_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_pocketmine_deps,
	PHP_POCKETMINE_EXTNAME,
	php_pocketmine_functions,
	PHP_MINIT(pocketmine),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(pocketmine),
#else
	NULL,
#endif
	PHP_RINIT(pocketmine),
	PHP_RSHUTDOWN(pocketmine),
	PHP_MINFO(pocketmine),
	PHP_POCKETMINE_VERSION,
	ZEND_MODULE_GLOBALS(pocketmine),
	PHP_GINIT(pocketmine),
	PHP_GSHUTDOWN(pocketmine),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(pocketmine),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_POCKETMINE
ZEND_GET_MODULE(pocketmine)
#endif
