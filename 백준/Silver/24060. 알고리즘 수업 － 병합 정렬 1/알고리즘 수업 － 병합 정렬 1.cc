#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int tmp[5000000], cnt = 0, result = -1;
int N, K;

void merge(vi &arr, int start, int mid, int end);
void merge_sort(vi &arr, int start, int end);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> K;
    vi arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr, 0, N - 1);

    cout << result;
}

void merge(vi &arr, int start, int mid, int end)
{

    int i = start, j = mid + 1, t = 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            tmp[t++] = arr[i++];
        }
        else
        {
            tmp[t++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        tmp[t++] = arr[i++];
    }

    while (j <= end)
    {
        tmp[t++] = arr[j++];
    }

    i = start, t = 1;

    while (i <= end)
    {
        cnt++;

        arr[i++] = tmp[t++];
        if (cnt == K)
        {
            // cout << "K: " << K << " cnt:" << cnt << endl;
            result = arr[i - 1];
        }
    }
}

void merge_sort(vi &arr, int start, int end)
{
    int mid;

    if (start < end)
    {
        mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
