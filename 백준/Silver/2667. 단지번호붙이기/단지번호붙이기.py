from collections import deque
import sys
input=sys.stdin.readline

def bfs(x,y,visit,counts,graph):
    dx = [1, -1, 0, 0]
    dy = [0, 0, -1, 1]
    q = deque([(x, y)])
    n=len(graph)
    visit[x][y] = True
    count = 0
   
    while q:
        x,y=q.popleft()
        count+=1
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if (0 <= nx < n and 0 <= ny < n and visit[nx][ny]==False and graph[nx][ny]=='1'):
                q.append((nx, ny))
                visit[nx][ny] = True
    
    counts.append(count)

def main():
    n=int(input())
    graph = [input() for _ in range(n)]
    counts=[]
    visit=[[False] * n for _ in range(n)]

    
    for i in range(n):
       for j in range(n):
        if(graph[i][j]=='1' and visit[i][j]==False):
            bfs(i,j,visit,counts,graph)
    
    counts.sort()
    
    print(len(counts))
    for cnt in counts:
        print(cnt)

        
main()