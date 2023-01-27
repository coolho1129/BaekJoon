#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct Point
{
    double x;
    double y;
} Point;

double CCW(Point a, Point b, Point c)
{
    double D;
    D = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);

    if (D > 0)
        return 1;
    else if (D < 0)
        return -1;
    else
        return 0;
}
int main()
{
    Point p[4];
    double D[2] = {0};

    for (int i = 0; i < 4; i++)
    {

        scanf("%lf %lf", &p[i].x, &p[i].y);
    }

    D[0] = CCW(p[0], p[1], p[2]) * CCW(p[0], p[1], p[3]);
    D[1] = CCW(p[2], p[3], p[0]) * CCW(p[2], p[3], p[1]);

    if (D[0] <= 0 && D[1] <= 0)
        printf("1");
    else
        printf("0");
}