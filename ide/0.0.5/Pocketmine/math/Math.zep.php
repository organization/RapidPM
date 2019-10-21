<?php

namespace Pocketmine\Math;

/**
 * Math related classes, like matrices, bounding boxes and vector
 */
abstract class Math
{

    /**
     * @param float $n
     *
     * @return int
     */
    public static function floorFloat($n): int
    {
    }

    /**
     * @param float $n
     *
     * @return int
     */
    public static function ceilFloat($n): int
    {
    }

    /**
     * Solves a quadratic equation with the given coefficients and returns an array of up to two solutions.
     *
     * @param float $a
     * @param float $b
     * @param float $c
     *
     * @return float[]
     */
    public static function solveQuadratic(float $a, float $b, float $c): array
    {
    }

}
