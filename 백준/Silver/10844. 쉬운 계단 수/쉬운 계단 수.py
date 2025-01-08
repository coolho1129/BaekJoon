import sys

sys.setrecursionlimit(10**6)
input = sys.stdin.readline


def main():
    n = int(input())
    dp = [[0 for _ in range(10)] for _ in range(101)]
    DIV = 1000000000
    res = 0

    for j in range(1, 10):
        dp[1][j] = 1

    for i in range(2, n + 1):
        for j in range(10):
            if j == 0:
                dp[i][j] = dp[i - 1][1] % DIV
            elif j == 9:
                dp[i][j] = dp[i - 1][8] % DIV
            else:
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DIV

    print(sum(dp[n]) % DIV)


if __name__ == "__main__":
    main()
