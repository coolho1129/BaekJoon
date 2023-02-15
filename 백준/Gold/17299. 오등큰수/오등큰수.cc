#include <bits/stdc++.h>

using namespace std;
int F[100000000] = {0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, cnt = 0;
    cin >> N;
    vector<int> A(N), NGE(N);
    stack<int> s;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        F[A[i]]++;
    }

    for (int i = N - 1; i >= 0; i--)
    {

        while (!s.empty() && F[A[i]] >= F[s.top()])
        {
            s.pop();
        }

        s.empty() ? NGE[i] = -1 : NGE[i] = s.top();

        s.push(A[i]);
    }

    for (auto result : NGE)
    {
        cout << result << " ";
    }
}
