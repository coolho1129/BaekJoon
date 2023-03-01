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
    int N, M, a, b, c, temp;
    cin >> N >> M;
    int *basket = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        basket[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> c;
        int idx = 0, begin = a - 1;
        int tmp[100] = {0};

        for (int j = c - 1; j < b; j++)
        {
            tmp[idx++] = basket[j];
        }

        for (int j = a - 1; j < c - 1; j++)
        {
            tmp[idx++] = basket[j];
        }

        for (int j = a - 1; j < b; j++)
        {
            basket[j] = tmp[j - a + 1];
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << basket[i] << " ";
    }
}