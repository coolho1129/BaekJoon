#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SWAP(a, b, t) \
    {                 \
        t = a;        \
        a = b;        \
        b = t;        \
    }

int input[1000000];
int sum[10000000];
void Quicksort(int *arry, int start, int end)
{
    if (start < end)
    {
        int i, j, pivot, temp;
        i = start;
        j = end + 1;
        pivot = arry[start];
        do
        {
            do
                i++;
            while (arry[i] < pivot);

            do
                j--;
            while (arry[j] > pivot);
            if (i < j)
            {
                SWAP(arry[i], arry[j], temp);
            }
        } while (i < j);
        SWAP(arry[start], arry[j], temp);
        Quicksort(arry, start, j - 1);
        Quicksort(arry, j + 1, end);
    }
}

int main()
{
    int n, x, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    Quicksort(input, 0, n - 1);

    scanf("%d", &x);
    int start = 0;

    int end = n - 1;
    while (start < end)
    {

        if (x < input[start] + input[end])
        {
            end--;
        }
        else if (x > input[start] + input[end])
        {
            start++;
            end = n - 1;
        }

        else
        {
            cnt++;
            start++;
            end = n - 1;
        }
    }
    printf("%d", cnt);
}