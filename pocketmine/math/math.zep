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

/**
 * Math related classes, like matrices, bounding boxes and vector
 */
namespace Pocketmine\Math;

abstract class Math
{
    /**
     * @param float $n
     *
     * @return int
     */
    public static function floorFloat(var n) -> int
    {
        var i;
        let i = (int) n;
        return n >= i ? i : i - 1;
    }

    /**
     * @param float $n
     *
     * @return int
     */
    public static function ceilFloat(var n) -> int
    {
        var i;
        let i = (int) n;
        return n <= i ? i : i + 1;
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
    public static function solveQuadratic(float a, float b, float c) -> array
    {
        var sqrtDiscriminant;
        var discriminant;
        let discriminant = pow(b, 2) - 4 * a * c;
        if (discriminant > 0) {
            //2 real roots
            let sqrtDiscriminant = sqrt(discriminant);
            return [(-b + sqrtDiscriminant) / (2 * a), (-b - sqrtDiscriminant) / (2 * a)];
        } elseif (discriminant == 0) {
            //1 real root
            return [-b / (2 * a)];
        } else {
            //No real roots
            return [];
        }
    }

}
