import sys,math
from queue import PriorityQueue
input=sys.stdin.readline

def PrimLazy(g,n):
    def include(v):
        included[v] = True
        for w,weight in g[v]:
            if not included[w]:
                pq.put((weight,v,w))
    
    mst = []
    included = [False] * n
    weightsum = 0
    pq = PriorityQueue()
    include(0)
    
    while not pq.empty() and len(mst)<n-1:
        weight,i,j = pq.get()
        if included[i] and included[j]:
            continue
        mst.append((i+1,j+1,weight))
        weightsum += weight
        if not included[i]: include(i)
        if not included[j]: include(j)
        
    return mst,weightsum

   
def main():
    n,m = map(int,input().split())
    graph = [[] for _ in range(n)]    
    
    for i in range(m):
        a,b,c = map(int,input().split())
        graph[a-1].append((b-1,c))
        graph[b-1].append((a-1,c))
            
    mst,weightsum = PrimLazy(graph,n)
    res = weightsum - max([x[2] for x in mst])
    print(res)
        
if __name__ == "__main__":
    main()