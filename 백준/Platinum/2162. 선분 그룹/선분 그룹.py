import sys

input=sys.stdin.readline


ids = []
size = []

def root(i):
        while i != ids[i]: i = ids[i]
        return i

def connected(p, q):
    return root(p) == root(q)

def union(p, q):    
    id1, id2 = root(p), root(q)
    if id1 == id2: return
    if size[id1] <= size[id2]: 
        ids[id1] = id2
        size[id2] += size[id1]
    else:
        ids[id2] = id1
        size[id1] += size[id2]

import sys
input = sys.stdin.readline

def ccw(a, b, c):
    D = (a[0]*b[1] + b[0]*c[1] + c[0]*a[1]
         - a[1]*b[0] - b[1]*c[0] - c[1]*a[0])
    if D > 0:
        return 1
    elif D < 0:
        return -1
    else:
        return 0

def is_cross(segment1, segment2):
    a1, a2, b1, b2, idx1 = segment1
    c1, c2, d1, d2, idx2 = segment2
    A = (a1, a2)
    B = (b1, b2)
    C = (c1, c2)
    D = (d1, d2)
    D1 = ccw(A, B, C) * ccw(A, B, D)
    D2 = ccw(C, D, A) * ccw(C, D, B)
    if D1 == 0 and D2 == 0:
        if A > B:
            A, B = B, A
        if C > D:
            C, D = D, C
        if A <= D and C <= B:
            return True
        else:
            return False
    elif D1 <= 0 and D2 <= 0:
        return True
    else:
        return False


def main():
    n = int(input())
    segments = []
    
    for idx in range(n):
        ids.append(idx)
        size.append(1) 
   
        
    for idx in range(n):
        x1, y1, x2, y2 = map(int, input().split())
        segments.append((x1, y1, x2, y2, idx)) 
        
    for i in range(n):
        for j in range(i+1, n):
            if is_cross(segments[i], segments[j]):
                union(i, j)
                
    print(len(set([root(i) for i in range(n)])))
    print(max(size))
   
        
if __name__ == "__main__":
    main()