#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T, N;
    cin >> T;
    long long dp[100] = {1, 1, 1};

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        for (int j = 3; j < N; j++)
        {
            dp[j] = dp[j - 2] + dp[j - 3];
        }
        cout << dp[N - 1] << "\n";
    }
}
