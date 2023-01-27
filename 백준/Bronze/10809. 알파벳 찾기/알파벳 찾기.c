#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	char str[100] = { 0 };
	int alphacnt[26] = {0};
		scanf("%s", str);
		
		for (int i = 0; i <26; i++)
			alphacnt[i]= -1;
		
		for (int i = 0; i < strlen(str); i++)
		{
			for (int j = 0; j < 27; j++)
				if (str[i] == 'a' + j&& alphacnt[j] == -1)
					alphacnt[j] = i;
		}
		for (int i = 0; i < 26; i++)
			printf("%d ", alphacnt[i]);
		
}