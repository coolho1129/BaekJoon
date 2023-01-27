#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num[1000000];
int prime[10000];
int result[10000];
int primeNumCnt(int input)
{
    int cnt = 0, start = 2, end = input;

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
                prime[cnt++] = i;
        }
    }
    return cnt;
}

void print(int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", prime[i]);
    }
}

void Goldpartion(int cnt, int input)
{
    int index = 0;

    for (int i = 0; i < cnt; i++)
    {
        for (int j = i; j < cnt; j++)
        {
            if (prime[i] + prime[j] == input)
            {

                result[index++] = prime[i];
                result[index++] = prime[j];
            }
        }
    }
    int min = result[1] - result[0];
    int index2 = 0;
    for (int i = 0; i < index; i += 2)
    {
        if (min > result[i + 1] - result[i])
        {
            min = result[i + 1] - result[i];
            index2 = i;
        }
    }

    printf("%d %d\n", result[index2], result[index2 + 1]);
}

int main()
{
    int input, end, N, cnt = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input);
        cnt = primeNumCnt(input);
        Goldpartion(cnt, input);
    }
}