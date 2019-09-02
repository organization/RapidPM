<?php
namespace Zephir\Optimizers\FunctionCall;

use Zephir\Call;
use Zephir\CompilationContext;
use Zephir\CompiledExpression;
use Zephir\Exception\CompilerException;
use Zephir\Optimizers\OptimizerAbstract;
use Zephir\Types;

class ZvalRefReadOptimizer extends OptimizerAbstract
{
    public function optimize(array $expression, Call $call, CompilationContext $context)
    {
        $context->headersManager->add('zval_ref_read');
        if (count($expression['parameters']) != 1) {
            throw new CompilerException("'read_zval_ref' requires one parameter", $expression);
        }

        $resolvedParams = $call->getReadOnlyResolvedParams($expression['parameters'], $context, $expression);
        return new CompiledExpression(Types::T_INT /* void trick */, 'zval_ref_read(' . $resolvedParams[0] . ')', $expression);
    }
}
