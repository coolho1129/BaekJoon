#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long a(long long n)
{

    if (n % 2 == 0)
    {
        n /= 2;
        return n * (n + 1) + 1;
    }
    else
    {
        n = n / 2 + 1;
        return n * n + 1;
    }
}

int main()
{
    long long x, y, L;
    long long arry[100000] = {0};

    for (int i = 0; i < 100000; i++)
        arry[i] = a(i);

    scanf("%lld %lld", &x, &y);
    L = y - x;

    if (L == 0)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 1;; i++)
    {
        if (arry[i - 1] <= L && L < arry[i])
        {
            printf("%d\n", i);
            break;
        }
    }
}
