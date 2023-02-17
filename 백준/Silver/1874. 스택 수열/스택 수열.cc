#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
char pushpop[1000000];

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    stack<int> stack;
    int n = 0, size = 0, num = 1;

    cin >> n;
    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << input[i] << endl;
    // }

    for (int i = 0; i < input[0]; i++)
    {
        stack.push(num++);
        pushpop[size++] = '+';
    }

    stack.pop();
    pushpop[size++] = '-';
    // printf("%d\n", stack.top());

    for (int i = 1; i < n; i++)
    {
        // cout << stack.top() << endl;

        if (input[i] < input[i - 1])
        {
            if (n == stack.top())
            {
                stack.pop();
                pushpop[size++] = '-';
            }

            if (stack.top() != input[i])
            {
                cout << "NO"
                     << "\n";
                return 0;
            }

            else
            {
                stack.pop();
                pushpop[size++] = '-';
            }
        }

        else
        {
            for (; num <= input[i];)
            {
                stack.push(num++);
                pushpop[size++] = '+';
            }
            stack.pop();
            pushpop[size++] = '-';
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << pushpop[i] << "\n";
    }

    return 0;
}