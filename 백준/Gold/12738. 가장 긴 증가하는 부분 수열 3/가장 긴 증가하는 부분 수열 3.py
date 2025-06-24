import sys
import bisect
input = sys.stdin.readline

def main():
    n = int(input())
    arr = list(map(int, input().split()))
    dp = []

    for num in arr:
        idx = bisect.bisect_left(dp, num)
        if idx == len(dp):
            dp.append(num)
        else:
            dp[idx] = num

    print(len(dp))

if __name__ == "__main__":
    main()
