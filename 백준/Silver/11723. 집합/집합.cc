#include <bits/stdc++.h>
#define fastio cin.tie(0), cout.tie(0), ios::sync_with_stdio(false)

using namespace std;

int main()
{
    fastio;
    int T;
    cin >> T;
    int S[20] = {0};

    for (int i = 0; i < T; i++)
    {
        string op;
        int x;
        cin >> op;

        if (!op.compare("all"))
        {
            for (int i = 0; i < 20; i++)
            {
                S[i] = 1;
            }
            continue;
        }

        else if (!op.compare("empty"))
        {
            for (int i = 0; i < 20; i++)
            {
                S[i] = 0;
            }
            continue;
        }

        cin >> x;

        if (!op.compare("toggle"))
        {

            if (!S[x - 1])
            {
                S[x - 1] = 1;
            }

            else
            {
                S[x - 1] = 0;
            }
        }

        else if (!op.compare("add"))
        {

            if (!S[x - 1])
            {
                S[x - 1] = 1;
            }
        }

        else if (!op.compare("remove"))
        {

            if (S[x - 1])
            {
                S[x - 1] = 0;
            }
        }
        else if (!op.compare("check"))
        {

            cout << S[x - 1] << "\n";
        }
    }
}