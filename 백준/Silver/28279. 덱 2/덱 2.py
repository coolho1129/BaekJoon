import sys
from collections import deque
input=sys.stdin.readline

def main():
    deq = deque()
    n = int(input())
    for _ in range(n):
        option = list(map(int, input().split()))
        m = option[0]
        if m == 1:
            x = option[1]
            deq.appendleft(x)
        elif m == 2:
            x = option[1]
            deq.append(x)
        elif m == 3:
            print(-1 if len(deq) == 0 else deq.popleft())
        elif m == 4:
            print(-1 if len(deq) == 0 else deq.pop())
        elif m == 5:
            print(len(deq))
        elif m == 6:
            print(1 if len(deq) == 0 else 0)
        elif m == 7:
            print(-1 if len(deq) == 0 else deq[0])
        elif m == 8:
            print(-1 if len(deq) == 0 else deq[-1])

if __name__ == "__main__":
    main()