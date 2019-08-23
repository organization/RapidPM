
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_RAPIDPM_H
#define PHP_RAPIDPM_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_RAPIDPM_NAME        "rapidpm"
#define PHP_RAPIDPM_VERSION     "0.0.2"
#define PHP_RAPIDPM_EXTNAME     "rapidpm"
#define PHP_RAPIDPM_AUTHOR      "Organization"
#define PHP_RAPIDPM_ZEPVERSION  "0.12.2-b3f17c25"
#define PHP_RAPIDPM_DESCRIPTION "Extension that implements parts of PocketMine-MP"



ZEND_BEGIN_MODULE_GLOBALS(rapidpm)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(rapidpm)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(rapidpm)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(rapidpm, v)
#else
	#define ZEPHIR_GLOBAL(v) (rapidpm_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_rapidpm_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(rapidpm_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(rapidpm_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def rapidpm_globals
#define zend_zephir_globals_def zend_rapidpm_globals

extern zend_module_entry rapidpm_module_entry;
#define phpext_rapidpm_ptr &rapidpm_module_entry

#endif
