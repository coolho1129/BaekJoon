#include <bits/stdc++.h>
using namespace std;

static long long factorial[19];
static long long ans;

long long countAllPermutations(const vector<int> &freq) {
    int sz = 0;
    for (int c : freq) sz += c;
    long long ret = factorial[sz];
    for (int c : freq) {
        if (c > 1) ret /= factorial[c];
    }
    return ret;
}

long long countPermutationsUpTo(const vector<int> &freq, long long value) {
    if (value <= 0) return 0;
    string s = to_string(value);
    int n = (int)s.size();
    int totalDigits = 0;
    for (int c : freq) totalDigits += c;
    if (totalDigits < n) return countAllPermutations(freq);
    if (totalDigits > n) return 0;
    long long ret = 0;
    vector<int> cur = freq;
    for (int i = 0; i < n; i++) {
        int lim = s[i] - '0';
        for (int d = 1; d < lim; d++) {
            if (cur[d - 1] > 0) {
                cur[d - 1]--;
                ret += countAllPermutations(cur);
                cur[d - 1]++;
            }
        }
        if (lim < 1 || lim > 9 || cur[lim - 1] == 0) {
            return ret;
        }
        cur[lim - 1]--;
    }
    return ret + 1;
}

void makeFreqDFS(int digit, int left, vector<int> &freq, long long N) {
    if (digit == 9) {
        if (!left) {
            __int128 p = 1;
            for (int d = 0; d < 9; d++) {
                for (int c = 0; c < freq[d]; c++) {
                    p *= (d + 1);
                }
            }
            long long mx = (long long)(N / (long long)p);
            if (mx > 0) {
                ans += countPermutationsUpTo(freq, mx);
            }
        }
        return;
    }
    for (int i = 0; i <= left; i++) {
        freq[digit] = i;
        makeFreqDFS(digit + 1, left - i, freq, N);
        freq[digit] = 0;
    }
}

long long countSelfProductUpTo(long long N) {
    if (N < 1) return 0;
    ans = 0;
    vector<int> freq(9, 0);
    for (int length = 1; length <= 18; length++) {
        makeFreqDFS(0, length, freq, N);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    factorial[0] = 1;
    for (int i = 1; i <= 18; i++) {
        factorial[i] = factorial[i - 1] * i;
    }

    long long A, B;
    cin >> A >> B;
    cout << countSelfProductUpTo(B) - countSelfProductUpTo(A - 1) << "\n";
    return 0;
}
