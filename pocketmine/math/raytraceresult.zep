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

/**
 * Class representing a ray trace collision with an AxisAlignedBB
 */
class RayTraceResult
{
    /**
     * @var AxisAlignedBB
     */
    public bb;
    /**
     * @var int
     */
    public hitFace;
    /**
     * @var Vector3
     */
    public hitVector;
    /**
     * @param AxisAlignedBB $bb
     * @param int           $hitFace one of the Facing::* constants
     * @param Vector3       $hitVector
     */
    public function __construct(<AxisAlignedBB> bb, int hitFace, <Vector3> hitVector)
    {
        let this->bb = bb;
        let this->hitFace = hitFace;
        let this->hitVector = hitVector;
    }

    /**
     * @return AxisAlignedBB
     */
    public function getBoundingBox() -> <AxisAlignedBB>
    {
        return this->bb;
    }

    /**
     * @return int
     */
    public function getHitFace() -> int
    {
        return this->hitFace;
    }

    /**
     * @return Vector3
     */
    public function getHitVector() -> <Vector3>
    {
        return this->hitVector;
    }

}
