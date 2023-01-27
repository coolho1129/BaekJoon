#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>



int main(void) 
{
    int n, score, sum;
    char OX[80];

    scanf("%d", &n);

     for (int i = 0; i < n; i++)
     {
            sum = 0;
            score = 1;
            scanf("%s", OX);
            for (int j = 0; j < strlen(OX); j++) {
                if (OX[j] == 'O') {
                    sum += score;
                    score++;
                }
                if (OX[j] == 'X')  
                    score = 1;
            }
            printf("%d\n", sum);
        }
 }
