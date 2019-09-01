<?php
namespace Zephir\Optimizers\FunctionCall;

use Zephir\Call;
use Zephir\CompilationContext;
use Zephir\CompiledExpression;
use Zephir\Exception\CompilerException;
use Zephir\Optimizers\OptimizerAbstract;

class ZvalRefOptimizer extends OptimizerAbstract
{
    public function optimize(array $expression, Call $call, CompilationContext $context)
    {
        $context->headersManager->add('zval_ref');
        if (count($expression['parameters']) != 2) {
            throw new CompilerException("'zval_ref' requires two parameter", $expression);
        }

        $resolvedParams = $call->getReadOnlyResolvedParams($expression['parameters'], $context, $expression);
        return new CompiledExpression('void', 'ZVAL_REF(' . $resolvedParams[0] . ', ' . $resolvedParams[1] . ')', $expression);
    }
}
