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
class Matrix implements \ArrayAccess
{

    private $matrix = array();


    private $rows = 0;


    private $columns = 0;



    public function getRows() {}


    public function getColumns() {}

    /**
     * @param mixed $offset
     */
    public function offsetExists($offset) {}

    /**
     * @param mixed $offset
     */
    public function offsetGet($offset) {}

    /**
     * @param mixed $offset
     * @param mixed $value
     */
    public function offsetSet($offset, $value) {}

    /**
     * @param mixed $offset
     */
    public function offsetUnset($offset) {}

    /**
     * @param mixed $rows
     * @param mixed $columns
     * @param array $set
     */
    public function __construct($rows, $columns, array $set = array()) {}

    /**
     * @param array $m
     */
    public function set(array $m) {}

    /**
     * @param mixed $row
     * @param mixed $column
     * @param mixed $value
     */
    public function setElement($row, $column, $value) {}

    /**
     * @param mixed $row
     * @param mixed $column
     */
    public function getElement($row, $column) {}


    public function isSquare() {}

    /**
     * @param Matrix $matrix
     */
    public function add(Matrix $matrix) {}

    /**
     * @param Matrix $matrix
     */
    public function subtract(Matrix $matrix) {}

    /**
     * @param mixed $number
     */
    public function multiplyScalar($number) {}

    /**
     * @param mixed $number
     */
    public function divideScalar($number) {}


    public function transpose() {}

    /**
     * @param Matrix $matrix
     */
    public function product(Matrix $matrix) {}


    public function determinant() {}


    public function __toString() {}

}
