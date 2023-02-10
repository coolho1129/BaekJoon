#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> sitePassword;

    int N, M;
    cin >> N >> M;
    string site, password, search;
    for (int i = 0; i < N; i++)
    {
        cin >> site >> password;
        sitePassword.insert({site, password});
    }

    for (int i = 0; i < M; i++)
    {
        cin >> search;
        cout << sitePassword[search] << "\n";
    }
}