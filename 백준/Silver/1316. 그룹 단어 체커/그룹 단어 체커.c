#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>


int checker(int len, char str[]);

int main()
{
	int N, cnt = 0;
	char str[101] = { 0 }, check[100] = { 0 };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);
		int len = strlen(str);
		cnt += checker(len, str);

	}
	printf("%d", cnt);
}

int checker(int len, char str[])
{
	int j = 0, index[100] = { 0 }, cnt = 0;
	char check[100] = { 0 };

	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] != str[i])
		{
			check[j] = str[i - 1];
			index[j] = i - 1;
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		for (int k = 1; k <= len-index[i]; k++)
		{
			if (check[i] == str[index[i] + k])
			{
				cnt++;
				break;
			}
		}

	}

	if (cnt == 0)
		return 1;
	else
		return 0;

}