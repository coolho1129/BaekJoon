import sys
from heapq import heappush,heappop
input=sys.stdin.readline

def shortpath(s,t,g,n):
    def pathTo(v):
        if distTo[v]<float('inf'):
            path = []
            e = edgeTo[v]
        
            if e !=None:
                path.append(e[1])
            
            while e != None:
                path.append(e[0])
                e = edgeTo[e[0]]
            path.reverse()
            return path
    
    
    distTo = [float('inf')] * (n+1)
    edgeTo = [None] * (n+1)
    visit = [False] * (n+1)
    distTo[s] = 0
    minpq = []
    heappush(minpq,(distTo[s],s))
    while minpq:
        _,v = heappop(minpq)
        if not visit[v]:
            visit[v] = True
            for w, c in g[v]:
                if distTo[w] > distTo[v]+c:
                    distTo[w] = distTo[v]+c
                    edgeTo[w] = (v,w)
                    heappush(minpq,(distTo[w],w))  
                    
    
    path = pathTo(t)
    return distTo[t],len(path),path

def main():
    v = int(input())
    e = int(input())
    graph = [[] for _ in range(v+1)]
    
    for _ in range(e):
        i,j,c = map(int,input().split())
        graph[i].append((j,c))
                
    s,t = map(int,input().split())

    dist,city,path= shortpath(s,t,graph,v)
    print(dist)
    print(city)
    for p in path:
        print(p, end=" ")
    
if __name__ == "__main__":
    main()