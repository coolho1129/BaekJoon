#include <stdio.h>
#include <string.h>

char input[1000002] = {0}, result[1000002] = {0}, bomb[40] = {0};
int main()
{

    scanf("%s %s", input, bomb);
    // printf("%s %s", input, bomb);

    int len = strlen(input), bomblen = strlen(bomb), top = bomblen - 1, size = 0;
    // printf("%d %d", len, top);

    for (int i = 0; i < len; i++)
    {
        result[size++] = input[i];
        if (input[i] == bomb[top] && size >= bomblen)
        {

            for (int j = size - 1; j > size - 1 - bomblen; j--)
            {
                if (result[j] != bomb[top])
                {
                    top = bomblen - 1;
                    break;
                }

                else
                {

                    if (top == 0)
                    {

                        for (int k = 0; k < bomblen; k++)
                        {
                            result[size--] = 0;
                        }

                        top = bomblen - 1;
                    }
                    else
                    {
                        top--;
                    }
                }
            }
        }
    }
    result[size] = 0;

    size ? printf("%s", result) : printf("%s", "FRULA");
}
