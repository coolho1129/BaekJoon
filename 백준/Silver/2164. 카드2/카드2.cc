#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<int> que;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        que.push(i);
    }

    while (que.size() != 1)
    {
        que.pop();
        que.push(que.front());
        que.pop();
    }

    cout << que.front() << "\n";
}