import sys
import bisect
input = sys.stdin.readline

def main():
    n = int(input())
    arr = list(map(int, input().split()))
    dp = []
    idxs = []
    from_idx = [-1] * n

    for i, num in enumerate(arr):
        idx = bisect.bisect_left(dp, num)
        if idx == len(dp):
            dp.append(num)
            idxs.append(i)
        else:
            dp[idx] = num
            idxs[idx] = i
        if idx != 0:
            from_idx[i] = idxs[idx - 1]

    print(len(dp))

    last_idx = idxs[-1]
    result = []
    while last_idx != -1:
        result.append(arr[last_idx])
        last_idx = from_idx[last_idx]
    result.reverse()
    print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()
