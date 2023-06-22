import sys
input=sys.stdin.readline

n=int(input())

for _ in range(n):
    x,y=map(int,input().split())
    m=y-x
    print(int((4*m-1)**0.5))