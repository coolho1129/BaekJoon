import sys
from collections import deque
input = sys.stdin.readline

def main():
    n, m = map(int, input().split())
    graph = [[] for _ in range(n)]
    indegree = [0] * n

    for _ in range(m):
        seq = list(map(int, input().split()))
        k = seq[0]
        order = seq[1:]
        for i in range(k - 1):
            a, b = order[i] - 1, order[i + 1] - 1
            graph[a].append(b)
            indegree[b] += 1

    q = deque()
    for i in range(n):
        if indegree[i] == 0:
            q.append(i)

    result = []
    while q:
        v = q.popleft()
        result.append(v)
        for w in graph[v]:
            indegree[w] -= 1
            if indegree[w] == 0:
                q.append(w)

    if len(result) == n:
        for v in result:
            print(v + 1)
    else:
        print(0)

if __name__ == "__main__":
    main()
