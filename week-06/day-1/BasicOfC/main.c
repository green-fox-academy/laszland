#include <stdio.h>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    int sideA = 0;
    int sideB = 0;
    int sideC = 0;

    int surface = 0;
    int volume = 0;

    printf("Type the length of the first side!\n");
    scanf("%d", &sideA);
    printf("Type the length of the second side!\n");
    scanf("%d", &sideB);
    printf("Type the length of the third side!\n");
    scanf("%d", &sideC);

    surface = 2 * sideA * sideB + 2 * sideB * sideC + 2 * sideC * sideA;
    volume = sideA * sideB * sideC;

    printf("Surface: %d\n", surface);
    printf("Volume: %d\n", volume);

    return 0;
}