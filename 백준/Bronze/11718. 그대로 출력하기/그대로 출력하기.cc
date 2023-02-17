#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (getline(cin, str))
    {

        cout << str << "\n";
    }

    return 0;
}