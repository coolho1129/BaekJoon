#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int N, M, find;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> find;
        cout << (upper_bound(arr.begin(), arr.end(), find) - lower_bound(arr.begin(), arr.end(), find)) << " ";
    }
}