#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int c;
    int n[1000], cnt[1000] = {0};
    double score[100][1000] = {0}, sum[100] = {0}, avg[100] = {0}, percent[100] = {0};
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%lf", &score[i][j]);
            sum[i] += score[i][j];
        }
        avg[i] = sum[i] / n[i];
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < n[i]; j++)
        {
            if (avg[i] < score[i][j])
                cnt[i]++;
        }
        percent[i] = round(((double)cnt[i] / n[i]) * 100000) / 1000;
    }

    for (int i = 0; i < c; i++)
    {
        printf("%0.3lf%\n", percent[i]);
    }
}