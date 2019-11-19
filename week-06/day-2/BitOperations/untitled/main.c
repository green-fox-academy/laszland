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

int main() {
    // 1. Print out myVar in decimal format
    // 2. Print out myVar in hexadecimal format
    // 3. Print out myVar in binary format using PrintBinary function

    // For the following tasks please verify your results with PrintBinary function
    // 4. Create 0b01010000 value from myVar with shift operator
    // 5. Create 0b00101001 value from myVar with shift operator
    // 6. Create 0b00100000 value from myVar with a single bitwise operator
    // 7. Create 0b11100101 value from myVar with a single bitwise operator
    // 8. Create 0b01011010 value form myVar with a single bitwise operator

    uint8_t myVar = 0b10100101;
    printf("myVar in decimal:\t%d\n", myVar);
    printf("myVar in hexadecimal:\t%x\n", myVar);
    printf("myVar in binary:\t");
    PrintBinary(myVar);

    myVar = myVar << 4;
    printf("myVar in binary:\t");
    PrintBinary(myVar);

    myVar = 0b10100101;
    myVar = myVar >> 2;
    printf("myVar in binary:\t");
    PrintBinary(myVar);

    myVar = myVar & 0xf6;
    printf("myVar in binary:\t");
    PrintBinary(myVar);

    myVar = myVar | 0xc5;
    printf("myVar in binary:\t");
    PrintBinary(myVar);

    myVar = myVar ^ 0xbf;
    printf("myVar in binary:\t");
    PrintBinary(myVar);



    return 0;
}