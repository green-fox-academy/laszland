#include "pi.h"

float calculate_area(int radius)
{
    float area = 0;
    area = (float)radius * radius * PI;
    return area;
}

float calculate_circumference(int radius)
{
    float circumference = 0;
    circumference = 2 * (float)radius * PI;
    return circumference;
}
