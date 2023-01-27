#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, find;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> find;
        cout << binary_search(arr, arr + N, find) << "\n";
    }
}