import sys
input = sys.stdin.readline

def root(ids, i):
    if ids[i] != i:
        ids[i] = root(ids, ids[i])
    return ids[i]

def union(ids, p, q):
    ids[root(ids, p)] = root(ids, q)

def main():
    g = int(input())
    p = int(input())
    ids = [i for i in range(g + 1)]
    cnt = 0
    for _ in range(p):
        gate = int(input())
        docking = root(ids, gate)
        if docking == 0:
            break
        union(ids, docking, docking - 1)
        cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()
