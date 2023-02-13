#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K, sum = 0, result;
    cin >> N >> K;
    vector<int> arry(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arry[i];
    }

    for (int i = 0; i < K; i++)
    {
        sum += arry[i];
    }
    result = sum;

    for (int i = K; i < N; i++)
    {
        // 앞에 값 빼주기
        sum -= arry[i - K];
        // 뒤에 값 넣어주기
        sum += arry[i];

        result = result > sum ? result : sum;
    }

    cout << result;
}