#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    for (;;)
    {
        cin >> N;
        vector<int> divisor;
        int sum = 1;

        if (N == -1)
            break;

        divisor.push_back(1);

        for (int i = 2; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                divisor.push_back(i);
                sum += i;
            }
        }

        if (sum == N)
        {
            int size = divisor.size();

            cout << N << " " << "=";

            for (int i = 0; i < size; i++)
            {
                cout << " " << divisor[i];
                if (i != size - 1)
                    cout << " "<< "+";
            }
        }
        else
        {
            cout << N << " is NOT perfect.";
        }
        cout << "\n";
    }
}