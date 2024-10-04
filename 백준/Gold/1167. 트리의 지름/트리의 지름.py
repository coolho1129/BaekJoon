import sys
from heapq import heappush,heappop
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def main():
    n = int(input())
    graph = [[] for _ in range(n)]
    dist = [0]*n
    resdist = [0]*n

    for _ in range(n):
        edge = list(map(int, input().split()))
        v=edge[0]
        for i in range(1,len(edge),2):
            if edge[i] !=-1:
                graph[v-1].append((edge[i]-1,edge[i+1]))
 
    visit = [False]*n    
    def dfs(v,visit,dist):
        visit[v]=True
        for w,cost in graph[v]:
            if not visit[w]:
                dist[w]=dist[v]+cost
                dfs(w,visit,dist)
    
    dfs(0,visit,dist)
    root=dist.index(max(dist))
    resvisit=[0]*n
    dfs(root,resvisit,resdist)
    print((max(resdist)))
    
if __name__ == "__main__":
    main()