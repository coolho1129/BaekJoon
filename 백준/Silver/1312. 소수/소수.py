import sys

sys.setrecursionlimit(10**6)
input = sys.stdin.readline


def main():
    a, b, n = map(int, input().split())

    for _ in range(n):
        a = (a % b) * 10
        res = a // b

    print(res)


if __name__ == "__main__":
    main()
