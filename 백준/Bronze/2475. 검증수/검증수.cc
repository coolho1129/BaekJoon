#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int input[5], sum = 0;
    string num, rever;
    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
        sum += input[i] * input[i];
    }

    cout << sum % 10 << "\n";
    return 0;
}