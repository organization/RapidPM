
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


/**
 * This file is part of RapidPM.
 * 
 * RapidPM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * RapidPM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with RapidPM.  If not, see <https://www.gnu.org/licenses/>.
 *
*/
/**
 * Class representing a ray trace collision with an AxisAlignedBB
 */
ZEPHIR_INIT_CLASS(Pocketmine_Math_RayTraceResult) {

	ZEPHIR_REGISTER_CLASS(Pocketmine\\Math, RayTraceResult, pocketmine, math_raytraceresult, pocketmine_math_raytraceresult_method_entry, 0);

	/**
	 * @var AxisAlignedBB
	 */
	zend_declare_property_null(pocketmine_math_raytraceresult_ce, SL("bb"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * @var int
	 */
	zend_declare_property_null(pocketmine_math_raytraceresult_ce, SL("hitFace"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * @var Vector3
	 */
	zend_declare_property_null(pocketmine_math_raytraceresult_ce, SL("hitVector"), ZEND_ACC_PUBLIC TSRMLS_CC);

	return SUCCESS;

}

/**
 * @param AxisAlignedBB $bb
 * @param int           $hitFace one of the Facing::* constants
 * @param Vector3       $hitVector
 */
PHP_METHOD(Pocketmine_Math_RayTraceResult, __construct) {

	zend_long hitFace;
	zval *bb, bb_sub, *hitFace_param = NULL, *hitVector, hitVector_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&bb_sub);
	ZVAL_UNDEF(&hitVector_sub);
	ZVAL_UNDEF(&_0);

	zephir_fetch_params_without_memory_grow(3, 0, &bb, &hitFace_param, &hitVector);

	hitFace = zephir_get_intval(hitFace_param);


	zephir_update_property_zval(this_ptr, SL("bb"), bb);
	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, hitFace);
	zephir_update_property_zval(this_ptr, SL("hitFace"), &_0);
	zephir_update_property_zval(this_ptr, SL("hitVector"), hitVector);

}

/**
 * @return AxisAlignedBB
 */
PHP_METHOD(Pocketmine_Math_RayTraceResult, getBoundingBox) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "bb");

}

/**
 * @return int
 */
PHP_METHOD(Pocketmine_Math_RayTraceResult, getHitFace) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "hitFace");

}

/**
 * @return Vector3
 */
PHP_METHOD(Pocketmine_Math_RayTraceResult, getHitVector) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "hitVector");

}

