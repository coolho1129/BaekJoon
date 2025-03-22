import sys,math
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

def round_half_up(num, digits=0):
    factor = 10 ** digits
    return math.floor(num * factor + 0.5) / factor

def main():
    n,m = map(int,input().split())
    points = []
    pq = PriorityQueue()
    
    for idx in range(n):
        x,y = map(int,input().split())
        points.append((x,y,idx))
        
    for _  in range(m):
        x,y = map(int,input().split())
        pq.put((0,x-1,y-1))
        
     
    for i in range(n):
        for j in range(i+1,n):
            x1,y1,idx1 = points[i]
            x2,y2,idx2 = points[j]
            dist = ((x1-x2)**2+(y1-y2)**2)**0.5
            pq.put((dist,idx1,idx2))
    
    mst,weightsum = Kruskal(pq,n)
    res = round_half_up(weightsum ,2)
    print((format(res, ".2f")))

            
if __name__ == "__main__":
    main()