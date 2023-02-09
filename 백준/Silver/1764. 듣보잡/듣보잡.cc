#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, value, size;
    cin >> N >> M;

    vector<string> nolisten(N);
    vector<string> nosee(M);
    vector<string> result(N + M);

    for (int i = 0; i < N; i++)
    {
        cin >> nolisten[i];
    }
    sort(nolisten.begin(), nolisten.end());

    for (int i = 0; i < M; i++)
    {
        cin >> nosee[i];
    }

    sort(nosee.begin(), nosee.end());

    auto iter = set_intersection(nolisten.begin(), nolisten.end(), nosee.begin(), nosee.end(), result.begin());
    result.resize(iter - result.begin());

    size = result.size();
    cout << size << "\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << "\n";
    }
}