#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that circle
// area = radius * radius * PI

float calculate_area(int radius);


int main()
{
    int radius = 0;
    printf("The radius of your circle is: ");
    scanf("%d", &radius);

    printf("The area of your circle is %.2f.", calculate_area(radius));
    return 0;
}

float calculate_area(int radius)
{
    float area = 0;
    area = (float)radius * radius * PI;
    return area;
}
