#include <bits/stdc++.h>
#define SWAP(a, b, t) \
    {                 \
        t = a;        \
        a = b;        \
        b = t;        \
    }
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, a, b, temp;
    cin >> N >> M;
    int *bascket = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        bascket[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        SWAP(bascket[a - 1], bascket[b - 1], temp);
    }

    for (int i = 0; i < N; i++)
    {
        cout << bascket[i] << " ";
    }
}