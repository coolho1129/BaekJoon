#include <stdio.h>
#include <string.h>
int cnt = 0;
int recursion(char *s, int l, int r)
{

    cnt++;

    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    char str[10001] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%s", str);
        printf("%d ", isPalindrome(str));
        printf("%d\n", cnt);
        cnt = 0;
    }
}