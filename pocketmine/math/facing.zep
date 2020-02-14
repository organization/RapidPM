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

namespace Pocketmine\Math;

class Facing
{
    const AXIS_Y = 0;
    const AXIS_Z = 1;
    const AXIS_X = 2;
    const FLAG_AXIS_POSITIVE = 1;
    /* most significant 2 bits = axis, least significant bit = is positive direction */

    /* self::AXIS_Y << 1 = 0 */
    /* self::AXIS_Z << 1 = 2 */
    /* self::AXIS_X << 1 = 4 */

    const DOWN       = 0; /* self::AXIS_Y << 1; */
    const UP         = 1; /* self::AXIS_Y << 1 | self::FLAG_AXIS_POSITIVE; */
    const NORTH      = 2; /* self::AXIS_Z << 1; */
    const SOUTH      = 3; /* self::AXIS_Z << 1 | self::FLAG_AXIS_POSITIVE; */
    const WEST       = 4; /* self::AXIS_X << 1; */
    const EAST       = 5; /* self::AXIS_X << 1 | self::FLAG_AXIS_POSITIVE; */
    public static all = [
        self::DOWN,
        self::UP,
        self::NORTH,
        self::SOUTH,
        self::WEST,
        self::EAST
    ];
    public static horizonal = [
        self::NORTH,
        self::SOUTH,
        self::WEST,
        self::EAST
    ];
    private static clockwise = [
        [
            2: 5,
            5: 3, 
            3: 4,
            4: 2
        ],
        [
            1: 5,
            5: 0,
            0: 4,
            4: 1
        ],
        [
            1: 2,
            2: 0,
            0: 3,
            3: 1
        ]
    ];

    /**
     * Returns the axis of the given direction.
     *
     * @param int $direction
     *
     * @return int
     */
    public static function axis(int direction) -> int
    {
        return direction >> 1;
        //shift off positive/negative bit
    }

    /**
     * Returns whether the direction is facing the positive of its axis.
     *
     * @param int $direction
     *
     * @return bool
     */
    public static function isPositive(int direction) -> bool
    {
        return (direction & self::FLAG_AXIS_POSITIVE) === self::FLAG_AXIS_POSITIVE;
    }

    /**
     * Returns the opposite Facing of the specified one.
     *
     * @param int $direction 0-5 one of the self::* constants
     *
     * @return int
     */
    public static function opposite(int direction) -> int
    {
        return direction ^ self::FLAG_AXIS_POSITIVE;
    }

    /**
     * Rotates the given direction around the axis.
     *
     * @param int  $direction
     * @param int  $axis
     * @param bool $clockwise
     *
     * @return int
     * @throws \InvalidArgumentException if not possible to rotate $direction around $axis
     */
    public static function rotate(int direction, int axis, bool clockwise) -> int
    {
        if !isset self::clockwise[axis] {
            throw new \InvalidArgumentException("Invalid axis {axis}");
        }
        if !isset self::clockwise[axis][direction] {
            throw new \InvalidArgumentException("Cannot rotate direction {direction} around axis {axis}");
        }
        var rotated = self::clockwise[axis][direction];
        return clockwise ? rotated : self::opposite(rotated);
    }

    /**
     * @param int  $direction
     * @param bool $clockwise
     *
     * @return int
     * @throws \InvalidArgumentException
     */
    public static function rotateY(int direction, bool clockwise) -> int
    {
        return self::rotate(direction, self::AXIS_Y, clockwise);
    }

    /**
     * @param int  $direction
     * @param bool $clockwise
     *
     * @return int
     * @throws \InvalidArgumentException
     */
    public static function rotateZ(int direction, bool clockwise) -> int
    {
        return self::rotate(direction, self::AXIS_Z, clockwise);
    }

    /**
     * @param int  $direction
     * @param bool $clockwise
     *
     * @return int
     * @throws \InvalidArgumentException
     */
    public static function rotateX(int direction, bool clockwise) -> int
    {
        return self::rotate(direction, self::AXIS_X, clockwise);
    }

    /**
     * Validates the given integer as a Facing direction.
     *
     * @param int $facing
     * @throws \InvalidArgumentException if the argument is not a valid Facing constant
     */
    public static function validate(int facing) -> void
    {
        if (!in_array(facing, self::all, true)) {
            throw new \InvalidArgumentException("Invalid direction {facing}");
        }
    }

}
