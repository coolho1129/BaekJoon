import sys
from heapq import heappush,heappop
input=sys.stdin.readline

def topsort(g,indegree):
    n=len(g)
    res=[]
    pq=[]
    
    for v in range(0,n):
        if indegree[v]==0:
            heappush(pq,v)
            
    while pq:
        v = heappop(pq)
        res.append(v)
        for w in g[v]:
            indegree[w]-=1
            if indegree[w]==0:
                heappush(pq,w)
                
    return res
        
def main():
    n,m = map(int,input().split())
    graph = [[] for _ in range(n)]
    indegree = [0 for _ in range(n)]
    
    for _ in range(m):
        v,w = map(int,input().split())
        graph[v-1].append(w-1)
        indegree[w-1]+=1
  
    res = topsort(graph,indegree)
    for v in res:
        print(v+1 ,end=" ")


if __name__ == "__main__":
    main()