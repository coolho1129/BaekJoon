import sys
sys.setrecursionlimit(10**5)
input = sys.stdin.readline

global cnt
cnt=1

def dfs(visit,graph,start):
    global cnt
    visit[start]=cnt
    graph[start].sort()
    for i in range(len(graph[start])):
        next=graph[start][i]
        if not visit[next]:
            cnt+=1
            dfs(visit,graph,next)
    
    
def main():
    n,m,start=map(int,input().split())
    graph=[[] for _ in range(n+1)]
    dfs_visit=[0 for _ in range(n+1)]
    
    for _ in range(m):
        a,b=map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    dfs(dfs_visit,graph,start)
    for i in range(n+1):
        if i!=0:
            print(dfs_visit[i])
    
   
    
main()
    
    
        


