import sys
from queue import Queue
input=sys.stdin.readline

def BellmanFord(g,s,v):
    distTo = [float('inf') for _ in range(v+1)]
    distTo[s] = 0

    for _ in range(v-1):
        for i in range(1, v + 1):
            for j, weight in g[i]:
                if distTo[i]+weight<distTo[j]:
                    distTo[j]=distTo[i]+weight
                    
    for i in range(1, v + 1):
            for j, weight in g[i]:
                if distTo[i]+weight<distTo[j]:
                    return True,distTo
       
    
    return False, distTo


def main():
    v,e = map(int,input().split())
    graph = [[] for _ in range(v+1)]
    for _ in range(e):
        i,j,weight = map(int,input().split())
        graph[i].append((j,weight))
        
    negativeCycle,distTo=BellmanFord(graph,1,v)
    if negativeCycle:
        print(-1)
    else:
        for w in distTo[2:]:
            if w==float('inf'):
                print(-1)
            else:
                print(w)
    

if __name__ == "__main__":
    main()