import sys, re


input = sys.stdin.readline


def main():
    string = input().strip()
    n = int(input().strip())
    for _ in range(n):
        command = input().strip()
        a, l, r = command.split()
        cnt = 0
        l = int(l)
        r = int(r)
        temp = string[l : r + 1]
        for alpha in temp:
            if alpha == a:
                cnt += 1

        print(cnt)


if __name__ == "__main__":
    main()
