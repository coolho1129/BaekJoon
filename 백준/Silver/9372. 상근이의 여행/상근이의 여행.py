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
    t = int(input())
    for _ in range(t):
        n,m = map(int,input().split())
        graph = [[] for _ in range(n)]    
        
        for i in range(m):
            v, w= map(int,input().split())
            graph[v-1].append((w-1,1))
            graph[w-1].append((v-1,1))
                
        mst,weightsum = PrimLazy(graph,n)
        print(weightsum)
        
if __name__ == "__main__":
    main()