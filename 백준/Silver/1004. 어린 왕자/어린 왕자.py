import sys
input=sys.stdin.readline

T = int(input())
for _ in range(T):
    x1,y1,x2,y2 = map(int, input().split())
    n = int(input())
    cnt = 0
    
    for i in range(n):
        x,y,r = map(int, sys.stdin.readline().split())
        d1 = ((x1-x)**2 + (y1-y)**2)**0.5
        d2 = ((x2-x)**2 + (y2-y)**2)**0.5
       
        if (d1 < r) ^ (d2 < r):
            cnt += 1
    
    print(cnt)
