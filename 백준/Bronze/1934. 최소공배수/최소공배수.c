#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


void LCM(int A, int B)
{
	int tmp = 0, a = A, b = B,LCD=1;
		for (;;)
		{
			tmp = A % B;
			A = B;
			B = tmp;
			if (B == 0)
				break;
		}

		LCD = a * b / A;

		printf("%d\n", LCD);
}





int main()
{
	int T,A,B;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		LCM(A, B);
	}

}