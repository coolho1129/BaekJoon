#include <bits/stdc++.h>
using namespace std;

int Combination[31][31];

void pascal_triangle(int N, int M)
{
    for (int n = 0; n <= N; n++)
    {
        for (int k = 0; k <= n; k++)
        {
            if (n == k || k == 0)
                Combination[n][k] = 1;
            else
                Combination[n][k] = (Combination[n - 1][k - 1] + Combination[n - 1][k]);
        }
    }

    cout << Combination[N - 1][M - 1];
}

int main()
{
    int N, M;
    cin >> N >> M;
    pascal_triangle(N, M);
}