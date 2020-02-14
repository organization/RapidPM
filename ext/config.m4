PHP_ARG_ENABLE(rapidpm, whether to enable rapidpm, [ --enable-rapidpm   Enable Rapidpm])

if test "$PHP_RAPIDPM" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, RAPIDPM_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_RAPIDPM, 1, [Whether you have Rapidpm])
	rapidpm_sources="rapidpm.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c pocketmine\math\axisalignedbb.zep.c
	pocketmine\math\facing.zep.c
	pocketmine\math\math.zep.c
	pocketmine\math\matrix.zep.c
	pocketmine\math\raytraceresult.zep.c
	pocketmine\math\vector2.zep.c
	pocketmine\math\vector3.zep.c
	pocketmine\math\vectormath.zep.c
	pocketmine\math\voxelraytrace.zep.c
	pocketmine\utils\binary.zep.c
	pocketmine\utils\binarydataexception.zep.c
	pocketmine\utils\binarystream.zep.c get_inf.c
	zval_ref.c
	zval_ref_read.c"
	PHP_NEW_EXTENSION(rapidpm, $rapidpm_sources, $ext_shared,, )
	PHP_SUBST(RAPIDPM_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([rapidpm], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([rapidpm], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/rapidpm], [php_RAPIDPM.h])

fi
