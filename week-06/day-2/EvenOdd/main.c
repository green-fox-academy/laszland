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

void IsEven(int byte)
{
    printf("%s", (byte & 0x01) ? "false\n" : "true\n");
}

void IsOdd(int byte)
{
    printf("%s", (byte & 0x01) ? "true\n" : "false\n");
}

int main() {
    /* 1.
     * Write a function called IsEven which takes a byte and returns with true
     * if byte is even. Use only bitwise operators!
     */

    /* 2.
     * Write a function called IsOdd which takes a byte and returns with true
     * if byte is odd. Use only bitwise operators!
     */

    uint8_t test_even = 0b1010;
    uint8_t test_odd = 0b0101;

    IsEven(test_even);
    IsEven(test_odd);
    IsOdd(test_even);
    IsOdd(test_odd);


    return 0;
}