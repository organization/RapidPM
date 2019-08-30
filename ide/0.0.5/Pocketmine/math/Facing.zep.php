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
class Facing
{

    const AXIS_Y = 0;


    const AXIS_Z = 1;


    const AXIS_X = 2;


    const FLAG_AXIS_POSITIVE = 1;


    const DOWN = 0;


    const UP = 1;


    const NORTH = 2;


    const SOUTH = 3;


    const WEST = 4;


    const EAST = 5;


    static public $all = array(self::DOWN, self::UP, self::NORTH, self::SOUTH, self::WEST, self::EAST);


    static public $horizonal = array(self::NORTH, self::SOUTH, self::WEST, self::EAST);


    static private $clockwise = array(array(2 => 5, 5 => 3, 3 => 4, 4 => 2), array(1 => 5, 5 => 0, 0 => 4, 4 => 1), array(1 => 2, 2 => 0, 0 => 3, 3 => 1));


    /**
     * Returns the axis of the given direction.
     *
     * @param int $direction
     *
     * @param int $direction
     * @return int
     */
    public static function axis(int $direction): int {}

    /**
     * Returns whether the direction is facing the positive of its axis.
     *
     * @param int $direction
     *
     * @param int $direction
     * @return bool
     */
    public static function isPositive(int $direction): bool {}

    /**
     * Returns the opposite Facing of the specified one.
     *
     * @param int $direction 0-5 one of the self::* constants
     *
     * @param int $direction
     * @return int
     */
    public static function opposite(int $direction): int {}

    /**
     * Rotates the given direction around the axis.
     *
     * @param bool $clockwise
     *
     * @throws \InvalidArgumentException if not possible to rotate $direction around $axis
     * @param int $direction
     * @param int $axis
     * @param bool $clockwise
     * @return int
     */
    public static function rotate(int $direction, int $axis, bool $clockwise): int {}

    /**
     * @param bool $clockwise
     *
     * @throws \InvalidArgumentException
     * @param int $direction
     * @param bool $clockwise
     * @return int
     */
    public static function rotateY(int $direction, bool $clockwise): int {}

    /**
     * @param bool $clockwise
     *
     * @throws \InvalidArgumentException
     * @param int $direction
     * @param bool $clockwise
     * @return int
     */
    public static function rotateZ(int $direction, bool $clockwise): int {}

    /**
     * @param bool $clockwise
     *
     * @throws \InvalidArgumentException
     * @param int $direction
     * @param bool $clockwise
     * @return int
     */
    public static function rotateX(int $direction, bool $clockwise): int {}

    /**
     * Validates the given integer as a Facing direction.
     *
     * @throws \InvalidArgumentException if the argument is not a valid Facing constant
     * @param int $facing
     */
    public static function validate(int $facing): void {}

}
