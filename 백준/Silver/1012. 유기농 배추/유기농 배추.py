import sys
from collections import deque
input=sys.stdin.readline

def bfs(x,y,visit,graph):
    dx = [1, -1, 0, 0]
    dy = [0, 0, -1, 1]
    q = deque([(x, y)])
    visit[x][y] = 1
    n=len(graph)
    m=len(graph[0])
    
    while q:
        x,y=q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if (0 <= nx < n and 0 <= ny < m and visit[nx][ny]==0 and graph[nx][ny]==1):
                q.append((nx, ny))
                visit[nx][ny] = 1
    
    
    return 1

   
def main():
    t=int(input())
    for _ in range(t):
        n,m,k=map(int,input().split())
        graph=[[0 for _ in range(m)] for _ in range(n)]
        visit=[[0 for _ in range(m)] for _ in range(n)]
        res=0
        for _ in range(k):
            x,y=map(int,input().split())
            graph[x][y]=1
    
        for i in range(n):
            for j in range(m):
                if(graph[i][j]==1 and not visit[i][j]):
                    res+=bfs(i,j,visit,graph)
                    
        print(res)
        
main()