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
     * @param mixed $n
     * @return int
     */
    public static function floorFloat($n): int {}

    /**
     * @param float $n
     *
     * @param mixed $n
     * @return int
     */
    public static function ceilFloat($n): int {}

    /**
     * Solves a quadratic equation with the given coefficients and returns an array of up to two solutions.
     *
     * @param float $c
     *
     * @param float $a
     * @param float $b
     * @param double $c
     * @return array
     */
    public static function solveQuadratic(float $a, float $b, float $c): array {}

}
