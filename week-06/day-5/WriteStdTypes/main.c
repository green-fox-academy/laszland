#include <stdio.h>
#include <stdint.h>

int main() {
    int myInt = 123456789;
    float myFloat = 3.14159265359F;
    char myChar = 'c';

    int myIntRead;
    float myFloatRead;
    char myCharRead;

    /*
     * 1. Write out myInt to myInt.txt as a text!
     * 2. Write out myInt to myInt.bin as a binary file!
     *    Check the size of myInt.txt and myInt.bin! Why it is different?
     * 3. Write out myInt to myInt.bin, myFloat to myFloat.bin and myChar to myChar.bin!
     * 4. Read them back to myIntRead, myFloatRead and myCharRead and compare these variables to myInt, myFloat, myChar,
     *    they should be the same.
     */

    //- - - WRITE MYINT AS TEXT - - - ///
    char myInt_as_chararray[10];
    sprintf(myInt_as_chararray, "%d", myInt);

    FILE* myInt_ptr;
    myInt_ptr = fopen("myInt.txt", "w");
    if(myInt_ptr == NULL)
        return -1;

    fprintf(myInt_ptr, "%s", myInt_as_chararray);

    fclose(myInt_ptr);


    // - - - WRITE MYINT AS BINARY - - - //
    myInt_ptr = fopen("myInt.bin", "wb");
    if (myInt_ptr == NULL)
        return -1;

    fwrite(&myInt, sizeof(int), sizeof(myInt), myInt_ptr);

    fclose(myInt_ptr);


    // - - - WRITE MYFLOAT AS BINARY - - - //
    FILE* myFloat_ptr;
    myFloat_ptr = fopen("myFloat.bin", "wb");
    if (myFloat_ptr == NULL)
        return -1;

    fwrite(&myFloat, sizeof(float), sizeof(myFloat), myFloat_ptr);

    fclose(myFloat_ptr);


    // - - - WRITE MYCHAR AS BINARY - - - //
    FILE* myChar_ptr;
    myChar_ptr = fopen("myChar.bin", "wb");
    if (myChar_ptr == NULL)
        return -1;

    fwrite(&myChar, sizeof(char), sizeof(myChar), myChar_ptr);

    fclose(myChar_ptr);


    // - - - READING THE FILES BACK - - - //

    // INT //
    myInt_ptr = fopen("myInt.bin", "rb");
    if (myInt_ptr == NULL)
        return -1;

    fread(&myIntRead, sizeof(int), sizeof(myInt), myInt_ptr);

    fclose(myInt_ptr);
    printf("%d\n", myIntRead);


    // CHAR //
    myChar_ptr = fopen("myChar.bin", "rb");
    if(myChar_ptr == NULL)
        return -1;

    fread(&myCharRead, sizeof(char), sizeof(myChar), myChar_ptr);
    fclose(myChar_ptr);

    printf("%c\n", myCharRead);


    // FLOAT //
    myFloat_ptr = fopen("myFloat.bin", "rb");
    if (myFloat_ptr == NULL)
        return -1;

    fread(&myFloatRead, sizeof(float), sizeof(myFloat), myFloat_ptr);
    fclose(myFloat_ptr);

    printf("%f\n", myFloatRead);

    return 0;
}