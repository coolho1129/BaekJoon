#include <stdio.h>

void printStar(int col, int row, int n)
{

    if (((col / n) % 3 == 1) && ((row / n) % 3 == 1))
        printf(" ");
    else
    {
        if (n < 3)
            printf("*");
        else
            printStar(col, row, n / 3);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printStar(i, j, n);
        }
        printf("\n");
    }

    return 0;
}