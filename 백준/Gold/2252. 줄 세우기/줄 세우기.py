import sys
from heapq import heappush,heappop
input=sys.stdin.readline

def topsort(g):
    def dfs(v):
        visited[v]=True
        for w in g[v]:
            if not visited[w]:
                dfs(w)
        reverseList.append(v)
    n = len(g)
    visited = [False for _ in range(n)]
    reverseList = []
    
    for v in range(n):
        if not visited[v]:
            dfs(v)
    
    reverseList.reverse()
    return reverseList
        
def main():
    n,m = map(int,input().split())
    graph = [[] for _ in range(n)]
   
    for _ in range(m):
        v,w = map(int,input().split())
        graph[v-1].append(w-1)
        
    res = topsort(graph)
    for v in res:
        print(v+1 ,end=" ")

if __name__ == "__main__":
    main()