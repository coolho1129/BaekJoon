from collections import deque
import sys
sys.setrecursionlimit(10**6)
input=sys.stdin.readline
global cnt
cnt=0
def bfs(visit,graph,start,result):
    global cnt
    visit[start]=True
    q=deque()
    q.append(start)
    
    while len(q)!=0:
        now=q.popleft()
        cnt+=1
        result[now]=cnt
        graph[now].sort()
        for next in graph[now]:
            if(visit[next]==False):
                q.append(next)
                visit[next]=True
    
    
    
def main():
    n,m,start=map(int,input().split())
    graph=[[] for _ in range(n+1)]
    bfs_visit=[False for _ in range(n+1)]
    result=[0 for _ in range(n+1)]
    
    
    
    for _ in range(m):
        a,b=map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    bfs(bfs_visit,graph,start,result)
    for i in range(1,n+1):
        print(result[i])
    
main()
    
    
        


