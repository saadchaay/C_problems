#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    float x;
    float y;
}point;

float distance_dx_point(point a, point b)
{
    return abs(sqrt((pow(b.x-a.x,2))+(pow(b.y-a.y,2))));
}
