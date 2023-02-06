#include <bits/stdc++.h>

using namespace std;

long long binarySearch(long long *lan, long long start, long long end, long long size, long long find)
{
    long long mid = (start + end) / 2;
    long long sum = 0;
    for (long long i = 0; i < size; i++)
    {
        sum += lan[i] / mid;
    }
    if (sum >= find)
    {
        if (start == mid)
            return mid;
        else
            return binarySearch(lan, mid, end, size, find);
    }
    else
    {
        if (start == mid)
            return start;
        else
            return binarySearch(lan, start, mid, size, find);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long N, K;

    cin >> K >> N;
    // cout << K << N;

    long long *lan = new long long[K];
    for (long long i = 0; i < K; i++)
    {

        cin >> lan[i];
    }

    sort(lan, lan + K);
    cout << binarySearch(lan, 1, lan[K - 1] + 1, K, N);
}