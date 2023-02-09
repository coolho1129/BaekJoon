#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, cnt = 0;
    cin >> N >> M;
    set<string> s;
    string input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        s.insert(input);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> input;
        if (s.find(input) != s.end())
        {
            cnt++;
        }
    }

    cout << cnt;
}