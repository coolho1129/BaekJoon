#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define size 1000000

main()
{
	char str[size] = { 0 };
	int alphacnt[26] = { 0 }, max = 0, max2 = -1,len=0;

	scanf("%s", str);
	len = strlen(str);

	for (int i = 0; i <len ; i++)
	{
		str[i] = toupper(str[i]);

		for (int j = 0; j <= 26; j++)
		{
			if (str[i] == 'A' + j)
				alphacnt[j]++;
		}
	}

	for (int i = 1; i < 26; i++)
	{
		if (alphacnt[max] <= alphacnt[i])
		{
			max2 = max;
			max = i;
		}

	}

	if (alphacnt[max] == alphacnt[max2])
		printf("?");
	else
		printf("%c", 'A' + max);
}