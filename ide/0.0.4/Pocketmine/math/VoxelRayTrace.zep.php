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
abstract class VoxelRayTrace
{

    /**
     * Performs a ray trace from the start position in the given direction, for a distance of $maxDistance. This
     * returns a Generator which yields Vector3s containing the coordinates of voxels it passes through.
     *
     * @param float   $maxDistance
     *
     * @param Vector3 $start
     * @param Vector3 $directionVector
     * @param double $maxDistance
     * @return \Generator
     */
    public static function inDirection(Vector3 $start, Vector3 $directionVector, float $maxDistance): \Generator {}

    /**
     * Spaceship operator
     *
     * @param mixed $a
     * @param mixed $b
     * @return int
     */
    private static function spaceShip($a, $b): int {}

    /**
     * Performs a ray trace between the start and end coordinates. This returns a Generator which yields Vector3s
     * containing the coordinates of voxels it passes through.
     *
     * This is an implementation of the algorithm described in the link below.
     *
     * @link http://www.cse.yorku.ca/~amana/research/grid.pdf
     *
     * @param Vector3 $end
     *
     * @param Vector3 $start
     * @param Vector3 $end
     * @return \Generator
     */
    public static function betweenPoints(Vector3 $start, Vector3 $end): \Generator {}

    /**
     * Returns the distance that must be travelled on an axis from the start point with the direction vector component to
     * cross a block boundary.
     *
     * For example, given an X coordinate inside a block and the X component of a direction vector, will return the distance
     * travelled by that direction component to reach a block with a different X coordinate.
     *
     * Find the smallest positive t such that s+tds is an integer.
     *
     * @param float $ds Direction vector component of the relevant axis
     *
     * @param float $s Starting coordinate
     * @param double $ds
     * @return double
     */
    private static function rayTraceDistanceToBoundary(float $s, float $ds): float {}

}
