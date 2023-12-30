import sys
from collections import deque
input=sys.stdin.readline

def bfs(start,end):
    q = deque()
    q.append(start)
    dx=[-1,1,2]
    visit=[0 for _ in range(200001)]
    while(q):
        x=q.popleft()
        if x==end:
            return 0
        for i in range(3):
            if i==2:
                nx = x*dx[i]
            else:
                nx = x + dx[i]
                
            if nx == end:
                return visit[x]+1

            if 0<=nx<=200000 and visit[nx]==0:
                q.append(nx)
                visit[nx]=visit[x]+1
            

def main():
    n,k = map(int,input().split())
    print(bfs(n,k))
 
        
if __name__ == "__main__":
    main()