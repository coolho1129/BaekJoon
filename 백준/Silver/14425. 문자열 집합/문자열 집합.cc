#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, cnt = 0;
    cin >> N >> M;
    map<string, string> m;
    string input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        m.insert({input, input});
    }

    for (int i = 0; i < M; i++)
    {
        cin >> input;
        if (m.find(input) != m.end())
        {
            cnt++;
        }
    }

    cout << cnt;
}