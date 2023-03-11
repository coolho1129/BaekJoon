import sys

input = sys.stdin.readline

def gcd_func(a, b):
    while b != 0:
        a, b = b, a % b

    return a

def solve():
    N = int(input())

    trees = [int(input()) for _ in range(N)]

    gaps = []
    for i in range(1, N):  # 가로수의 간격
        gaps.append(trees[i] - trees[i - 1])

    gaps_set = list(set(gaps))  # 간격 중복 제거

    gcd = gaps_set[0]
    for i in range(1, len(gaps_set)):  # 간격들의 최대공약수
        gcd = gcd_func(gcd, gaps_set[i])

    cnt = 0
    for gap in gaps:  # 간격을 최대공약수로 나누고 1을 빼주면 심을 나무 숫자
        cnt += gap // gcd - 1

    print(cnt)

solve()