import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

global cnt
cnt=1

def dfs(visit,graph,start,result):
    global cnt
    visit[start]=True
    result[start]=cnt
    graph[start].sort()
    for next in graph[start]:
        if visit[next]==False:
            cnt+=1
            dfs(visit,graph,next,result)
    
    
def main():
    n,m,start=map(int,input().split())
    graph=[[] for _ in range(n+1)]
    dfs_visit=[False for _ in range(n+1)]
    result=[0 for _ in range(n+1)]
    
    for _ in range(m):
        a,b=map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    dfs(dfs_visit,graph,start,result)
    for i in range(n+1):
        if i!=0:
            print(result[i])
    
   
    
main()
    
    
        


