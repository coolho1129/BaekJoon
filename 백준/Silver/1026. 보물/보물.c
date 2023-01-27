#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>


void sort(int a[], int b[],int N)
{
	int tmp;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;

			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (b[i] < b[j])
			{
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;

			}
		}
	}



}



int main()
{


	int N,S=0;
	scanf("%d", &N);
	int* A = (int*)malloc(sizeof(int) * N);
	int* B = (int*)malloc(sizeof(int) * N);

	
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < N; i++)
		scanf("%d", &B[i]);
		
	sort(A, B, N);
	
	for (int i = 0; i < N; i++)
		S += A[i] * B[i];
	
	printf("%d", S);
		
	

	
}