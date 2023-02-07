#include <stdio.h>

void fibo(int n)
{
    int p[42] = {1, 0};

    for (int i = 2; i < 42; i++)
    {
        p[i] = p[i - 1] + p[i - 2];
    }

   printf("%d %d\n", p[n], p[n + 1]);
}
// 0 ans: 1 0  
// 1 ans: 0 1; 
// 2 ans: 1 1; 
// 3 ans: 1 2;
// 4 ans: 2 3

int main()
{
   

    int T, input;
    scanf("%d",&T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &input);
        fibo(input);
    }
}