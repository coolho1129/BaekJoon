#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, len;
    long long hash = 0, mul = 1;
    string str;
    cin >> N >> str;
    len = str.length();
    for (int i = 0; i < len; i++)
    {
        hash += (str[i] - 'a' + 1) * mul;
        mul *= 31;
    }

    cout << hash;
    return 0;
}
