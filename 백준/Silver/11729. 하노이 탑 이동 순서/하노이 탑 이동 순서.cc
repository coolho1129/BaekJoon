#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
void hanoi(int N, int A, int B, int C)
{

    if (N == 1)
    {
        cout << A << " " << C << "\n";
    }

    else
    {
        hanoi(N - 1, A, C, B);
        cout << A << " " << C << "\n";
        hanoi(N - 1, B, A, C);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cout << int(pow(2, N)) - 1 << "\n";

    hanoi(N, 1, 2, 3);
}