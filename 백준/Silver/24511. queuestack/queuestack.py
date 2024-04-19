import sys
from collections import deque

input = sys.stdin.readline


def main():
    n = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    m = int(input())
    C = list(map(int, input().split()))
    que = []

    for a, b in zip(A, B):
        if a == 0:
            que.append(b)

    que.reverse()
    que = deque(que)

    for c in C:
        if not que:
            print(c, end=" ")

        else:
            que.append(c)
            print(que.popleft(), end=" ")


if "__main__":
    main()
