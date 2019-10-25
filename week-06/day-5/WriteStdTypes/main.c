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

    char myInt_as_chararray[10];
    sprintf(myInt_as_chararray, "%d", myInt);

    FILE* myInt_ptr;
    myInt_ptr = fopen("myInt.txt", "w");
    if(myInt_ptr == NULL)
        printf("There is an ERROR while opening the file.");
    fprintf(myInt_ptr, "%s", myInt_as_chararray);

    fclose(myInt_ptr);

    return 0;
}