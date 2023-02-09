#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    string input, sub;
    cin >> input;

    set<string> substring;
    int len = input.length();

    for (int i = 0; i < len; i++)
    {
        sub = "";
        for (int j = i; j < len; j++)
        {
            sub += input[j];
            substring.insert(sub);
        }
    }

    cout << substring.size();
}