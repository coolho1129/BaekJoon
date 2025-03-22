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

    while True:
        m,n = map(int,input().split())
        
        if m==0 and n==0:
            break
        
        graph = [[] for _ in range(m)]    
        total_weight = 0
        
        for _ in range(n):
            x,y,z = map(int,input().split())
            total_weight += z
            graph[x].append((y,z))
            graph[y].append((x,z))
            
        mst,weightsum = PrimLazy(graph,m)
        res = total_weight - weightsum
        print(res)
            
if __name__ == "__main__":
    main()