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
 * Methods for working with binary strings
 */
namespace Pocketmine\Utils;

/*
if (!defined("ENDIANNESS")) {
    define("ENDIANNESS", pack("s", 1) === "\0\1" ? Binary::BIG_ENDIAN : Binary::LITTLE_ENDIAN);
}
*/
class Binary
{
    const BIG_ENDIAN = 0x0;
    const LITTLE_ENDIAN = 0x1;

    public static function signByte(int value) -> int
    {
        return value << 56 >> 56;
    }

    public static function unsignByte(int value) -> int
    {
        return value & 0xff;
    }

    public static function signShort(int value) -> int
    {
        return value << 48 >> 48;
    }

    public static function unsignShort(int value) -> int
    {
        return value & 0xffff;
    }

    public static function signInt(int value) -> int
    {
        return value << 32 >> 32;
    }

    public static function unsignInt(int value) -> int
    {
        return value & 0xffffffff;
    }

    public static function flipShortEndianness(int value) -> int
    {
        return self::readLShort(self::writeShort(value));
    }

    public static function flipIntEndianness(int value) -> int
    {
        return self::readLInt(self::writeInt(value));
    }

    public static function flipLongEndianness(int value) -> int
    {
        return self::readLLong(self::writeLong(value));
    }

    /**
     * Reads a byte boolean
     *
     * @param string $b
     *
     * @return bool
     */
    public static function readBool(string b) -> bool
    {
        return b !== "\0";
    }

    /**
     * Writes a byte boolean
     *
     * @param bool $b
     *
     * @return string
     */
    public static function writeBool(bool b) -> string
    {
        return b ? "\1" : "\0";
    }

    /**
     * Reads an unsigned byte (0 - 255)
     *
     * @param string $c
     *
     * @return int
     */
    public static function readByte(string c) -> int
    {
        return ord(c[0]);
    }

    /**
     * Reads a signed byte (-128 - 127)
     *
     * @param string $c
     *
     * @return int
     */
    public static function readSignedByte(string c) -> int
    {
        return self::signByte(ord(c[0]));
    }

    /**
     * Writes an unsigned/signed byte
     *
     * @param int $c
     *
     * @return string
     */
    public static function writeByte(int c) -> string
    {
        return chr(c);
    }

    /**
     * Reads a 16-bit unsigned big-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readShort(string str) -> int
    {
        return unpack("n", str)[1];
    }

    /**
     * Reads a 16-bit signed big-endian number
     *
     * @param $str
     *
     * @return int
     */
    public static function readSignedShort(string str) -> int
    {
        return self::signShort(unpack("n", str)[1]);
    }

    /**
     * Writes a 16-bit signed/unsigned big-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeShort(int value) -> string
    {
        return pack("n", value);
    }

    /**
     * Reads a 16-bit unsigned little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLShort(string str) -> int
    {
        return unpack("v", str)[1];
    }

    /**
     * Reads a 16-bit signed little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readSignedLShort(string str) -> int
    {
        return self::signShort(unpack("v", str)[1]);
    }

    /**
     * Writes a 16-bit signed/unsigned little-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLShort(int value) -> string
    {
        return pack("v", value);
    }

    /**
     * Reads a 3-byte big-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readTriad(string str) -> int
    {
        return unpack("N", "\0" . str)[1];
    }

    /**
     * Writes a 3-byte big-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeTriad(int value) -> string
    {
        return substr(pack("N", value), 1);
    }

    /**
     * Reads a 3-byte little-endian number
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLTriad(string str) -> int
    {
        return unpack("V", str . "\0")[1];
    }

    /**
     * Writes a 3-byte little-endian number
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLTriad(int value) -> string
    {
        return substr(pack("V", value), 0, -1);
    }

    /**
     * Reads a 4-byte signed integer
     *
     * @param string $str
     *
     * @return int
     */
    public static function readInt(string str) -> int
    {
        return self::signInt(unpack("N", str)[1]);
    }

    /**
     * Writes a 4-byte integer
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeInt(int value) -> string
    {
        return pack("N", value);
    }

    /**
     * Reads a 4-byte signed little-endian integer
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLInt(string str) -> int
    {
        return self::signInt(unpack("V", str)[1]);
    }

    /**
     * Writes a 4-byte signed little-endian integer
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLInt(int value) -> string
    {
        return pack("V", value);
    }

    /**
     * Reads a 4-byte floating-point number
     *
     * @param string $str
     *
     * @return float
     */
    public static function readFloat(string str) -> float
    {
        return unpack("G", str)[1];
    }

    /**
     * Reads a 4-byte floating-point number, rounded to the specified number of decimal places.
     *
     * @param string $str
     * @param int    $accuracy
     *
     * @return float
     */
    public static function readRoundedFloat(string str, int accuracy) -> float
    {
        return round(self::readFloat(str), accuracy);
    }

    /**
     * Writes a 4-byte floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeFloat(float value) -> string
    {
        return pack("G", value);
    }

    /**
     * Reads a 4-byte little-endian floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readLFloat(string str) -> float
    {
        return unpack("g", str)[1];
    }

    /**
     * Reads a 4-byte little-endian floating-point number rounded to the specified number of decimal places.
     *
     * @param string $str
     * @param int    $accuracy
     *
     * @return float
     */
    public static function readRoundedLFloat(string str, int accuracy) -> float
    {
        return round(self::readLFloat(str), accuracy);
    }

    /**
     * Writes a 4-byte little-endian floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeLFloat(float value) -> string
    {
        return pack("g", value);
    }

    /**
     * Returns a printable floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function printFloat(float value) -> string
    {
        return preg_replace("/(\\.\\d+?)0+\$/", "\$1", sprintf("%F", value));
    }

    /**
     * Reads an 8-byte floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readDouble(string str) -> float
    {
        return unpack("E", str)[1];
    }

    /**
     * Writes an 8-byte floating-point number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeDouble(float value) -> string
    {
        return pack("E", value);
    }

    /**
     * Reads an 8-byte little-endian floating-point number.
     *
     * @param string $str
     *
     * @return float
     */
    public static function readLDouble(string str) -> float
    {
        return unpack("e", str)[1];
    }

    /**
     * Writes an 8-byte floating-point little-endian number.
     *
     * @param float $value
     *
     * @return string
     */
    public static function writeLDouble(float value) -> string
    {
        return pack("e", value);
    }

    /**
     * Reads an 8-byte integer.
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLong(string str) -> int
    {
        return unpack("J", str)[1];
    }

    /**
     * Writes an 8-byte integer.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLong(int value) -> string
    {
        return pack("J", value);
    }

    /**
     * Reads an 8-byte little-endian integer.
     *
     * @param string $str
     *
     * @return int
     */
    public static function readLLong(string str) -> int
    {
        return unpack("P", str)[1];
    }

    /**
     * Writes an 8-byte little-endian integer.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeLLong(int value) -> string
    {
        return pack("P", value);
    }

    /**
     * Reads a 32-bit zigzag-encoded variable-length integer.
     *
     * @param string $buffer
     * @param int    $offset
     *
     * @return int
     */
    public static function readVarInt(string buffer, int offset) -> int
    {
        var temp;
        var raw;
        let raw = self::readUnsignedVarInt(buffer, offset);
        let temp = (raw << 63 >> 63 ^ raw) >> 1;
        return temp ^ raw & 1 << 63;
    }

    /**
     * Reads a 32-bit variable-length unsigned integer.
     *
     * @param string $buffer
     * @param int    $offset
     *
     * @return int
     *
     * @throws BinaryDataException if the var-int did not end after 5 bytes or there were not enough bytes
     */
    public static function readUnsignedVarInt(var buffer, int offset) -> int
    {
        var i = 0;
        var value = 0;
        while i <= 28 {
            let i += 7;
            if (!isset(buffer[offset])) {
                throw new BinaryDataException("No bytes left in buffer");
            }
            var b = ord(buffer[offset]);
            let offset++;
            let value = value | ((b & 0x7f) << i);
            if ((b & 0x80) === 0) {
                return value;
            }
        }
        throw new BinaryDataException("VarInt did not terminate after 5 bytes!");
    }

    /**
     * Writes a 32-bit integer as a zigzag-encoded variable-length integer.
     *
     * @param int $v
     *
     * @return string
     */
    public static function writeVarInt(int v) -> string
    {
        var v;
        let v = v << 32 >> 32;
        return self::writeUnsignedVarInt(v << 1 ^ v >> 31);
    }

    /**
     * Writes a 32-bit unsigned integer as a variable-length integer.
     *
     * @param int $value
     *
     * @return string up to 5 bytes
     */
    public static function writeUnsignedVarInt(int value) -> string
    {
        var i;
        var buf;
        let buf = "";
        let value = value & 0xffffffff;
        for i in range(0, 4) {
            if ((value >> 7) !== 0) {
                let buf .= chr(value | 0x80);
            } else {
                let buf .= chr(value & 0x7f);
                return buf;
            }
            let value = value >> 7 & PHP_INT_MAX >> 6;
            //PHP really needs a logical right-shift operator
        }
        throw new InvalidArgumentException("Value too large to be encoded as a VarInt");
    }

    /**
     * Reads a 64-bit zigzag-encoded variable-length integer.
     *
     * @param string $buffer
     * @param int    &$offset
     *
     * @return int
     */
    public static function readVarLong(string buffer, int offset) -> int
    {
        var temp;
        var raw;
        let raw = self::readUnsignedVarLong(buffer, offset);
        let temp = (raw << 63 >> 63 ^ raw) >> 1;
        return temp ^ raw & 1 << 63;
    }

    /**
     * Reads a 64-bit unsigned variable-length integer.
     *
     * @param string $buffer
     * @param int    &$offset
     *
     * @return int
     *
     * @throws BinaryDataException if the var-int did not end after 10 bytes or there were not enough bytes
     */
    public static function readUnsignedVarLong(var buffer, int offset) -> int
    {
        var i = 0;
        var value = 0;
        while i <= 63 {
            let i += 7;
            if (!isset(buffer[offset])) {
                throw new BinaryDataException("No bytes left in buffer");
            }
            var b = ord(buffer[offset]);
            let offset++;
            let value = value | ((b & 0x7f) << i);
            if ((b & 0x80) === 0) {
                return value;
            }
        }
        throw new BinaryDataException("VarLong did not terminate after 10 bytes!");
    }

    /**
     * Writes a 64-bit integer as a zigzag-encoded variable-length long.
     *
     * @param int $v
     *
     * @return string
     */
    public static function writeVarLong(int v) -> string
    {
        return self::writeUnsignedVarLong(v << 1 ^ v >> 63);
    }

    /**
     * Writes a 64-bit unsigned integer as a variable-length long.
     *
     * @param int $value
     *
     * @return string
     */
    public static function writeUnsignedVarLong(int value) -> string
    {
        var value;
        var i;
        var buf;
        let buf = "";
        for i in range(0, 9)  {
            if ((value >> 7) !== 0) {
                let buf .= chr(value | 0x80);
                //Let chr() take the last byte of this, it's faster than adding another & 0x7f.
            } else {
                let buf .= chr(value & 0x7f);
                return buf;
            }
            let value = value >> 7 & PHP_INT_MAX >> 6;
            //PHP really needs a logical right-shift operator
        }
        throw new InvalidArgumentException("Value too large to be encoded as a VarLong");
    }

}
