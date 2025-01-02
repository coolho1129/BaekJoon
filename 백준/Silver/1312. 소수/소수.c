#include <stdio.h>

int main()
{
    int a, b, n, res;
    scanf("%d %d %d", &a, &b, &n);
    for (int i = 0; i < n; i++)
    {
        a = (a % b) * 10;
        res = a / b;
    }
    printf("%d", res);
}