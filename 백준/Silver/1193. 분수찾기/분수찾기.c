#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int n = 0, m, k = 1, sum = 0;

    scanf("%d", &x);

    while (!(n * (n + 1) / 2 < x && x <= (n + 1) * (n + 2) / 2))
    {
        n++;
    }

    sum = (n + 1) * n / 2;
    int L = x - sum;
    m = n + 1;

    for (int i = 1; i < L; i++)
    {
        k++, m--;
    }

    n % 2 == 1? printf("%d/%d", k, m):printf("%d/%d ", m, k);
    
}