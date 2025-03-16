import sys
from collections import deque

sys.setrecursionlimit(10**6)
input = sys.stdin.readline

def findSCP(tree, parent_table, nodeA, nodeB):
    V = len(tree)
    queue = deque()
    visitedA = [False] * V
    visitedB = [False] * V
    distanceA = [0] * V
    distanceB = [0] * V

    queue.append((nodeA, 0, 'A'))
    visitedA[nodeA] = True
    queue.append((nodeB, 0, 'B'))
    visitedB[nodeB] = True

    min_distance = float('inf')
    scp = None

    while queue:
        node, dist, source = queue.popleft()

        parent = parent_table[node]
        if parent != -1:
            if source == 'A':
                if not visitedA[parent]:
                    visitedA[parent] = True
                    distanceA[parent] = dist + 1
                    queue.append((parent, distanceA[parent], 'A'))
                if visitedB[parent]:
                    total_distance = distanceA[parent] + distanceB[parent]
                    if total_distance < min_distance:
                        min_distance = total_distance
                        scp = parent
            else:
                if not visitedB[parent]:
                    visitedB[parent] = True
                    distanceB[parent] = dist + 1
                    queue.append((parent, distanceB[parent], 'B'))
                if visitedA[parent]:
                    total_distance = distanceA[parent] + distanceB[parent]
                    if total_distance < min_distance:
                        min_distance = total_distance
                        scp = parent

    return scp + 1 if scp is not None else None

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())

        tree = [[] for _ in range(N)]
        parent_table = [-1] * N

        for _ in range(N-1):
            parent, child = map(int, input().split())
            tree[parent-1].append(child-1)
            parent_table[child-1] = parent-1

        nodeA, nodeB = map(int, input().split())
        scp = findSCP(tree, parent_table, nodeA - 1, nodeB - 1)

        print(scp)

if __name__ == '__main__':
    main()
