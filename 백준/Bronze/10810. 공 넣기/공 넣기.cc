#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, a, b, c;
    cin >> N >> M;
    int *bascket = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> c;
        for (int j = a; j <= b; j++)
        {
            bascket[j - 1] = c;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << bascket[i] << " ";
    }
}