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

class AxisAlignedBB
{
    /** @var float */
    public minX = 0.0;
    /** @var float */
    public minY = 0.0;
    /** @var float */
    public minZ = 0.0;
    /** @var float */
    public maxX = 0.0;
    /** @var float */
    public maxY = 0.0;
    /** @var float */
    public maxZ = 0.0;
    public function __construct(float minX, float minY, float minZ, float maxX, float maxY, float maxZ)
    {
        this->setBounds(minX, minY, minZ, maxX, maxY, maxZ);
    }

    public function setBounds(float minX, float minY, float minZ, float maxX, float maxY, float maxZ)
    {
        if (minX > maxX) {
            throw new \InvalidArgumentException("minX {minX} is larger than maxX {maxX}");
        }
        if (minY > maxY) {
            throw new \InvalidArgumentException("minY {minY} is larger than maxY {maxY}");
        }
        if (minZ > maxZ) {
            throw new \InvalidArgumentException("minZ {minZ} is larger than maxZ {maxZ}");
        }
        let this->minX = minX;
        let this->minY = minY;
        let this->minZ = minZ;
        let this->maxX = maxX;
        let this->maxY = maxY;
        let this->maxZ = maxZ;
        return this;
    }

    /**
     * Sets the bounding box's bounds from another AxisAlignedBB, and returns itself
     *
     * @param AxisAlignedBB $bb
     * @return $this
     */
    public function setBB(<AxisAlignedBB> bb) -> <AxisAlignedBB>
    {
        return this->setBounds((float) bb->minX, (float) bb->minY, (float) bb->minZ, (float) bb->maxX, (float) bb->maxY, (float) bb->maxZ);
    }

    /**
     * Returns a new AxisAlignedBB extended by the specified X, Y and Z.
     * If each of X, Y and Z are positive, the relevant max bound will be increased. If negative, the relevant min
     * bound will be decreased.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return AxisAlignedBB
     */
    public function addCoord(float x, float y, float z) -> <AxisAlignedBB>
    {
        float minX = this->minX;
        float minY = this->minY;
        float minZ = this->minZ;
        float maxX = this->maxX;
        float maxY = this->maxY;
        float maxZ = this->maxZ;
        if (x < 0) {
            let minX += x;
        } elseif (x > 0) {
            let maxX += x;
        }
        if (y < 0) {
            let minY += y;
        } elseif (y > 0) {
            let maxY += y;
        }
        if (z < 0) {
            let minZ += z;
        } elseif (z > 0) {
            let maxZ += z;
        }
        return new AxisAlignedBB(minX, minY, minZ, maxX, maxY, maxZ);
    }

    /**
     * Outsets the bounds of this AxisAlignedBB by the specified X, Y and Z.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return $this
     */
    public function expand(float x, float y, float z) -> <AxisAlignedBB>
    {
        let this->minX -= x;
        let this->minY -= y;
        let this->minZ -= z;
        let this->maxX += x;
        let this->maxY += y;
        let this->maxZ += z;
        return this;
    }

    /**
     * Returns an expanded clone of this AxisAlignedBB.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return AxisAlignedBB
     */
    public function expandedCopy(float x, float y, float z) -> <AxisAlignedBB>
    {
        return (clone this)->expand(x, y, z);
    }

    /**
     * Shifts this AxisAlignedBB by the given X, Y and Z.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return $this
     */
    public function offset(float x, float y, float z) -> <AxisAlignedBB>
    {
        let this->minX += x;
        let this->minY += y;
        let this->minZ += z;
        let this->maxX += x;
        let this->maxY += y;
        let this->maxZ += z;
        return this;
    }

    /**
     * Returns an offset clone of this AxisAlignedBB.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return AxisAlignedBB
     */
    public function offsetCopy(float x, float y, float z) -> <AxisAlignedBB>
    {
        return (clone this)->offset(x, y, z);
    }

    /**
     * Insets the bounds of this AxisAlignedBB by the specified X, Y and Z.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return $this
     */
    public function contract(float x, float y, float z) -> <AxisAlignedBB>
    {
        let this->minX += x;
        let this->minY += y;
        let this->minZ += z;
        let this->maxX -= x;
        let this->maxY -= y;
        let this->maxZ -= z;
        return this;
    }

    /**
     * Returns a contracted clone of this AxisAlignedBB.
     *
     * @param float $x
     * @param float $y
     * @param float $z
     *
     * @return AxisAlignedBB
     */
    public function contractedCopy(float x, float y, float z) -> <AxisAlignedBB>
    {
        return (clone this)->contract(x, y, z);
    }

    /**
     * Extends the AABB in the given direction.
     *
     * @param int   $face
     * @param float $distance Negative values pull the face in, positive values push out.
     *
     * @return $this
     * @throws \InvalidArgumentException
     */
    public function extend(int face, float distance) -> <AxisAlignedBB>
    {
        if (face === Facing::DOWN) {
            let this->minY -= distance;
        } elseif (face === Facing::UP) {
            let this->maxY += distance;
        } elseif (face === Facing::NORTH) {
            let this->minZ -= distance;
        } elseif (face === Facing::SOUTH) {
            let this->maxZ += distance;
        } elseif (face === Facing::WEST) {
            let this->minX -= distance;
        } elseif (face === Facing::EAST) {
            let this->maxX += distance;
        } else {
            throw new \InvalidArgumentException("Invalid face {face}");
        }
        return this;
    }

    /**
     * Returns an extended clone of this bounding box.
     * @see AxisAlignedBB::extend()
     *
     * @param int   $face
     * @param float $distance
     *
     * @return AxisAlignedBB
     * @throws \InvalidArgumentException
     */
    public function extendedCopy(int face, float distance) -> <AxisAlignedBB>
    {
        return (clone this)->extend(face, distance);
    }

    /**
     * Inverse of extend().
     * @see AxisAlignedBB::extend()
     *
     * @param int   $face
     * @param float $distance Positive values pull the face in, negative values push out.
     *
     * @return $this
     * @throws \InvalidArgumentException
     */
    public function trim(int face, float distance) -> <AxisAlignedBB>
    {
        return this->extend(face, -distance);
    }

    /**
     * Returns a trimmed clone of this bounding box.
     * @see AxisAlignedBB::trim()
     *
     * @param int   $face
     * @param float $distance
     *
     * @return AxisAlignedBB
     * @throws \InvalidArgumentException
     */
    public function trimmedCopy(int face, float distance) -> <AxisAlignedBB>
    {
        return this->extendedCopy(face, -distance);
    }

    /**
     * Increases the dimension of the AABB along the given axis.
     *
     * @param int   $axis one of the Facing::AXIS_* constants
     * @param float $distance Negative values reduce width, positive values increase width.
     *
     * @return $this
     * @throws \InvalidArgumentException
     */
    public function stretch(int axis, float distance) -> <AxisAlignedBB>
    {
        if (axis === Facing::AXIS_Y) {
            let this->minY -= distance;
            let this->maxY += distance;
        } elseif (axis === Facing::AXIS_Z) {
            let this->minZ -= distance;
            let this->maxZ += distance;
        } elseif (axis === Facing::AXIS_X) {
            let this->minX -= distance;
            let this->maxX += distance;
        } else {
            throw new \InvalidArgumentException("Invalid axis {axis}");
        }
        return this;
    }

    /**
     * Returns a stretched copy of this bounding box.
     * @see AxisAlignedBB::stretch()
     *
     * @param int   $axis
     * @param float $distance
     *
     * @return AxisAlignedBB
     * @throws \InvalidArgumentException
     */
    public function stretchedCopy(int axis, float distance) -> <AxisAlignedBB>
    {
        return (clone this)->stretch(axis, distance);
    }

    /**
     * Reduces the dimension of the AABB on the given axis. Inverse of stretch().
     * @see AxisAlignedBB::stretch()
     *
     * @param int   $axis
     * @param float $distance
     *
     * @return $this
     * @throws \InvalidArgumentException
     */
    public function squash(int axis, float distance) -> <AxisAlignedBB>
    {
        return this->stretch(axis, -distance);
    }

    /**
     * Returns a squashed copy of this bounding box.
     * @see AxisAlignedBB::squash()
     *
     * @param int   $axis
     * @param float $distance
     *
     * @return AxisAlignedBB
     * @throws \InvalidArgumentException
     */
    public function squashedCopy(int axis, float distance) -> <AxisAlignedBB>
    {
        return this->stretchedCopy(axis, -distance);
    }

    public function calculateXOffset(<AxisAlignedBB> bb, float x) -> float
    {
        var x2;
        var x1;
        if bb->maxY <= this->minY || bb->minY >= this->maxY {
            return x;
        }
        if bb->maxZ <= this->minZ || bb->minZ >= this->maxZ {
            return x;
        }
        if x > 0 && bb->maxX <= this->minX {
            let x1 = this->minX - bb->maxX;
            if (x1 < x) {
                let x = x1;
            }
        } elseif x < 0 && bb->minX >= this->maxX {
            let x2 = this->maxX - bb->minX;
            if (x2 > x) {
                let x = x2;
            }
        }
        return x;
    }

    public function calculateYOffset(<AxisAlignedBB> bb, float y) -> float
    {
        var y2;
        var y1;
        if bb->maxX <= this->minX || bb->minX >= this->maxX {
            return y;
        }
        if bb->maxZ <= this->minZ || bb->minZ >= this->maxZ {
            return y;
        }
        if y > 0 && bb->maxY <= this->minY {
            let y1 = this->minY - bb->maxY;
            if (y1 < y) {
                let y = y1;
            }
        } elseif y < 0 && bb->minY >= this->maxY {
            let y2 = this->maxY - bb->minY;
            if (y2 > y) {
                let y = y2;
            }
        }
        return y;
    }

    public function calculateZOffset(<AxisAlignedBB> bb, float z) -> float
    {
        var z2;
        var z1;
        if bb->maxX <= this->minX || bb->minX >= this->maxX {
            return z;
        }
        if bb->maxY <= this->minY || bb->minY >= this->maxY {
            return z;
        }
        if z > 0 && bb->maxZ <= this->minZ {
            let z1 = this->minZ - bb->maxZ;
            if (z1 < z) {
                let z = z1;
            }
        } elseif z < 0 && bb->minZ >= this->maxZ {
            let z2 = this->maxZ - bb->minZ;
            if (z2 > z) {
                let z = z2;
            }
        }
        return z;
    }

    /**
     * Returns whether any part of the specified AABB is inside (intersects with) this one.
     *
     * @param AxisAlignedBB $bb
     * @param float         $epsilon
     *
     * @return bool
     */
    public function intersectsWith(<AxisAlignedBB> bb, float epsilon = 0.00001) -> bool
    {
        if bb->maxX - this->minX > epsilon && this->maxX - bb->minX > epsilon {
            if bb->maxY - this->minY > epsilon && this->maxY - bb->minY > epsilon {
                return bb->maxZ - this->minZ > epsilon && this->maxZ - bb->minZ > epsilon;
            }
        }
        return false;
    }

    /**
     * Returns whether the specified vector is within the bounds of this AABB on all axes.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInside(<Vector3> vector) -> bool
    {
        if vector->x <= this->minX || vector->x >= this->maxX {
            return false;
        }
        if vector->y <= this->minY || vector->y >= this->maxY {
            return false;
        }
        return vector->z > this->minZ && vector->z < this->maxZ;
    }

    /**
     * Returns the mean average of the AABB's X, Y and Z lengths.
     * @return float
     */
    public function getAverageEdgeLength() -> float
    {
        return (this->maxX - this->minX + this->maxY - this->minY + this->maxZ - this->minZ) / 3;
    }

    /**
     * Returns the interior volume of the AABB.
     *
     * @return float
     */
    public function getVolume() -> float
    {
        return (this->maxX - this->minX) * (this->maxY - this->minY) * (this->maxZ - this->minZ);
    }

    /**
     * Returns whether the specified vector is within the Y and Z bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInYZ(<Vector3> vector) -> bool
    {
        return vector->y >= this->minY && vector->y <= this->maxY && vector->z >= this->minZ && vector->z <= this->maxZ;
    }

    /**
     * Returns whether the specified vector is within the X and Z bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInXZ(<Vector3> vector) -> bool
    {
        return vector->x >= this->minX && vector->x <= this->maxX && vector->z >= this->minZ && vector->z <= this->maxZ;
    }

    /**
     * Returns whether the specified vector is within the X and Y bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInXY(<Vector3> vector) -> bool
    {
        return vector->x >= this->minX && vector->x <= this->maxX && vector->y >= this->minY && vector->y <= this->maxY;
    }

    /**
     * Performs a ray-trace and calculates the point on the AABB's edge nearest the start position that the ray-trace
     * collided with. Returns a RayTraceResult with colliding vector closest to the start position.
     * Returns null if no colliding point was found.
     *
     * @param Vector3 $pos1
     * @param Vector3 $pos2
     *
     * @return RayTraceResult|null
     */
    public function calculateIntercept(<Vector3> pos1, <Vector3> pos2) -> <RayTraceResult>|null
    {
        var f;
        var d;
        var distance;
        var vector;
        var v6;
        var v5;
        var v4;
        var v3;
        var v2;
        var v1;
        let v1 = pos1->getIntermediateWithXValue(pos2, (float) this->minX);
        let v2 = pos1->getIntermediateWithXValue(pos2, (float) this->maxX);
        let v3 = pos1->getIntermediateWithYValue(pos2, (float) this->minY);
        let v4 = pos1->getIntermediateWithYValue(pos2, (float) this->maxY);
        let v5 = pos1->getIntermediateWithZValue(pos2, (float) this->minZ);
        let v6 = pos1->getIntermediateWithZValue(pos2, (float) this->maxZ);
        if (v1 !== null && !this->isVectorInYZ(v1)) {
            let v1 = null;
        }
        if (v2 !== null && !this->isVectorInYZ(v2)) {
            let v2 = null;
        }
        if (v3 !== null && !this->isVectorInXZ(v3)) {
            let v3 = null;
        }
        if (v4 !== null && !this->isVectorInXZ(v4)) {
            let v4 = null;
        }
        if (v5 !== null && !this->isVectorInXY(v5)) {
            let v5 = null;
        }
        if (v6 !== null && !this->isVectorInXY(v6)) {
            let v6 = null;
        }
        let vector = null;
        let distance = PHP_INT_MAX;
        var v;
        
        for v in [v1, v2, v3, v4, v5, v6] {
            if v !== null {
                let d = pos1->distanceSquared(v);
                if d < distance {
                    let vector = v;
                    let distance = d;
                }
            }
        }

        if (vector === null) {
            return null;
        }

        let f = -1;

        if (vector === v1) {
            let f = Facing::WEST;
        } elseif (vector === v2) {
            let f = Facing::EAST;
        } elseif (vector === v3) {
            let f = Facing::DOWN;
        } elseif (vector === v4) {
            let f = Facing::UP;
        } elseif (vector === v5) {
            let f = Facing::NORTH;
        } elseif (vector === v6) {
            let f = Facing::SOUTH;
        }
        
        return new RayTraceResult(this, f, vector);
    }

    public function __toString()
    {
        return "AxisAlignedBB({this->minX}, {this->minY}, {this->minZ}, {this->maxX}, {this->maxY}, {this->maxZ})";
    }

    /**
     * Returns a 1x1x1 bounding box starting at grid position 0,0,0.
     *
     * @return AxisAlignedBB
     */
    public static function one() -> <AxisAlignedBB>
    {
        return new AxisAlignedBB(0, 0, 0, 1, 1, 1);
    }

}
