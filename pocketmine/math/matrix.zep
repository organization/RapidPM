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

class Matrix implements \ArrayAccess
{
    private matrix = [];
    private rows = 0 {
        get
    };
    private columns = 0 {
        get
    };
    public function offsetExists(var offset)
    {
        return isset(this->matrix[(int) offset]);
    }

    public function offsetGet(var offset)
    {
        return this->matrix[(int) offset];
    }

    public function offsetSet(var offset, var value)
    {
        let this->matrix[(int) offset] = value;
    }

    public function offsetUnset(var offset)
    {
        unset(this->matrix[(int) offset]);
    }

    public function __construct(var rows, var columns, array set = [])
    {
        let this->rows = max(1, (int) rows);
        let this->columns = max(1, (int) columns);
        this->set(set);
    }

    public function set(array m)
    {
        var c;
        var r;
        for r in range(0, this->rows - 1) {
            let this->matrix[r] = [];
            for c in range(0, this->columns - 1) {
                let this->matrix[r][c] = isset(m[r][c]) ? m[r][c] : 0;
            }
        }
    }

    public function setElement(var row, var column, var value)
    {
        if (row > this->rows || row < 0 || column > this->columns || column < 0) {
            return false;
        }
        let this->matrix[(int) row][(int) column] = value;
        return true;
    }

    public function getElement(var row, var column)
    {
        if (row > this->rows || row < 0 || column > this->columns || column < 0) {
            return false;
        }
        return this->matrix[(int) row][(int) column];
    }

    public function isSquare()
    {
        return this->rows === this->columns;
    }

    public function add(<Matrix> matrix)
    {
        var c;
        var r;
        var result;
        if (this->rows !== matrix->getRows() || this->columns !== matrix->getColumns()) {
            return false;
        }
        let result = new Matrix(this->rows, this->columns);
        for r in range(0, this->rows - 1) {
            for c in range(0, this->columns - 1) {
                result->setElement(r, c, this->matrix[r][c] + matrix->getElement(r, c));
            }
        }
        return result;
    }

    public function subtract(<Matrix> matrix)
    {
        var c;
        var r;
        var result;
        if (this->rows !== matrix->getRows() || this->columns !== matrix->getColumns()) {
            return false;
        }
        let result = clone this;
        for r in range(0, this->rows - 1) {
            for c in range(0, this->columns - 1) {
                result->setElement(r, c, this->matrix[r][c] - matrix->getElement(r, c));
            }
        }
        return result;
    }

    public function multiplyScalar(var number)
    {
        var c;
        var r;
        var result;
        let result = clone this;
        for r in range(0, this->rows - 1) {
            for c in range(0, this->columns - 1) {
                result->setElement(r, c, this->matrix[r][c] * number);
            }
        }
        return result;
    }

    public function divideScalar(var number)
    {
        var c;
        var r;
        var result;
        let result = clone this;
        for r in range(0, this->rows - 1) {
            for c in range(0, this->columns - 1) {
                result->setElement(r, c, this->matrix[r][c] / number);
            }
        }
        return result;
    }

    public function transpose()
    {
        var c;
        var r;
        var result;
        let result = new Matrix(this->columns, this->rows);
        for r in range(0, this->rows - 1) {
            for c in range(0, this->columns - 1) {
                result->setElement(c, r, this->matrix[r][c]);
            }
        }
        return result;
    }

    //Naive Matrix product, O(n^3)
    public function product(<Matrix> matrix)
    {
        var k;
        var sum;
        var j;
        var i;
        var result;
        var c;
        if (this->columns !== matrix->getRows()) {
            return false;
        }
        let c = matrix->getColumns();
        let result = new Matrix(this->rows, c);
        for i in range(0, this->rows - 1) {
            for j in range(0, c - 1) {
                let sum = 0;
                for k in range(0, this->columns - 1) {
                    let sum += this->matrix[i][k] * matrix->getElement(k, j);
                }
                result->setElement(i, j, sum);
            }
        }
        return result;
    }

    //Computation of the determinant of 2x2 and 3x3 matrices
    public function determinant()
    {
        if (this->isSquare() !== true) {
            return false;
        }
        switch (this->rows) {
            case 1:
                return 0;
            case 2:
                return this->matrix[0][0] * this->matrix[1][1] - this->matrix[0][1] * this->matrix[1][0];
            case 3:
                return this->matrix[0][0] * this->matrix[1][1] * this->matrix[2][2] + this->matrix[0][1] * this->matrix[1][2] * this->matrix[2][0] + this->matrix[0][2] * this->matrix[1][0] * this->matrix[2][1] - this->matrix[2][0] * this->matrix[1][1] * this->matrix[0][2] - this->matrix[2][1] * this->matrix[1][2] * this->matrix[0][0] - this->matrix[2][2] * this->matrix[1][0] * this->matrix[0][1];
        }
        return false;
    }

    public function __toString()
    {
        var r;
        var s;
        let s = "";
        for r in range(0, this->rows - 1) {
            let s .= implode(",", this->matrix[r]) . ";";
        }
        return "Matrix({this->rows}x{this->columns};" . substr(s, 0, -1) . ")";
    }

}
