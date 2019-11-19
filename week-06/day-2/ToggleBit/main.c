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

uint8_t ToggleBit(int byte, int position)
{
    /*
    uint8_t bit_mask = 0x1;
    bit_mask = bit_mask << position;
    byte = byte ^ bit_mask;
    */

    byte ^= (1 << position);

    return byte;
}


int main() {
/*
     * Write a function called ToggleBit which takes a byte and a bit position
     * and toggles the bit of byte in the specified bit position.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

    uint8_t test_byte = 0b1100;
    PrintBinary(ToggleBit(test_byte, 1));
    PrintBinary(ToggleBit(test_byte, 2));
    return 0;
}