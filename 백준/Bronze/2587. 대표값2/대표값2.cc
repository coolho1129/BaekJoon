#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input[5]={0}, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
        sum += input[i];
    }

    sort(input, input + 5);

    cout << (sum / 5) << endl;
    cout << input[2] << endl;
}