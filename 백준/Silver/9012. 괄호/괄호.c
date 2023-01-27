#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(void)
{
	int T,len,top,j;
	char arry[51] = { 0 }, stack[100] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", arry);
		top = -1;
		len = strlen(arry);
		for ( j = 0; j < len; j++)
		{
			if ('(' == arry[j])
				stack[++top] = arry[j];
			else if (')' == arry[j] && top == -1)
				break;
			else if (')' == arry[j])
				stack[top--];
		
		}
		if (top != -1)
			printf("NO\n");
		else if (j != len)
            printf("NO\n");

		else
		 printf("YES\n");
		
	}

}