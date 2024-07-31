import sys, re


input = sys.stdin.readline


def main():
    string = input().strip()
    n = int(input().strip())
    dp = [[0 for _ in range(len(string) + 1)] for _ in range(26)]
    ls = []
    rs = []
    alphas = []
    for _ in range(n):
        command = input().strip()
        a, l, r = command.split()
        alphas.append(a)
        ls.append(int(l))
        rs.append(int(r))

    for a in set(alphas):
        idx = ord(a) - 97
        for i in range(len(string)):
            dp[idx][i+1] = dp[idx][i] + (1 if string[i] == a else 0)

    for a, r, l in zip(alphas, rs, ls):
        idx = ord(a) - 97
        print(dp[idx][r + 1] - dp[idx][l])


if __name__ == "__main__":
    main()
