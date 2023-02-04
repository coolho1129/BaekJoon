#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, len;
    long long hash = 0, mul = 1,mod=1234567891;
    string str;
    cin >> N >> str;
    len = str.length();
    for (int i = 0; i < len; i++)
    {
        hash += (str[i] - 'a' + 1) * mul%mod;
        mul = mul*31%mod;
    }

    cout << hash%mod;
    return 0;
}
