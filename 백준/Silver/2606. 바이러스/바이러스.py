import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

global cnt
cnt=0

def dfs(visit,graph,start):
    global cnt
    visit[start]=True
    graph[start].sort()
    for next in graph[start]:
        if visit[next]==False:
            cnt+=1
            dfs(visit,graph,next)
    
    
def main():
    n=int(input())
    m=int(input())
    graph=[[] for _ in range(n+1)]
    dfs_visit=[False for _ in range(n+1)]
    
    
    for _ in range(m):
        a,b=map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    dfs(dfs_visit,graph,1)
    print(cnt)
    
   
    
main()
    
    
        


