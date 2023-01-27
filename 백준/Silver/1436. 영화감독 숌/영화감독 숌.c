#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int N, cnt = 0, num = 666, div = 1;
    scanf("%d", &N);

    for (;;)
    {
        for (int i = 0; i < 10; i++)
        {
            if ((num / div) % 1000 == 666)
            {
                cnt++;
                break;
            }
            div *= 10;
        }
        div=1;
        if (N == cnt)
        {
            printf("%d", num);
            break;
        }

        num++;
    }
}