#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    int R;
    scanf("%d", &R);
    printf("%lf\n%lf", pow(R, 2) * M_PI, 2 * pow(R, 2));
}