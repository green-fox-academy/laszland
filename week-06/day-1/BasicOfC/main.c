#include <stdio.h>
#include <stdlib.h>

#include "pi.h"


int main()
{
    int radius = 0;
    printf("The radius of your circle is: ");
    scanf("%d", &radius);

    printf("The area of your circle is %.2f.\n", calculate_area(radius));
    printf("The circumferences of your circle is %.2f.\n", calculate_circumference(radius));
    return 0;
}

