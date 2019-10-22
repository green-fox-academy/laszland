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

int CountOnes(int byte)
{
    int number_of_ones = 0;
    byte & 0x80 ? number_of_ones++ : number_of_ones;
    byte & 0x40 ? number_of_ones++ : number_of_ones;
    byte & 0x20 ? number_of_ones++ : number_of_ones;
    byte & 0x10 ? number_of_ones++ : number_of_ones;
    byte & 0x08 ? number_of_ones++ : number_of_ones;
    byte & 0x04 ? number_of_ones++ : number_of_ones;
    byte & 0x02 ? number_of_ones++ : number_of_ones;
    byte & 0x01 ? number_of_ones++ : number_of_ones;
    return  number_of_ones;
}

int CountZeros(int byte)
{
    int number_of_zeros = 0;
    /*
    byte & 0x80 ? number_of_zeros : number_of_zeros++;
    byte & 0x40 ? number_of_zeros : number_of_zeros++;
    byte & 0x20 ? number_of_zeros : number_of_zeros++;
    byte & 0x10 ? number_of_zeros : number_of_zeros++;
    byte & 0x08 ? number_of_zeros : number_of_zeros++;
    byte & 0x04 ? number_of_zeros : number_of_zeros++;
    byte & 0x02 ? number_of_zeros : number_of_zeros++;
    byte & 0x01 ? number_of_zeros : number_of_zeros++;
    */

    int start_to_count = 0;
    for (int i = 7; i >= 0; i--) {
        if (byte & (0x01 << i)) {
            start_to_count = 1;
        }
        if (start_to_count) {
            if (~byte & 0x1 << i) {
                number_of_zeros++;
            }
        }
    }
    return  number_of_zeros;
}

int main() {
    /* 1.
     * Write a function called CountOnes which takes a byte returns
     * with the number of one bits in it.
     * E.g. byte = 0b1101 => returns with 3
     */

    /* 2.
     * Write a function called CountZeros which takes a byte returns
     * with the number of zero bits in it.
     * E.g. byte = 0b1000 => returns with 3
     */

    uint8_t test_byte = 0b10000;
    printf("%d\n", CountOnes(test_byte));
    printf("%d\n", CountZeros(test_byte));


    return 0;
}