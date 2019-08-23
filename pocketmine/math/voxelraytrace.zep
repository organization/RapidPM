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

abstract class VoxelRayTrace
{
    /**
     * Performs a ray trace from the start position in the given direction, for a distance of $maxDistance. This
     * returns a Generator which yields Vector3s containing the coordinates of voxels it passes through.
     *
     * @param Vector3 $start
     * @param Vector3 $directionVector
     * @param float   $maxDistance
     *
     * @return \Generator|Vector3[]
     */
    public static function inDirection(<Vector3> start, <Vector3> directionVector, float maxDistance) -> <\Generator>
    {
        return self::betweenPoints(start, start->add(directionVector->multiply(maxDistance)));
    }

    /**
     * Spaceship operator
     */
    private static function spaceShip(var a, var b) -> int {
        if a == b  { return 0; }
        elseif a < b { return -1; }
        else { return 1; }
    }

    /**
     * Performs a ray trace between the start and end coordinates. This returns a Generator which yields Vector3s
     * containing the coordinates of voxels it passes through.
     *
     * This is an implementation of the algorithm described in the link below.
     * @link http://www.cse.yorku.ca/~amana/research/grid.pdf
     *
     * @param Vector3 $start
     * @param Vector3 $end
     *
     * @return \Generator|Vector3[]
     */
    public static function betweenPoints(<Vector3> start, <Vector3> end) -> <\Generator>
    {
        var tDeltaZ;
        var tDeltaY;
        var tDeltaX;
        var tMaxZ;
        var tMaxY;
        var tMaxX;
        var stepZ;
        var stepY;
        var stepX;
        var radius;
        var directionVector;
        var currentBlock;
        let currentBlock = start->floor();
        let directionVector = end->subtract(start)->normalize();
        if (directionVector->lengthSquared() <= 0) {
            throw new \InvalidArgumentException("Start and end points are the same, giving a zero direction vector");
        }
        let radius = start->distance(end); 
        let stepX = self::spaceShip(directionVector->x, 0);
        let stepY = self::spaceShip(directionVector->y, 0);
        let stepZ = self::spaceShip(directionVector->z, 0);
        //Initialize the step accumulation variables depending how far into the current block the start position is. If
        //the start position is on the corner of the block, these will be zero.
        let tMaxX = self::rayTraceDistanceToBoundary(start->x, directionVector->x);
        let tMaxY = self::rayTraceDistanceToBoundary(start->y, directionVector->y);
        let tMaxZ = self::rayTraceDistanceToBoundary(start->z, directionVector->z);
        //The change in t on each axis when taking a step on that axis (always positive).
        let tDeltaX = directionVector->x == 0 ? 0 : stepX / directionVector->x;
        let tDeltaY = directionVector->y == 0 ? 0 : stepY / directionVector->y;
        let tDeltaZ = directionVector->z == 0 ? 0 : stepZ / directionVector->z;
        var temp = [];
        var counter = 0;
        while (true) {
            let counter++;
            let temp[counter] = currentBlock;
            // tMaxX stores the t-value at which we cross a cube boundary along the
            // X axis, and similarly for Y and Z. Therefore, choosing the least tMax
            // chooses the closest cube boundary.
            if (tMaxX < tMaxY && tMaxX < tMaxZ) {
                if (tMaxX > radius) {
                    break;
                }
                let currentBlock->x += stepX;
                let tMaxX += tDeltaX;
            } elseif (tMaxY < tMaxZ) {
                if (tMaxY > radius) {
                    break;
                }
                let currentBlock->y += stepY;
                let tMaxY += tDeltaY;
            } else {
                if (tMaxZ > radius) {
                    break;
                }
                let currentBlock->z += stepZ;
                let tMaxZ += tDeltaZ;
            }
        }
        return new \Generator(temp);
    }

    /**
     * Returns the distance that must be travelled on an axis from the start point with the direction vector component to
     * cross a block boundary.
     *
     * For example, given an X coordinate inside a block and the X component of a direction vector, will return the distance
     * travelled by that direction component to reach a block with a different X coordinate.
     *
     * Find the smallest positive t such that s+t*ds is an integer.
     *
     * @param float $s Starting coordinate
     * @param float $ds Direction vector component of the relevant axis
     *
     * @return float Distance along the ray trace that must be travelled to cross a boundary.
     */
    private static function rayTraceDistanceToBoundary(float s, float ds) -> float
    {
        if (ds == 0) {
            float inf = get_inf();
            return inf;
        }
        if (ds < 0) {
            let s = -s;
            let ds = -ds;
            if (floor(s) == s) {
                //exactly at coordinate, will leave the coordinate immediately by moving negatively
                return 0.0;
            }
        }
        // problem is now s+t*ds = 1
        return (1 - (s - floor(s))) / ds;
    }

}
