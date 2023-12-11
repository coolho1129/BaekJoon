import sys
from queue import PriorityQueue
input=sys.stdin.readline

def Kruskal(pq,v):
    ids = []
    size = []
    
    for idx in range(v):
        ids.append(idx)
        size.append(1)   
      
    def root(i):
        while i != ids[i]: i = ids[i]
        return i

    def connected(p, q):
        return root(p) == root(q)

    def union(p, q):    
        id1, id2 = root(p), root(q)
        if id1 == id2: return
        if size[id1] <= size[id2]: 
            ids[id1] = id2
            size[id2] += size[id1]
        else:
            ids[id2] = id1
            size[id1] += size[id2]
    
    mst = []
    weightsum = 0
    
    while not pq.empty() and len(mst)<v-1:
        edge = pq.get()
        weight,i,j = edge
        if not connected(i,j):
            union(i,j)
            edge = (weight,i+1,j+1)
            mst.append(edge)
            weightsum+=weight
            
    return mst,weightsum
    
    
def main():
    v,e = map(int,input().split())
    pq = PriorityQueue()
    for _ in range(e):
        i,j,weight = map(int,input().split())
        pq.put((weight,i-1,j-1))
        
    mst,res=Kruskal(pq,v)
    print(res)
        
if __name__ == "__main__":
    main()