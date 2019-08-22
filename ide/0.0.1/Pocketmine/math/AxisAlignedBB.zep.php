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
class AxisAlignedBB
{
    /**
     * @var float
     */
    public $minX = 0.0;

    /**
     * @var float
     */
    public $minY = 0.0;

    /**
     * @var float
     */
    public $minZ = 0.0;

    /**
     * @var float
     */
    public $maxX = 0.0;

    /**
     * @var float
     */
    public $maxY = 0.0;

    /**
     * @var float
     */
    public $maxZ = 0.0;


    /**
     * @param double $minX
     * @param double $minY
     * @param double $minZ
     * @param double $maxX
     * @param double $maxY
     * @param double $maxZ
     */
    public function __construct(float $minX, float $minY, float $minZ, float $maxX, float $maxY, float $maxZ) {}

    /**
     * @param double $minX
     * @param double $minY
     * @param double $minZ
     * @param double $maxX
     * @param double $maxY
     * @param double $maxZ
     */
    public function setBounds(float $minX, float $minY, float $minZ, float $maxX, float $maxY, float $maxZ) {}

    /**
     * Sets the bounding box's bounds from another AxisAlignedBB, and returns itself
     *
     * @param AxisAlignedBB $bb
     * @return AxisAlignedBB
     */
    public function setBB(AxisAlignedBB $bb): AxisAlignedBB {}

    /**
     * Returns a new AxisAlignedBB extended by the specified X, Y and Z.
     * If each of X, Y and Z are positive, the relevant max bound will be increased. If negative, the relevant min
     * bound will be decreased.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function addCoord(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Outsets the bounds of this AxisAlignedBB by the specified X, Y and Z.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function expand(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Returns an expanded clone of this AxisAlignedBB.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function expandedCopy(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Shifts this AxisAlignedBB by the given X, Y and Z.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function offset(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Returns an offset clone of this AxisAlignedBB.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function offsetCopy(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Insets the bounds of this AxisAlignedBB by the specified X, Y and Z.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function contract(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Returns a contracted clone of this AxisAlignedBB.
     *
     * @param float $z
     *
     * @param float $x
     * @param float $y
     * @param double $z
     * @return AxisAlignedBB
     */
    public function contractedCopy(float $x, float $y, float $z): AxisAlignedBB {}

    /**
     * Extends the AABB in the given direction.
     *
     * @param float $distance Negative values pull the face in, positive values push out.
     *
     * @throws \InvalidArgumentException
     * @param int $face
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function extend(int $face, float $distance): AxisAlignedBB {}

    /**
     * Returns an extended clone of this bounding box.
     *
     * @see AxisAlignedBB::extend()
     *
     * @param float $distance
     *
     * @throws \InvalidArgumentException
     * @param int $face
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function extendedCopy(int $face, float $distance): AxisAlignedBB {}

    /**
     * Inverse of extend().
     *
     * @see AxisAlignedBB::extend()
     *
     * @param float $distance Positive values pull the face in, negative values push out.
     *
     * @throws \InvalidArgumentException
     * @param int $face
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function trim(int $face, float $distance): AxisAlignedBB {}

    /**
     * Returns a trimmed clone of this bounding box.
     *
     * @see AxisAlignedBB::trim()
     *
     * @param float $distance
     *
     * @throws \InvalidArgumentException
     * @param int $face
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function trimmedCopy(int $face, float $distance): AxisAlignedBB {}

    /**
     * Increases the dimension of the AABB along the given axis.
     *
     * @param float $distance Negative values reduce width, positive values increase width.
     *
     * @throws \InvalidArgumentException
     * @param int $axis one of the Facing::AXIS_* constants
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function stretch(int $axis, float $distance): AxisAlignedBB {}

    /**
     * Returns a stretched copy of this bounding box.
     *
     * @see AxisAlignedBB::stretch()
     *
     * @param float $distance
     *
     * @throws \InvalidArgumentException
     * @param int $axis
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function stretchedCopy(int $axis, float $distance): AxisAlignedBB {}

    /**
     * Reduces the dimension of the AABB on the given axis. Inverse of stretch().
     *
     * @see AxisAlignedBB::stretch()
     *
     * @param float $distance
     *
     * @throws \InvalidArgumentException
     * @param int $axis
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function squash(int $axis, float $distance): AxisAlignedBB {}

    /**
     * Returns a squashed copy of this bounding box.
     *
     * @see AxisAlignedBB::squash()
     *
     * @param float $distance
     *
     * @throws \InvalidArgumentException
     * @param int $axis
     * @param double $distance
     * @return AxisAlignedBB
     */
    public function squashedCopy(int $axis, float $distance): AxisAlignedBB {}

    /**
     * @param AxisAlignedBB $bb
     * @param double $x
     * @return double
     */
    public function calculateXOffset(AxisAlignedBB $bb, float $x): float {}

    /**
     * @param AxisAlignedBB $bb
     * @param double $y
     * @return double
     */
    public function calculateYOffset(AxisAlignedBB $bb, float $y): float {}

    /**
     * @param AxisAlignedBB $bb
     * @param double $z
     * @return double
     */
    public function calculateZOffset(AxisAlignedBB $bb, float $z): float {}

    /**
     * Returns whether any part of the specified AABB is inside (intersects with) this one.
     *
     * @param float         $epsilon
     *
     * @param AxisAlignedBB $bb
     * @param double $epsilon
     * @return bool
     */
    public function intersectsWith(AxisAlignedBB $bb, float $epsilon = 0.00001): bool {}

    /**
     * Returns whether the specified vector is within the bounds of this AABB on all axes.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInside(Vector3 $vector): bool {}

    /**
     * Returns the mean average of the AABB's X, Y and Z lengths.
     *
     * @return double
     */
    public function getAverageEdgeLength(): float {}

    /**
     * Returns the interior volume of the AABB.
     *
     * @return double
     */
    public function getVolume(): float {}

    /**
     * Returns whether the specified vector is within the Y and Z bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInYZ(Vector3 $vector): bool {}

    /**
     * Returns whether the specified vector is within the X and Z bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInXZ(Vector3 $vector): bool {}

    /**
     * Returns whether the specified vector is within the X and Y bounds of this AABB.
     *
     * @param Vector3 $vector
     * @return bool
     */
    public function isVectorInXY(Vector3 $vector): bool {}

    /**
     * Performs a ray-trace and calculates the point on the AABB's edge nearest the start position that the ray-trace
     * collided with. Returns a RayTraceResult with colliding vector closest to the start position.
     * Returns null if no colliding point was found.
     *
     * @param Vector3 $pos2
     *
     * @param Vector3 $pos1
     * @param Vector3 $pos2
     * @return null|RayTraceResult
     */
    public function calculateIntercept(Vector3 $pos1, Vector3 $pos2): ?RayTraceResult {}


    public function __toString() {}

    /**
     * Returns a 1x1x1 bounding box starting at grid position 0,0,0.
     *
     * @return AxisAlignedBB
     */
    public static function one(): AxisAlignedBB {}

}
