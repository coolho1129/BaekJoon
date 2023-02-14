#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string input, bomb, result = "";

    cin >> input >> bomb;

    int len = input.size(), bomblen = bomb.size(),top = bomblen - 1 , idx;

    for (int i = 0; i < len; i++)
    {
        result += input[i];
        if (input[i] == bomb[top] && result.size() >= bomb.size())
        {
            idx = result.size() - 1;
            for (int j = idx; j > idx - bomblen; j--)
            {
                if (result[j] != bomb[top])
                {
                    top = bomblen - 1;
                    break;
                }

                else
                {

                    if (top == 0)
                    {
                        result.erase(j, bomblen);
                        top = bomblen - 1;
                    }
                    else
                    {
                        top--;
                    }
                }
            }
        }
    }

    result.empty() ? cout <<"FRULA" : cout << result;
}
