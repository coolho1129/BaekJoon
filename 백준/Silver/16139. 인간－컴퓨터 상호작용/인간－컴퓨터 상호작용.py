import sys, re


input = sys.stdin.readline


def main():
    string = input().strip()
    n = int(input().strip())
    dp = [[0 for _ in range(len(string))] for _ in range(26)]
    ls = [0]*n
    rs = [0]*n
    alphas = [0]*n
    for i in range(n):
        command = input().strip()
        a, l, r = command.split()
        alphas[i] = a
        ls[i] = int(l)
        rs[i] = int(r)

    for i in range(26):
        ch = chr(i+97)
        cnt = 0
        for j in range(len(string)):
            if string[j] == ch:
                cnt+=1
            dp[i][j] = cnt

    for a, r, l in zip(alphas, rs, ls):
        idx = ord(a) - 97
        l-=1
        if l==-1:
            print(dp[idx][r])
        else:
            print(dp[idx][r] - dp[idx][l])


if __name__ == "__main__":
    main()
