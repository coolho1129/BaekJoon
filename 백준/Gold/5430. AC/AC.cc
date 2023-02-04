#include <iostream>
#include <queue>
using namespace std;

void solve(deque<int> input, string p)
{
    int size = 0;
    int len = p.length(), R = 0;

    for (int i = 0; i < len; i++)
    {
        // cout << p[i] << " ";

        if ('R' == p[i])
            R++;

        else if ('D' == p[i])
        {
            if (input.size() == 0)
            {

                cout << "error"
                     << "\n";
                return;
            }

            else
            {
                if (R % 2 == 1)
                {
                    input.pop_back();
                }
                else
                {
                    input.pop_front();
                }
            }
        }
    }

    size = input.size();

    cout << '[';

    if (input.size() == 0)
    {
        cout << ']' << "\n";
    }

    else if (R % 2 == 1)
    {

        for (int i = size - 1; i > 0; i--)
            cout << input[i] << ',';

        cout << input[0] << ']' << "\n";
    }

    else
    {
        for (int i = 0; i < size - 1; i++)
            cout << input[i] << ',';

        cout << input[size - 1] << ']' << "\n";
    }
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n, arrlen, num = 0;
        deque<int> input;
        string p, arr;

        cin >> p >> n >> arr;
        arrlen = arr.length();

        for (int i = 0; i < arrlen; i++)
        {
            if ('[' != arr[i] && n != 0)
            {
                if (arr[i] == ',' || arr[i] == ']')
                {
                    input.push_back(num);
                    num = 0;
                }
                else
                {
                    num = num * 10 + (arr[i] - '0');
                }
            }
        }
        /*for (int i = 0; i < input.size(); i++)
            cout << input[i] << " ";
        cout << "\n";*/
        solve(input, p);
    }
}