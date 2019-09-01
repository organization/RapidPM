<?php

namespace Zephir\Optimizers\FunctionCall;

use Zephir\Call;
use Zephir\CompilationContext;
use Zephir\CompiledExpression;
use Zephir\Exception\CompilerException;
use Zephir\Optimizers\OptimizerAbstract;

class GetInfOptimizer extends OptimizerAbstract
{
    public function optimize(array $expression, Call $call, CompilationContext $context)
    {
        if (isset($expression['parameters'])) {
            throw new CompilerException("'get_inf' not require parameter", $expression);
        }

        /**
         * Process the expected symbol to be returned
         */
        $call->processExpectedReturn($context);

        $symbolVariable = $call->getSymbolVariable();
        if (!$symbolVariable->isDouble()) {
            throw new CompilerException("Values only can be stored in double variables", $expression);
        }
        $context->headersManager->add('get_inf');

        return new CompiledExpression('double', 'get_inf()', $expression);
    }
}
