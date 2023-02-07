#include <bits/stdc++.h>

using namespace std;

void fibo(int n)
{
    pair<int, int> p[41];
    p[0].first = 1, p[0].second = 0;
    p[1].first = 0, p[1].second = 1;

    int result = 0;

    for (int i = 2; i <= n; i++)
    {
        p[i].first = p[i - 2].first + p[i - 1].first;
        p[i].second = p[i - 2].second + p[i - 1].second;
    }
    cout << p[n].first << " " << p[n].second << "\n";
}

// 0 ans: 1 0
// 1 ans: 0 1;
// 2 ans: 1 1;
// 3 ans: 1 2;
// 4 ans: 2 3

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, input;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> input;
        fibo(input);
    }
}