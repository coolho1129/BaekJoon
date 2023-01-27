#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> buffer;
    int n, input;
    cin >> n;

    for (;;)
    {
        cin >> input;
        if (input == -1)
        {
            break;
        }
        else if (input == 0)
        {
            buffer.pop();
        }
        else if (buffer.size() < n)
        {
            buffer.push(input);
        }
    }

    if (buffer.size() == 0)
    {
        cout << "empty";
    }

    while (buffer.size() != 0)
    {

        cout << buffer.front() << " ";
        buffer.pop();
    }
}