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
class Vector2
{
    /**
     * @var float
     */
    public $x;

    /**
     * @var float
     */
    public $y;


    /**
     * @return float
     */
    public function getX()
    {
    }

    /**
     * @return float
     */
    public function getY()
    {
    }

    /**
     * @param double $x
     * @param double $y
     */
    public function __construct(float $x = 0, float $y = 0)
    {
    }

    /**
     * @return int
     */
    public function getFloorX(): int
    {
    }

    /**
     * @return int
     */
    public function getFloorY(): int
    {
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return Vector2
     */
    public function add($x, float $y = 0): Vector2
    {
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return Vector2
     */
    public function subtract($x, float $y = 0): Vector2
    {
    }

    /**
     * @return Vector2
     */
    public function ceil(): Vector2
    {
    }

    /**
     * @return Vector2
     */
    public function floor(): Vector2
    {
    }

    /**
     * @return Vector2
     */
    public function round(): Vector2
    {
    }

    /**
     * @return Vector2
     */
    public function abs(): Vector2
    {
    }

    /**
     * @param double $number
     * @return Vector2
     */
    public function multiply(float $number): Vector2
    {
    }

    /**
     * @param double $number
     * @return Vector2
     */
    public function divide(float $number): Vector2
    {
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return float
     */
    public function distance($x, float $y = 0): float
    {
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return float
     */
    public function distanceSquared($x, float $y = 0): float
    {
    }

    /**
     * @return double
     */
    public function length(): float
    {
    }

    /**
     * @return double
     */
    public function lengthSquared(): float
    {
    }

    /**
     * @return Vector2
     */
    public function normalize(): Vector2
    {
    }

    /**
     * @param Vector2 $v
     * @return double
     */
    public function dot(Vector2 $v): float
    {
    }


    public function __toString()
    {
    }

}
