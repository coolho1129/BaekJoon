#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>



main()
{
	char str[100] = { 0 };
	char croatia[][3] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int len = 0,alphacnt=0,croatiacnt=0;
	scanf("%s", str);

	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (((str[i] == 'l') || (str[i] == 'n')) && (str[i + 1] =='j'))
			i++,croatiacnt++;
		else if (((str[i] == 'c') || (str[i] == 's') || (str[i] == 'z')) && (str[i + 1] == '='))
			i++,croatiacnt++;
		else if (((str[i] == 'c') || (str[i] == 'd')) && (str[i + 1] == '-'))
			i++,croatiacnt++;
		else if ((str[i] == 'd') &&(str[i+1] == 'z') && (str[i + 2] == '='))
			i++,croatiacnt++;
		else
		{
			for (int j = 0; j < 26; j++)
			{

				if (str[i] == 'a' + j)
					alphacnt++;
			}
		}
	}
	//printf("%d ", croatiacnt);
	//printf("%d", alphacnt);
	printf("%d", (croatiacnt + alphacnt));

}