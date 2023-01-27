#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

int main()
{
	char str[15] = { 0 };
	int len = 0, minsec = 0;;

	scanf("%s", str);
	
	len = strlen(str);
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == 'A' + j)
			{
				if (j < 3)//abc
					minsec += 3;
				else if (j < 6)//def
					minsec += 4;
				else if (j < 9)//ghi
					minsec += 5;
				else if (j < 12)//jkl
					minsec += 6;
				else if (j < 15)//mno
					minsec += 7;
				else if (j < 19)//pqrs
					minsec += 8;
				else if (j < 22)//tuv
					minsec += 9;
				else if (j < 26)//wzyz
					minsec += 10;
			}
		}
	}
	printf("%d", minsec);
}