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
  
def main():
    n = int(input())
    pq = PriorityQueue()
    points = []
    for i in range(n):
        x,y,z =map(int,input().split())
        points.append((x,y,z,i))
        
    for i in range(3):
        points.sort(key=lambda p: p[i]) # x,y,z 좌표 기준 정렬렬
        for j in range(n - 1):
            x1, y1, z1, idx1 = points[j]
            x2, y2, z2, idx2 = points[j+1]
            cost = min(abs(x1 - x2), abs(y1 - y2), abs(z1 - z2))
            pq.put((cost, idx1, idx2))
                   
    mst,res=Kruskal(pq,n)
  
    print(res)
        
if __name__ == "__main__":
    main()