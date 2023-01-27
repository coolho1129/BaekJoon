#include <stdio.h>
#include <string.h>

int deque[20000] = {0}, first = 10000, last = 9999;

int main()
{
    int n, input;
    scanf("%d", &n);

    char operator[100] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%s", operator);
        if (strcmp("push_front", operator) == 0)
        {
            scanf("%d", &input);
            deque[--first] = input;
        }
        else if (strcmp("push_back", operator) == 0)
        {
            scanf("%d", &input);
            deque[++last] = input;
        }

        else if (strcmp("pop_front", operator) == 0)
        {
            if (last - first == -1)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n", deque[first++]);
        }

        else if (strcmp("pop_back", operator) == 0)
        {
            if (last - first == -1)
            {
                printf("-1\n");
                continue;
            }

            printf("%d\n", deque[last--]);
        }

        else if (strcmp("size", operator) == 0)
        {
            printf("%d\n", last - first + 1);
        }

        else if (strcmp("empty", operator) == 0)
        {
            if (last - first == -1)
                printf("1\n");
            else
                printf("0\n");
        }

        else if (strcmp("front", operator) == 0)
        {
            if (last - first == -1)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n", deque[first]);
        }

        else if (strcmp("back", operator) == 0)
        {
            if (last - first == -1)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n", deque[last]);
        }
    }
}