#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define size 1000000

char str[size];

int main()
{
	int cnt = 1;

	gets(str);
	int len = strlen(str);

	if (len == 1 && str[0] == ' ')
		cnt--;

	for (int i = 1; i < len-1 ; i++)
	{
		if (str[i] == ' ')
			cnt++;
	}

	printf("%d", cnt);
	return 0;
}





