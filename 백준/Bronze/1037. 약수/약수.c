#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void sort(int n,int a[])
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

}
int main()
{
	int n=0, arry[50] = { 0 };
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arry[i]);
	}
	sort(n, arry);

		printf("%d ", arry[0] * arry[n - 1]);
	
}