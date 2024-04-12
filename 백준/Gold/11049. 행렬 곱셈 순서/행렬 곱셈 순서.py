import sys

input = sys.stdin.readline
INIT = 2**31


def main():
    n = int(input())
    dp = [[0 for _ in range(n)] for _ in range(n)]
    d = [0] * (n + 1)

    for i in range(n):
        row, col = map(int, input().split())
        d[i] = row
        if i != 0:
            d[i + 1] = col

    for dist in range(1, n):
        for left in range(n - dist):
            right = left + dist
            minx = INIT
            for mid in range(left, right):
                minx = min(
                    minx,
                    dp[left][mid]
                    + dp[mid + 1][right]
                    + d[left - 1] * d[mid] * d[right],
                )
            dp[left][right] = minx

    print(dp[0][n - 1])


if "__main__":
    main()