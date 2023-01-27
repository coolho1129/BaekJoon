#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int input;
    string num, rever;
    for (;;)
    {
        cin >> input;
        if (input == 0)
            break;

        num = to_string(input);
        rever = to_string(input);
        reverse(rever.begin(), rever.end());

        if (rever.compare(num) == 0)
            cout << "yes"<< "\n";
        else
            cout << "no"<< "\n";
    }
    return 0;
}