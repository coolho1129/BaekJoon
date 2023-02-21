#include <bits/stdc++.h>
using namespace std;

void Combination(int N, int M)
{
	long n = 1, r = 1, K = M;

	if (M >= N / 2)
	{
		K = N - M;
	}

	for (int i = 1; i <= K; i++)
	{
		n *= N;
		n /= i;
		N--;
	}
	cout << n << "\n";
}

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	for (;;)
	{
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;
		Combination(N, M);
	}
}
