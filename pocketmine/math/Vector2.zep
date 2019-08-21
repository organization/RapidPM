/**
 * This file is part of FastMine.
 * 
 * FastMine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * FastMine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with FastMine.  If not, see <https://www.gnu.org/licenses/>.
 *
*/

namespace pocketmine\math;

class Vector2
{
    /** @var float */
    public x {
        get
    };
    /** @var float */
    public y {
        get
    };
    public function __construct(float x = 0, float y = 0)
    {
        let this->x = x;
        let this->y = y;
    }

    public function getFloorX() -> int
    {
        return (int) floor(this->x);
    }

    public function getFloorY() -> int
    {
        return (int) floor(this->y);
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return Vector2
     */
    public function add(var x, float y = 0) -> <Vector2>
    {
        if (x instanceof Vector2) {
            return this->add(x->x, x->y);
        } else {
            return new Vector2(this->x + x, this->y + y);
        }
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return Vector2
     */
    public function subtract(var x, float y = 0) -> <Vector2>
    {
        if (x instanceof Vector2) {
            return this->add(-x->x, -x->y);
        } else {
            return this->add(-x, -y);
        }
    }

    public function ceil() -> <Vector2>
    {
        return new Vector2((int) ceil(this->x), (int) ceil(this->y));
    }

    public function floor() -> <Vector2>
    {
        return new Vector2((int) floor(this->x), (int) floor(this->y));
    }

    public function round() -> <Vector2>
    {
        return new Vector2(round(this->x), round(this->y));
    }

    public function abs() -> <Vector2>
    {
        return new Vector2(abs(this->x), abs(this->y));
    }

    public function multiply(float number) -> <Vector2>
    {
        return new Vector2(this->x * number, this->y * number);
    }

    public function divide(float number) -> <Vector2>
    {
        return new Vector2(this->x / number, this->y / number);
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return float
     */
    public function distance(var x, float y = 0) -> float
    {
        if (x instanceof Vector2) {
            return sqrt(this->distanceSquared(x->x, x->y));
        } else {
            return sqrt(this->distanceSquared(x, y));
        }
    }

    /**
     * @param Vector2|float $x
     * @param float         $y
     *
     * @return float
     */
    public function distanceSquared(var x, float y = 0) -> float
    {
        if (x instanceof Vector2) {
            return this->distanceSquared(x->x, x->y);
        } else {
            return (this->x - x) ** 2 + (this->y - y) ** 2;
        }
    }

    public function length() -> float
    {
        return sqrt(this->lengthSquared());
    }

    public function lengthSquared() -> float
    {
        return this->x * this->x + this->y * this->y;
    }

    public function normalize() -> <Vector2>
    {
        var len;
        let len = this->lengthSquared();
        if (len > 0) {
            return this->divide(sqrt(len));
        }
        return new Vector2(0, 0);
    }

    public function dot(<Vector2> v) -> float
    {
        return this->x * v->x + this->y * v->y;
    }

    public function __toString()
    {
        return "Vector2(x=" . this->x . ",y=" . this->y . ")";
    }

}