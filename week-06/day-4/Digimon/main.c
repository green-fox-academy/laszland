#include <stdio.h>

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

typedef enum {
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA
} digivolution_t;

typedef struct {
    char name[128];
    int age;
    int health;
    char name_tamer[256];
    digivolution_t level;

} digimon_t;

int get_minimum_health(digimon_t* list[], int length)
{
    int index_min_health = 0;
    int min_health = list[0]->health;
    for (int i = 0; i < length; ++i) {
        if (list[i]->health < min_health) {
            min_health = list[i]->health;
            index_min_health = i;
        }
    }
    return index_min_health;
}

int get_digim_same_level(digimon_t* list[], int length, digivolution_t level)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (list[i]->level == level)
            counter++;
    }
    return counter;
}

int get_same_tamer(digimon_t* list[], int length, char tamers_name)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (list[i]->name_tamer == tamers_name)
            counter++;
    }
    return counter;
}

float average_health_by_tamer(digimon_t* list[], int length, char name_tamer)
{
    int counter = 0;
    int sum_health = 0;

    for (int i = 0; i < length; ++i) {
        if (list[i]->name_tamer == name_tamer) {
            counter++;
            sum_health += list[i]->health;
        }
    }
    float average = (float) sum_health / counter;
    return average;
}



int main()
{
    digimon_t dig1 = {"Bemmon", 20, 99, "John", ROOKIE};
    digimon_t dig2 = {"Boogiemon", 12, 50, "Sarah", ULTIMATE};
    digimon_t dig3 = {"Gaomon", 2, 43, "Kevin", BABY};
    digimon_t dig4 = {"Hubmon", 34, 12, "Monica", IN_TRAINING};
    digimon_t dig5 = {"Kyubimon", 77, 78, "Adam", CHAMPION};
    digimon_t dig6 = {"Monodramon", 69, 100, "Victoria", MEGA};

    digimon_t* digimons[] = {&dig1, &dig2, &dig3, &dig4, &dig5, &dig6};
    int length_digimons = sizeof(digimons) / sizeof(digimons[0]);



    return 0;
}