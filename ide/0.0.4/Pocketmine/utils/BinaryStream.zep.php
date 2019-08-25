<?php

namespace Pocketmine\Utils;

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
class BinaryStream
{
    /**
     * @var int
     */
    public $offset;

    /**
     * @var string
     */
    public $buffer;


    /**
     * @return int
     */
    public function getOffset(): int {}

    /**
     * @return string
     */
    public function getBuffer(): string {}

    /**
     * @param string $buffer
     * @param int $offset
     */
    public function __construct(string $buffer = '', int $offset = 0) {}

    /**
     * @param int $offset
     */
    public function setOffset(int $offset): void {}


    public function reset() {}

    /**
     * Rewinds the stream pointer to the start.
     */
    public function rewind(): void {}

    /**
     * @param string $buffer
     * @param int $offset
     */
    public function setBuffer(string $buffer = '', int $offset = 0) {}

    /**
     * @param int|bool $len
     *
     * @return string
     *
     * @throws BinaryDataException if there are not enough bytes left in the buffer
     * @param mixed $len
     */
    public function get($len) {}

    /**
     * @throws BinaryDataException
     * @return string
     */
    public function getRemaining(): string {}

    /**
     * @param string $str
     */
    public function put(string $str) {}

    /**
     * @return bool
     */
    public function getBool(): bool {}

    /**
     * @param bool $v
     */
    public function putBool(bool $v) {}

    /**
     * @return int
     */
    public function getByte(): int {}

    /**
     * @param int $v
     */
    public function putByte(int $v) {}

    /**
     * @return int
     */
    public function getShort(): int {}

    /**
     * @return int
     */
    public function getSignedShort(): int {}

    /**
     * @param int $v
     */
    public function putShort(int $v) {}

    /**
     * @return int
     */
    public function getLShort(): int {}

    /**
     * @return int
     */
    public function getSignedLShort(): int {}

    /**
     * @param int $v
     */
    public function putLShort(int $v) {}

    /**
     * @return int
     */
    public function getTriad(): int {}

    /**
     * @param int $v
     */
    public function putTriad(int $v) {}

    /**
     * @return int
     */
    public function getLTriad(): int {}

    /**
     * @param int $v
     */
    public function putLTriad(int $v) {}

    /**
     * @return int
     */
    public function getInt(): int {}

    /**
     * @param int $v
     */
    public function putInt(int $v) {}

    /**
     * @return int
     */
    public function getLInt(): int {}

    /**
     * @param int $v
     */
    public function putLInt(int $v) {}

    /**
     * @return double
     */
    public function getFloat(): float {}

    /**
     * @param int $accuracy
     * @return double
     */
    public function getRoundedFloat(int $accuracy): float {}

    /**
     * @param double $v
     */
    public function putFloat(float $v) {}

    /**
     * @return double
     */
    public function getLFloat(): float {}

    /**
     * @param int $accuracy
     * @return double
     */
    public function getRoundedLFloat(int $accuracy): float {}

    /**
     * @param double $v
     */
    public function putLFloat(float $v) {}

    /**
     * @return double
     */
    public function getDouble(): float {}

    /**
     * @param double $v
     */
    public function putDouble(float $v): void {}

    /**
     * @return double
     */
    public function getLDouble(): float {}

    /**
     * @param double $v
     */
    public function putLDouble(float $v): void {}

    /**
     * @return int
     */
    public function getLong(): int {}

    /**
     * @param int $v
     */
    public function putLong(int $v) {}

    /**
     * @return int
     */
    public function getLLong(): int {}

    /**
     * @param int $v
     */
    public function putLLong(int $v) {}

    /**
     * Reads a 32-bit variable-length unsigned integer from the buffer and returns it.
     *
     * @return int
     */
    public function getUnsignedVarInt(): int {}

    /**
     * Writes a 32-bit variable-length unsigned integer to the end of the buffer.
     *
     * @param int $v
     */
    public function putUnsignedVarInt(int $v) {}

    /**
     * Reads a 32-bit zigzag-encoded variable-length integer from the buffer and returns it.
     *
     * @return int
     */
    public function getVarInt(): int {}

    /**
     * Writes a 32-bit zigzag-encoded variable-length integer to the end of the buffer.
     *
     * @param int $v
     */
    public function putVarInt(int $v) {}

    /**
     * Reads a 64-bit variable-length integer from the buffer and returns it.
     *
     * @return int
     */
    public function getUnsignedVarLong(): int {}

    /**
     * Writes a 64-bit variable-length integer to the end of the buffer.
     *
     * @param int $v
     */
    public function putUnsignedVarLong(int $v) {}

    /**
     * Reads a 64-bit zigzag-encoded variable-length integer from the buffer and returns it.
     *
     * @return int
     */
    public function getVarLong(): int {}

    /**
     * Writes a 64-bit zigzag-encoded variable-length integer to the end of the buffer.
     *
     * @param int $v
     * @param int
     */
    public function putVarLong(int $v) {}

    /**
     * Returns whether the offset has reached the end of the buffer.
     *
     * @return bool
     */
    public function feof(): bool {}

}
