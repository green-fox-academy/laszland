#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
    printf("%c%c%c%c %c%c%c%c\n",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ? '1' : '0'));
}

uint8_t ClearBit(int byte, int position)
{
    /*
    byte &= ~(1 << position);
     */

    uint8_t bit_mask = 0x1;
    bit_mask = bit_mask << position;
    bit_mask = ~bit_mask;
    byte = byte & bit_mask;
    return byte;
}


int main() {
    /*
     * Write a function called ClearBit which takes a byte and a bit position
     * and clears the bit of byte in the specified bit position to 0.
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

    uint8_t test_byte = 0b1100;
    PrintBinary(ClearBit(test_byte, 2));


    return 0;
}