#include <stdio.h>

int num[1000000];

void Eratosthenes()
{
    int idx = 0, start = 2, end = 1000000;

    for (int i = 2; i <= end; i++)
    {
        num[i] = i;
    }

    for (int i = 2; i <= end; i++)
    {
        if (num[i] != 0)
        {
            for (int j = i; j <= end; j += i)
            {
                if (num[j] != 0)
                {
                    num[j] = 0;
                }
            }
            if (i >= start)
            {
                num[i] = i;
            }
        }
    }
}

void Goldpartion(int input)
{
    int count = 0;
    int size = input / 2;
    for (int i = 2; i <= size; i++)
    {
        if (num[i] != 0 && num[input - i] != 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}

int main()
{
    int input, end, N, cnt = 0;
    scanf("%d", &N);
    Eratosthenes();
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input);
        Goldpartion(input);
    }
}