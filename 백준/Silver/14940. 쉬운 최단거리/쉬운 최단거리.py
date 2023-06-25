import sys
from collections import deque
input=sys.stdin.readline

def find_start(graph,n,m):
    for i in range(n):
        for j in range(m):
            if(graph[i][j]==2):
                return i,j

def bfs_shortface(graph,n,m):
    visit=[[False for _ in range(m)] for _ in range(n)]
    distance=[[0  for _ in range(m)]for _ in range(n)]

    i,j=find_start(graph,n,m)
    q = deque()
    q.append((i,j))
    visit[i][j] = True
    distance[i][j] = 0
   
    while q:
        node = q.popleft()
        x,y = node
        neighbors = [(x-1, y), (x+1, y), (x, y-1), (x, y+1)]
        
        for neighbor in neighbors:
            nx, ny = neighbor

            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
    
            elif graph[nx][ny] == 1 and visit[nx][ny]==False:
                q.append(neighbor)
                visit[nx][ny] = True
                distance[nx][ny] = distance[x][y] + 1
                
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1 and visit[i][j]==False:
                distance[i][j]=-1
        
    return distance
   
def main():
    n,m=map(int,input().split())
    graph=[list(map(int,input().split())) for _ in range(n)]
    
    distance=bfs_shortface(graph,n,m)
    
    for dis in distance:
        for res in dis:
            print(res,end=" ")
        print()
        
main()