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

uint8_t RotateRight(int byte, int nmbRtn)
{
    nmbRtn = nmbRtn % 8;
    uint8_t tmp1 = byte >> nmbRtn;
    uint8_t tmp2 = byte << (8 - nmbRtn);
    byte = tmp1 | tmp2;
    return byte;
}

uint8_t RotateLeft(int byte, int nmbRtn)
{
    nmbRtn = nmbRtn % 8;
    uint8_t tmp1 = byte << nmbRtn;
    uint8_t tmp2 = byte >> (8 - nmbRtn);
    byte = tmp1 | tmp2;
    return byte;
}

int main() {
    /* 1.
     * Write a function called RotateRight which takes a byte and a number
     * and rotates the bits of byte in right direction number times.
     * It should return with the result.
     * E.g. byte = 0b1000000, number = 1 => returns 0b01000000
     * E.g. byte = 0b1000001, number = 2 => returns 0b01100000
     */

    /* 2.
     * Write a function called RotateLeft which takes a byte and a number
     * and rotates the bits of byte in left direction number times.
     * It should return with the result.
     * E.g. byte = 0b1000000, number = 1 => returns 0b00000001
     * E.g. byte = 0b1000001, number = 2 => returns 0b00000110
     */

    uint8_t test_byte = 0b10010001;
    printf("Original binary was: ");
    PrintBinary(test_byte);
    PrintBinary(RotateRight(test_byte, 1));
    PrintBinary(RotateRight(test_byte, 2));
    PrintBinary(RotateLeft(test_byte, 1));
    PrintBinary(RotateLeft(test_byte, 18));

    return 0;
}