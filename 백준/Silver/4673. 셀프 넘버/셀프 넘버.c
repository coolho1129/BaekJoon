#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int d(int num)
{
	return num + num % 10 + (num / 10) % 10 +(num/100)%10+ num/1000;
}

int main()
{
	int num[10001] = { 0 };
	for (int i = 1; i < 10001; i++)
	{
		if (d(i) < 10001)
			num[d(i)] = d(i);

	}
	for (int i = 1; i < 10001; i++)
	{
		if (num[i] == 0)
			printf("%d\n", i);
	}

}