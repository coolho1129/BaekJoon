from collections import deque
import sys
sys.setrecursionlimit(10**5)

def dfs(visit,graph,start):
    visit[start]=True
    print(start,end=" ")
    graph[start].sort()
    
    for i in range(len(graph[start])):
        next=graph[start][i]
        if visit[next]==False:
            dfs(visit,graph,next)
        

def bfs(visit,graph,start):
    visit[start]=True
    q=deque()
    q.append(start)
    
    
    while len(q)!=0:
        now=q.popleft()
        print(now,end=" ")
        graph[now].sort()
        for i in range(len(graph[now])):
            temp=graph[now][i]
            if(visit[temp]==False):
                q.append(temp)
                visit[temp]=True
    
    
    
def main():
    n,m,start=map(int,input().split())
    graph=[[] for _ in range(n+1)]
    dfs_visit=[False for _ in range(n+1)]
    bfs_visit=[False for _ in range(n+1)]
    
    
    
    for _ in range(m):
        a,b=map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    dfs(dfs_visit,graph,start)
    print()
    bfs(bfs_visit,graph,start)
    
main()
    
    
        


