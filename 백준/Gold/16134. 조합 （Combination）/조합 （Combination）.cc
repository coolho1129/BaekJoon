#include <bits/stdc++.h>
#define P 1000000007LL
#define ll long long

using namespace std;
ll factorial[1000001];   // factorial 값을 저장할 배열
ll inverseFact[1000001]; // factorial의 역원을 저장할 배열
 
ll power(ll x, ll y) // 분할 정복을 이용하여 x^y 구하기
{
    ll result = 1;

    while (y > 0)
    {
        if (y % 2 == 1)
        {
            result *= x;
            result %= P;
        }
        x *= x;
        x %= P;
        y /= 2;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    factorial[0] = 1;
    factorial[1] = 1;

    for (int i = 2; i < 1000001; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % P; // factorial 계산
    }
    inverseFact[1000000] = power(factorial[1000000], P - 2); // 페르마의 소정리를 이용하여 factorial[4000000]의 역원 구함

    for (int i = 999999; i > 0; i--)
        inverseFact[i] = (inverseFact[i + 1] * (i + 1)) % P;

    ll N, R, K, result = 1;
    cin >> N >> R;
    K = N - R;

    if (!(N == R || R == 0))
    {
        result = (((factorial[N] % P) * (inverseFact[K] % P)) % P * (inverseFact[R] % P)) % P;
    }

    cout << result;
}