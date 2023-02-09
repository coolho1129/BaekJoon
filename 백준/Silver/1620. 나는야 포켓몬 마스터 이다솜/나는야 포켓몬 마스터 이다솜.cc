#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, value;
    cin >> N >> M;
    map<string, int> name;
    map<int, string> num;
    string input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        name.insert({input, i + 1});
        num.insert({i + 1, input});
    }

    for (int i = 0; i < M; i++)
    {
        cin >> input;

        if ((1 <= input[0] - '0' && input[0] - '0' <= 9))
        {
            value = stoi(input);
            cout << num[value] << "\n";
        }

        else
        {

            cout << name[input] << "\n";
        }
    }
}