#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    long long minute = 0, result = 0;
    cin >> N;
    vector<int> input(N);

    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }

    sort(input.begin(), input.end());

    for (int i = 0; i < N; i++)
    {
        minute += input[i];
        result += minute;
    }

    cout << result;
}
