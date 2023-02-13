#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long long x;
    int n = 0, m, k = 1, sum = 0;

    scanf("%lld", &x);

    while (!(n * (n + 1) / 2 < x && x <= (n + 1) * (n + 2) / 2))
    {
        n++;
    }

    sum = (n + 1) * n / 2;
    int L = x - sum;
    m = n + 1;

    if (n % 2 == 1)
    {

        for (int j = 1; j < L; j++)
        {
            k++, m--;
        }
        printf("%d/%d", k, m);
    }

    else
    {
        for (int j = 1; j < L; j++)
        {
            k++, m--;
        }
        printf("%d/%d ", m, k);
    }
}