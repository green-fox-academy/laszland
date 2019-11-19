#include <stdio.h>
#include <stdint.h>

/*
 * 1. Create a struct which represents a person:
 * - name (max 64 characters)
 * - age (integer)
 * - height in meters (floating point)
 */

typedef struct {
    char* name;
    int age;
    float height;
} person_t;

int main() {

    /*
     * 2. Create a person struct, fill it with some data and write it out to a binary file.
     *    Read it back to another struct variable and compare them. Are they equal?
     */

    /*
     * 3. Create an array which holds 10 person strcut.
     *    Fill them with some data and write out the array to a binary file.
     *    Read it back to another array and compare the array content to the first one. Are they equal?
     */


    // - - - CREATE PERSON_T, WRITE OUT INTO A BINARY FILE AND READ IT BACK - - - //
    person_t john = {"John", 23, 1.76};
    person_t john_read;

    FILE* person_ptr;
    person_ptr = fopen("person-struct.bin", "wb");
    if (person_ptr == NULL)
        return -1;

    fwrite(&john, sizeof(person_t), 1, person_ptr);
    fclose(person_ptr);

    person_ptr = fopen("person-struct.bin", "rb");
    if (person_ptr == NULL)
        return -1;

    fread(&john_read, sizeof(person_t), 1, person_ptr);
    fclose(person_ptr);

    printf("The person name is %s, %d age old and %.2f tall.\n", john_read.name, john_read.age, john_read.height);



    // - - - CREATE AN ARRAY OF 10 PEOPLE, WRITE OUT INTO BINARY FILE AND READ BACK - - - //

    // CREATE PERSONS AND PUT THEM INTO AN ARRAY //
    person_t esther = {"Esther", 33, 1.59};
    person_t michael = {"Michael", 24, 1.62};
    person_t victoria = {"Esther", 56, 1.76};
    person_t adam = {"Adam", 43, 1.99};
    person_t julie = {"Julie", 13, 1.49};
    person_t tom = {"Tom", 44, 1.74};
    person_t rachel = {"Rachel", 52, 1.79};
    person_t brady = {"Brady", 46, 1.63};
    person_t pamela = {"Pamela", 28, 1.89};

    person_t list_person[10] = {john, esther, michael, victoria, adam, julie, tom, rachel, brady, pamela};

    // WRITE THE ARRAY INTO A BINARY FILE //
    FILE* list_persons_ptr;
    list_persons_ptr = fopen("lists-of-persons.bin", "wb");
    if(list_persons_ptr == NULL)
        return -1;

    for (int i = 0; i < 10; i++) {
        fwrite(&list_person[i], sizeof(person_t), 1, list_persons_ptr);
    }
    fclose(list_persons_ptr);

    // READ THE ARRAY FROM BINARY FILE //
    person_t list_persons_read[10];

    list_persons_ptr = fopen("lists-of-persons.bin", "rb");
    if (list_persons_ptr == NULL)
        return -1;

    for (int i = 0; i < 10; i++) {
        fread(&list_persons_read[i], sizeof(person_t), 1, list_persons_ptr);
    }
    fclose(list_persons_ptr);

    for (int i = 0; i < 10; i++) {
        printf("The person name is %s, %d age old and %.2f meters tall.\n", list_persons_read[i].name,
                                                                     list_persons_read[i].age,
                                                                     list_persons_read[i].height);
    }


    return 0;
}