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
    int *basket = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        basket[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < (b - a) / 2 + 1; j++)
        {
            SWAP(basket[a + j - 1], basket[b - j - 1], temp);
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << basket[i] << " ";
    }
}