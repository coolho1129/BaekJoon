#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(a, b, t) \
    {                 \
        t = a;        \
        a = b;        \
        b = t;        \
    }

typedef struct Point
{
    long long x;
    long long y;
} Point;

int CCW(Point p1, Point p2, Point p3)
{
    long long D;
    D = p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p1.y * p2.x - p2.y * p3.x - p3.y * p1.x;

    if (D > 0)
        return 1;
    else if (D < 0)
        return -1;
    else
        return 0;
}

int main()
{
    Point p[4] = {
        NULL,
    };
    int D[2] = {0}, ispair = 0, ispair2 = 0;

    for (int i = 0; i < 4; i++)
    {

        scanf("%lld %lld", &p[i].x, &p[i].y);
    }

    D[0] = CCW(p[0], p[1], p[2]) * CCW(p[0], p[1], p[3]);
    D[1] = CCW(p[2], p[3], p[0]) * CCW(p[2], p[3], p[1]);

    Point temp = {NULL};

    if (D[0] == 0 && D[1] == 0)
    {

        if (p[0].x > p[1].x)
        {
            SWAP(p[0], p[1], temp);
        }

        else if (p[0].x == p[1].x)
        {

            if (p[0].y > p[1].y)
            {
                SWAP(p[0], p[1], temp);
            }
        }

        if (p[2].x > p[3].x)
        {
            SWAP(p[2], p[3], temp);
        }

        else if (p[2].x == p[3].x)
        {

            if (p[2].y > p[3].y)
            {
                SWAP(p[2], p[3], temp);
            }
        }

        if (p[0].x < p[3].x)
        {

            ispair = 1;
        }

        else if (p[0].x == p[3].x)
        {

            if (p[0].y <= p[3].y)
            {
                ispair = 1;
            }
        }

        if (p[2].x < p[1].x)
        {
            ispair2 = 1;
        }

        else if (p[2].x == p[1].x)
        {

            if (p[2].y <= p[1].y)
            {
                ispair2 = 1;
            }
        }

        if (ispair && ispair2)
        {
            printf("1");
        }

        else
        {
            printf("0");
        }
    }

    else if (D[0] <= 0 && D[1] <= 0)
    {
        printf("1");
    }

    else
        printf("0");

    return 0;
}