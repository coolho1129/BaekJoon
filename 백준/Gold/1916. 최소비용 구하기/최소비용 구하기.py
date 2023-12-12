import sys
from heapq import heappush,heappop
input=sys.stdin.readline

def shortpath(s,t,g,n):
    dist = [float('inf')] * (n+1)
    visit = [False] * (n+1)
    dist[s] = 0
    minpq = []
    heappush(minpq,(dist[s],s))
    while minpq:
        _,v = heappop(minpq)
        if not visit[v]:
            visit[v] = True
            for w, c in g[v]:
                if dist[w] > dist[v]+c:
                    dist[w] = dist[v]+c
                    heappush(minpq,(dist[w],w))  
                    
    return dist[t]

def main():
    v = int(input())
    e = int(input())
    graph = [[] for _ in range(v+1)]
    
    for _ in range(e):
        i,j,c = map(int,input().split())
        graph[i].append((j,c))
                
    s,t = map(int,input().split())

    res= shortpath(s,t,graph,v)
    print(res)
    
if __name__ == "__main__":
    main()