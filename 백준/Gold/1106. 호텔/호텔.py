import sys
input = sys.stdin.readline

def main():
    C, N = map(int, input().split())
    hotels = [tuple(map(int, input().split())) for _ in range(N)]

    INF = 10**9
    dp = [INF] * (C + 101)  
    dp[0] = 0

    for cost, gain in hotels:
        for i in range(gain, C + 101):
            dp[i] = min(dp[i], dp[i - gain] + cost)

    print(min(dp[C:]))

if __name__ == "__main__":
    main()
