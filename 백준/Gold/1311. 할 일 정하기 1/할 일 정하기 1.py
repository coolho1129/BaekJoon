def solve(N, cost):
    max_mask = 1 << N
    dp = [float("inf")] * max_mask
    dp[0] = 0

    for mask in range(max_mask):
        x = 0
        tmp_mask = mask
        while tmp_mask:
            tmp_mask &= tmp_mask - 1
            x += 1

        for j in range(N):
            if not (mask & (1 << j)):
                new_mask = mask | (1 << j)
                dp[new_mask] = min(dp[new_mask], dp[mask] + cost[x][j])

    return dp[max_mask - 1]


def main():
    n = int(input())
    cost = [list(map(int, input().split())) for _ in range(n)]
    print(solve(n, cost))


main()
