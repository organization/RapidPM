<?php

namespace Pocketmine\Math;

/**
 * Class representing a ray trace collision with an AxisAlignedBB
 */
class RayTraceResult
{
    /**
     * @var AxisAlignedBB
     */
    public $bb;

    /**
     * @var int
     */
    public $hitFace;

    /**
     * @var Vector3
     */
    public $hitVector;


    /**
     * @param AxisAlignedBB $bb
     * @param int $hitFace one of the Facing::* constants
     * @param Vector3 $hitVector
     */
    public function __construct(AxisAlignedBB $bb, int $hitFace, Vector3 $hitVector) {}

    /**
     * @return AxisAlignedBB
     */
    public function getBoundingBox(): AxisAlignedBB {}

    /**
     * @return int
     */
    public function getHitFace(): int {}

    /**
     * @return Vector3
     */
    public function getHitVector(): Vector3 {}

}
