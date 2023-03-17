def digit_product(n):
    prod = 1
    while n > 0:
        if n % 10 != 0:
            prod *= n % 10
        n //= 10
    return prod

A, B = map(int, input().split())

MAXN = int(1e18)
dp = [[0] * (B+1) for _ in range(MAXN+1)]
for i in range(1, MAXN+1):
    dp[i][1] = 1
for j in range(2, B+1):
    for i in range(1, MAXN+1):
        dp[i][j] = dp[i][j-1]
        if j <= i and i % j == 0:
            p = j
            while i % p == 0:
                dp[i][j] += dp[i//p][j-1]
                p *= j

ans = dp[1][B] - dp[1][A-1]
print(ans)
