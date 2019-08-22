
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_POCKETMINE_H
#define PHP_POCKETMINE_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_POCKETMINE_NAME        "rapidpm"
#define PHP_POCKETMINE_VERSION     "0.0.1"
#define PHP_POCKETMINE_EXTNAME     "pocketmine"
#define PHP_POCKETMINE_AUTHOR      "Organization"
#define PHP_POCKETMINE_ZEPVERSION  "0.12.2-b3f17c25"
#define PHP_POCKETMINE_DESCRIPTION "Extension that implements parts of PocketMine-MP"



ZEND_BEGIN_MODULE_GLOBALS(pocketmine)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(pocketmine)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(pocketmine)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(pocketmine, v)
#else
	#define ZEPHIR_GLOBAL(v) (pocketmine_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_pocketmine_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(pocketmine_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(pocketmine_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def pocketmine_globals
#define zend_zephir_globals_def zend_pocketmine_globals

extern zend_module_entry pocketmine_module_entry;
#define phpext_pocketmine_ptr &pocketmine_module_entry

#endif
