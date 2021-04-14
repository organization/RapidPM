<?php

namespace Pocketmine\Utils;

/**
 * Methods for working with binary strings
 */
class Binary
{

    const BIG_ENDIAN = 0x0;


    const LITTLE_ENDIAN = 0x1;


    /**
     * @param int $value
     * @return int
     */
    public static function signByte(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function unsignByte(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function signShort(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function unsignShort(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function signInt(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function unsignInt(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function flipShortEndianness(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function flipIntEndianness(int $value): int
    {
    }

    /**
     * @param int $value
     * @return int
     */
    public static function flipLongEndianness(int $value): int
    {
    }

    /**
     * Reads a byte boolean
     *
     * @param string $b
     *
     * @return bool
     */
    public static function readBool(string $b): bool
    {
    }

    /**
     * Writes a byte boolean
     *
     * @param bool $b
     *
     * @return string
     */
    public static function writeBool(bool $b): string
    {
    }

    /**
     * Reads an unsigned byte (0 - 255)
     *
     * @param string $c
     *
     * @return int
     */
    public static function readByte(string $c): int
    {
    }

    /**
     * Reads a signed byte (-128 - 127)
     *
     * @param string $c
     *
     * @return int
     */
    public static function readSignedByte(string $c): int
    {
    }

    /**
     * Writes an unsigned/signed byte
     *
     * @param int $c
     *
     * @return string
     */
    public static function writeByte(int $c): string
    {
    }

    /**
     * Reads a 16-bit unsigned big-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readShort(string $str): int
    {
    }

    /**
     * Reads a 16-bit signed big-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readSignedShort(string $str): int
    {
    }

    /**
     * Writes a 16-bit signed/unsigned big-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeShort(int $value): string
    {
    }

    /**
     * Reads a 16-bit unsigned little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLShort(string $str): int
    {
    }

    /**
     * Reads a 16-bit signed little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readSignedLShort(string $str): int
    {
    }

    /**
     * Writes a 16-bit signed/unsigned little-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLShort(int $value): string
    {
    }

    /**
     * Reads a 3-byte big-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readTriad(string $str): string
    {
    }

    /**
     * Writes a 3-byte big-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeTriad(int $value): int
    {
    }

    /**
     * Reads a 3-byte little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLTriad(string $str): int
    {
    }

    /**
     * Writes a 3-byte little-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLTriad(int $value): string
    {
    }

    /**
     * Reads a 4-byte signed integer
     *
     * @param string $str
     *
     * @return int
     */
    public static function readInt(string $str): int
    {
    }

    /**
     * Writes a 4-byte integer
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeInt(int $value): string
    {
    }

    /**
     * Reads a 4-byte signed little-endian integer
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLInt(string $str): int
    {
    }

    /**
     * Writes a 4-byte signed little-endian integer
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLInt(int $value): string
    {
    }

    /**
     * Reads a 4-byte floating-point number
     *
     * @param string $str
     *
     * @return float
     */
    public static function readFloat(string $str): float
    {
    }

    /**
     * Reads a 4-byte floating-point number, rounded to the specified number of decimal places.
     *
     * @param string $str
     * @param int    $accuracy
     *
     * @return float
     */
    public static function readRoundedFloat(string $str, int $accuracy): float
    {
    }

    /**
     * Writes a 4-byte floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeFloat(float $value): string
    {
    }

    /**
     * Reads a 4-byte little-endian floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readLFloat(string $str): float
    {
    }

    /**
     * Reads a 4-byte little-endian floating-point number rounded to the specified number of decimal places.
     *
     * @param string $str
     * @param int    $accuracy
     *
     * @return float
     */
    public static function readRoundedLFloat(string $str, int $accuracy): float
    {
    }

    /**
     * Writes a 4-byte little-endian floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeLFloat(float $value): string
    {
    }

    /**
     * Returns a printable floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function printFloat(float $value): string
    {
    }

    /**
     * Reads an 8-byte floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readDouble(string $str): float
    {
    }

    /**
     * Writes an 8-byte floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeDouble(float $value): string
    {
    }

    /**
     * Reads an 8-byte little-endian floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readLDouble(string $str): float
    {
    }

    /**
     * Writes an 8-byte floating-point little-endian number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeLDouble(float $value): string
    {
    }

    /**
     * Reads an 8-byte integer.
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLong(string $str): int
    {
    }

    /**
     * Writes an 8-byte integer.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLong(int $value): string
    {
    }

    /**
     * Reads an 8-byte little-endian integer.
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLLong(string $str): int
    {
    }

    /**
     * Writes an 8-byte little-endian integer.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLLong(int $value): string
    {
    }

    /**
     * Reads a 32-bit zigzag-encoded variable-length integer.
     *
     * @param string $buffer
     * @param int    $offset reference parameter
     *
     * @return int
     */
    public static function readVarInt(string $buffer, int $offset): int
    {
    }

    /**
     * Reads a 32-bit variable-length unsigned integer.
     *
     * @param string $buffer
     * @param int    $offset reference parameter
     *
     * @return int
     *
     * @throws BinaryDataException if the var-int did not end after 5 bytes or there were not enough bytes
     */
    public static function readUnsignedVarInt($buffer, $offset): int
    {
    }

    /**
     * Writes a 32-bit integer as a zigzag-encoded variable-length integer.
     *
     * @param int $v
     *
     * @return string
     */
    public static function writeVarInt(int $v): string
    {
    }

    /**
     * Writes a 32-bit unsigned integer as a variable-length integer.
     *
     * @param int $value
     *
     * @return string up to 5 bytes
     */
    public static function writeUnsignedVarInt(int $value): string
    {
    }

    /**
     * Reads a 64-bit zigzag-encoded variable-length integer.
     *
     * @param string $buffer
     * @param int    $offset reference parameter
     *
     * @return long
     */
    public static function readVarLong(string $buffer, int $offset): int
    {
    }

    /**
     * Reads a 64-bit unsigned variable-length integer.
     *
     * @param string $buffer
     * @param int    $offset reference parameter
     *
     * @return int
     *
     * @throws BinaryDataException if the var-int did not end after 10 bytes or there were not enough bytes
     */
    public static function readUnsignedVarLong($buffer, int $offset): int
    {
    }

    /**
     * Writes a 64-bit integer as a zigzag-encoded variable-length long.
     *
     * @param int $v
     *
     * @return string
     */
    public static function writeVarLong(int $v): string
    {
    }

    /**
     * Writes a 64-bit unsigned integer as a variable-length long.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeUnsignedVarLong(int $value): string
    {
    }

}
