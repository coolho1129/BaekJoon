#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, money;
    cin >> N >> money;

    vector<int> won(N);
    for (int i = 0; i < N; i++)
    {
        cin >> won[i];
    }

    long long result = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        if (money >= won[i])
        {
            result += money / won[i];
            money %= won[i];
        }
    }

    cout << result;
}
