#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct {
    float x;
    float y;
} point_t;

point_t create_point(float x, float y)
{
    point_t p = {x, y};
    return p;
}

float calculate_distance(point_t * point1, point_t *point2)
{
    float square_difference_x = (point2->x - point1->x) * (point2->x - point1->x);
    float square_difference_y = (point2->y - point1->y) * (point2->y - point1->y);
    float sum = square_difference_x + square_difference_y;
    float value = sqrt(sum);
    return value;
}


int main()
{
    point_t p1 =create_point(5, 6);
    point_t p2 =create_point(6, 7);

    float dist_p1p2 = calculate_distance(&p1, &p2);
    printf("Distance: %.3f\n", dist_p1p2);

    return 0;
}