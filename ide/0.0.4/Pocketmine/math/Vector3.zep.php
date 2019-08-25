<?php

namespace Pocketmine\Math;

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
 */
class Vector3
{
    /**
     * @var float|int
     */
    public $x = 0.0;

    /**
     * @var float|int
     */
    public $y = 0.0;

    /**
     * @var float|int
     */
    public $z = 0.0;


    /**
     * @return float|int
     */
    public function getX(): int {}

    /**
     * @return float|int
     */
    public function getY(): int {}

    /**
     * @return float|int
     */
    public function getZ(): int {}

    /**
     * WARNING: THIS IS NOT TYPE SAFE!
     * This is intentionally not typehinted because things using this as an int-vector will crash and burn if everything
     * gets converted to floating-point numbers.
     *
     * TODO: typehint this once int-vectors and float-vectors are separated
     *
     * @param float|int $x
     * @param float|int $y
     * @param float|int $z
     */
    public function __construct($x = 0, $y = 0, $z = 0) {}

    /**
     * @return int
     */
    public function getFloorX(): int {}

    /**
     * @return int
     */
    public function getFloorY(): int {}

    /**
     * @return int
     */
    public function getFloorZ(): int {}

    /**
     * @param int         $z
     *
     * @param Vector3|int $x
     * @param int $y
     * @param mixed $z
     * @return Vector3
     */
    public function add($x, $y = 0, $z = 0): Vector3 {}

    /**
     * @param int         $z
     *
     * @param Vector3|int $x
     * @param int $y
     * @param mixed $z
     * @return Vector3
     */
    public function subtract($x = 0, $y = 0, $z = 0): Vector3 {}

    /**
     * @param double $number
     * @return Vector3
     */
    public function multiply(float $number): Vector3 {}

    /**
     * @param double $number
     * @return Vector3
     */
    public function divide(float $number): Vector3 {}

    /**
     * @return Vector3
     */
    public function ceil(): Vector3 {}

    /**
     * @return Vector3
     */
    public function floor(): Vector3 {}

    /**
     * @param int $precision
     * @param int $mode
     * @return Vector3
     */
    public function round(int $precision = 0, int $mode = 0x01): Vector3 {}

    /**
     * @return Vector3
     */
    public function abs(): Vector3 {}

    /**
     * @param int $step
     *
     * @param int $side
     * @param int $step
     * @return Vector3
     */
    public function getSide(int $side, int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function down(int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function up(int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function north(int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function south(int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function west(int $step = 1) {}

    /**
     * @param int $step
     *
     * @param int $step
     * @return Vector3
     */
    public function east(int $step = 1) {}

    /**
     * Yields vectors stepped out from this one in all directions.
     *
     * @param int $step Distance in each direction to shift the vector
     *
     * @param int $step
     * @return \Generator
     */
    public function sides(int $step = 1): \Generator {}

    /**
     * Same as sides() but returns a pre-populated array instead of Generator.
     *
     * @param int  $step
     *
     * @param bool $keys
     * @param int $step
     * @return array
     */
    public function sidesArray(bool $keys = false, int $step = 1): array {}

    /**
     * Yields vectors stepped out from this one in directions except those on the given axis.
     *
     * @param int $step
     *
     * @param int $axis Facing directions on this axis will be excluded
     * @param int $step
     * @return \Generator
     */
    public function sidesAroundAxis(int $axis, int $step = 1): \Generator {}

    /**
     * Return a Vector3 instance
     *
     * @return Vector3
     */
    public function asVector3(): Vector3 {}

    /**
     * @param Vector3 $pos
     * @return double
     */
    public function distance(Vector3 $pos): float {}

    /**
     * @param Vector3 $pos
     * @return double
     */
    public function distanceSquared(Vector3 $pos): float {}

    /**
     * @param mixed $x
     * @param mixed $z
     * @return double
     */
    public function maxPlainDistance($x = 0, $z = 0): float {}

    /**
     * @return double
     */
    public function length(): float {}

    /**
     * @return double
     */
    public function lengthSquared(): float {}

    /**
     * @return Vector3
     */
    public function normalize(): Vector3 {}

    /**
     * @param Vector3 $v
     * @return double
     */
    public function dot(Vector3 $v): float {}

    /**
     * @param Vector3 $v
     * @return Vector3
     */
    public function cross(Vector3 $v): Vector3 {}

    /**
     * @param Vector3 $v
     * @return bool
     */
    public function equals(Vector3 $v): bool {}

    /**
     * Returns a new vector with x value equal to the second parameter, along the line between this vector and the
     * passed in vector, or null if not possible.
     *
     * @param float   $x
     *
     * @param Vector3 $v
     * @param double $x
     * @return null|Vector3
     */
    public function getIntermediateWithXValue(Vector3 $v, float $x): ?Vector3 {}

    /**
     * Returns a new vector with y value equal to the second parameter, along the line between this vector and the
     * passed in vector, or null if not possible.
     *
     * @param float   $y
     *
     * @param Vector3 $v
     * @param double $y
     * @return null|Vector3
     */
    public function getIntermediateWithYValue(Vector3 $v, float $y): ?Vector3 {}

    /**
     * Returns a new vector with z value equal to the second parameter, along the line between this vector and the
     * passed in vector, or null if not possible.
     *
     * @param float   $z
     *
     * @param Vector3 $v
     * @param double $z
     * @return null|Vector3
     */
    public function getIntermediateWithZValue(Vector3 $v, float $z): ?Vector3 {}

    /**
     * @param $z
     *
     * @param mixed $x
     * @param mixed $y
     * @param mixed $z
     * @param $y
     * @return $this
     */
    public function setComponents($x, $y, $z) {}


    public function __toString() {}

    /**
     * Returns a new Vector3 taking the maximum of each component in the input vectors.
     *
     * @param Vector3[] $positions
     *
     * @param array $positions
     * @return Vector3
     */
    public static function maxComponents(array $positions): Vector3 {}

    /**
     * Returns a new Vector3 taking the minimum of each component in the input vectors.
     *
     * @param Vector3[] $positions
     *
     * @param array $positions
     * @return Vector3
     */
    public static function minComponents(array $positions): Vector3 {}

}
