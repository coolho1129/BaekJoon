#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed;
    cout.precision(1);
    string input;
    double result = 0.0;

    cin >> input;

    switch (input[0])
    {
    case 'A':
        result = 4.0;
        break;
    case 'B':
        result = 3.0;
        break;
    case 'C':
        result = 2.0;
        break;
    case 'D':
        result = 1.0;
        break;
    }

    result += (input[1] == '+') ? 0.3 : ((input[1] == '-') ? -0.3 : 0);

    cout << result;
}