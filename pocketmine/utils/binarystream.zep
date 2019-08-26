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

namespace Pocketmine\Utils;

class BinaryStream
{
    /** @var int */
    public offset {
        get
    };
    /** @var string */
    public buffer {
        get
    };

    public function __construct(string buffer = "", int offset = 0)
    {
        let this->buffer = buffer;
        let this->offset = offset;
    }

    public function setOffset(int offset) -> void
    {
        let this->offset = offset;
    }

    public function reset()
    {
        let this->buffer = "";
        let this->offset = 0;
    }

    /**
     * Rewinds the stream pointer to the start.
     */
    public function rewind() -> void
    {
        let this->offset = 0;
    }

    public function setBuffer(string buffer = "", int offset = 0)
    {
        let this->buffer = buffer;
        let this->offset = offset;
    }

    /**
     * @param int $len
     *
     * @return string
     *
     * @throws BinaryDataException if there are not enough bytes left in the buffer
     */
    public function get(int len) -> string
    {
        if (len === 0) {
            return "";
        }
        if (len < 0) {
            throw new \InvalidArgumentException("Length must be positive");
        }
        var remaining;
        let remaining = strlen(this->buffer) - this->offset;
        if (remaining < len) {
            throw new BinaryDataException("Not enough bytes left in buffer: need " . len  . ", have " . remaining);
        }
        if len === 1 {
            let this->offset++;
            return substr(this->buffer, this->offset - 1, 1);
        }
        let this->offset += len;
        return substr(this->buffer, this->offset - len, len);
    }

    /**
     * @return string
     * @throws BinaryDataException
     */
    public function getRemaining() -> string
    {
        var str = substr(this->buffer, this->offset);
        if (str === false) {
            throw new BinaryDataException("No bytes left to read");
        }
        let this->offset = strlen(this->buffer);
        return str;
    }

    public function put(string str)
    {
        let this->buffer .= str;
    }

    public function getBool() -> bool
    {
        return this->get(1) !== "\0";
    }

    public function putBool(bool v)
    {
        let this->buffer .= v ? "\1" : "\0";
    }

    public function getByte() -> int
    {
        return ord(this->get(1));
    }

    public function putByte(int v)
    {
        let this->buffer .= chr(v);
    }

    public function getShort() -> int
    {
        return unpack("n", this->get(2))[1];
    }

    public function getSignedShort() -> int
    {
        return unpack("n", this->get(2))[1] << 48 >> 48;
    }

    public function putShort(int v)
    {
        let this->buffer .= pack("n", v);
    }

    public function getLShort() -> int
    {
        return unpack("v", this->get(2))[1];
    }

    public function getSignedLShort() -> int
    {
        return unpack("v", this->get(2))[1] << 48 >> 48;
    }

    public function putLShort(int v)
    {
        let this->buffer .= pack("v", v);
    }

    public function getTriad() -> int
    {
        return unpack("N", "\0" . this->get(3))[1];
    }

    public function putTriad(int v)
    {
        let this->buffer .= substr(pack("N", v), 1);
    }

    public function getLTriad() -> int
    {
        return unpack("V", this->get(3) . "\0")[1];
    }

    public function putLTriad(int v)
    {
        let this->buffer .= substr(pack("V", v), 0, -1);
    }

    public function getInt() -> int
    {
        return unpack("N", this->get(4))[1] << 32 >> 32;
    }

    public function putInt(int v)
    {
        let this->buffer .= pack("N", v);
    }

    public function getLInt() -> int
    {
        return unpack("V", this->get(4))[1] << 32 >> 32;
    }

    public function putLInt(int v)
    {
        let this->buffer .= pack("V", v);
    }

    public function getFloat() -> float
    {
        return unpack("G", this->get(4))[1];
    }

    public function getRoundedFloat(int accuracy) -> float
    {
        return \round(unpack("G", this->get(4))[1], accuracy);
    }

    public function putFloat(float v)
    {
        let this->buffer .= pack("G", v);
    }

    public function getLFloat() -> float
    {
        return unpack("g", this->get(4))[1];
    }

    public function getRoundedLFloat(int accuracy) -> float
    {
        return \round(unpack("g", this->get(4))[1], accuracy);
    }

    public function putLFloat(float v)
    {
        let this->buffer .= pack("g", v);
    }

    public function getDouble() -> float
    {
        return unpack("E", this->get(8))[1];
    }

    public function putDouble(float v) -> void
    {
        let this->buffer .= pack("E", v);
    }

    public function getLDouble() -> float
    {
        return unpack("e", this->get(8))[1];
    }

    public function putLDouble(float v) -> void
    {
        let this->buffer .= pack("e", v);
    }

    /**
     * @return int
     */
    public function getLong() -> int
    {
        return Binary::readLong(this->get(8));
    }

    /**
     * @param int $v
     */
    public function putLong(int v)
    {
        let this->buffer .= pack("NN", v >> 32, v & 0xffffffff);
    }

    /**
     * @return int
     */
    public function getLLong() -> int
    {
        return Binary::readLLong(this->get(8));
    }

    /**
     * @param int $v
     */
    public function putLLong(int v)
    {
        let this->buffer .= pack("VV", v & 0xffffffff, v >> 32);
    }

    /**
     * Reads a 32-bit variable-length unsigned integer from the buffer and returns it.
     * @return int
     */
    public function getUnsignedVarInt() -> int
    {
        return Binary::readUnsignedVarInt(this->buffer, this->offset);
    }

    /**
     * Writes a 32-bit variable-length unsigned integer to the end of the buffer.
     * @param int $v
     */
    public function putUnsignedVarInt(int v)
    {
        let this->buffer .= Binary::writeUnsignedVarInt(v);
    }

    /**
     * Reads a 32-bit zigzag-encoded variable-length integer from the buffer and returns it.
     * @return int
     */
    public function getVarInt() -> int
    {
        return Binary::readVarInt(this->buffer, this->offset);
    }

    /**
     * Writes a 32-bit zigzag-encoded variable-length integer to the end of the buffer.
     * @param int $v
     */
    public function putVarInt(int v)
    {
        let this->buffer .= Binary::writeVarInt(v);
    }

    /**
     * Reads a 64-bit variable-length integer from the buffer and returns it.
     * @return int
     */
    public function getUnsignedVarLong() -> int
    {
        return Binary::readUnsignedVarLong(this->buffer, this->offset);
    }

    /**
     * Writes a 64-bit variable-length integer to the end of the buffer.
     * @param int $v
     */
    public function putUnsignedVarLong(int v)
    {
        let this->buffer .= Binary::writeUnsignedVarLong(v);
    }

    /**
     * Reads a 64-bit zigzag-encoded variable-length integer from the buffer and returns it.
     * @return int
     */
    public function getVarLong() -> int
    {
        return Binary::readVarLong(this->buffer, this->offset);
    }

    /**
     * Writes a 64-bit zigzag-encoded variable-length integer to the end of the buffer.
     * @param int
     */
    public function putVarLong(int v)
    {
        let this->buffer .= Binary::writeVarLong(v);
    }

    /**
     * Returns whether the offset has reached the end of the buffer.
     * @return bool
     */
    public function feof() -> bool
    {
        return !isset(this->buffer[this->offset]);
    }

}
