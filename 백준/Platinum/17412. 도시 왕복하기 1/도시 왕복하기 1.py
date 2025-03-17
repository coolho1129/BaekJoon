import sys
from collections import deque

sys.setrecursionlimit(10**6)
input = sys.stdin.readline

class FlowEdge:
    def __init__(self, v, w, capacity): 
        self.v, self.w, self.capacity = v, w, capacity
        self.flow = 0.0 
        
    def other(self, vertex):      
        if vertex == self.v: return self.w
        elif vertex == self.w: return self.v

    def remainingCapacityTo(self, vertex): 
        if vertex == self.v: return self.flow
        elif vertex == self.w: return self.capacity - self.flow
       
    def addRemainingFlowTo(self, vertex, delta):        
        if vertex == self.v: self.flow -= delta
        elif vertex == self.w: self.flow += delta
        
class FlowNetwork:
    def __init__(self, V): 
        self.V = V 
        self.E = 0 
        self.adj = [[] for _ in range(V)]   
        self.edges = []

    def addEdge(self, e): 
        self.adj[e.v].append(e) 
        self.adj[e.w].append(e) 
        self.edges.append(e)
        self.E += 1

class FordFulkerson:
    def __init__(self, g, s, t):        
        self.g = g
        self.s, self.t = s, t

        self.flow = 0
        while self.hasAugmentingPath():
            minflow = float('inf')
            v = t
            while v != s: 
                minflow = min(minflow, self.edgeTo[v].remainingCapacityTo(v))
                v = self.edgeTo[v].other(v)
            
            v = t
            while v != s:
                self.edgeTo[v].addRemainingFlowTo(v, minflow)
                v = self.edgeTo[v].other(v)
        
           
            self.flow += minflow

    
    def hasAugmentingPath(self):
        self.edgeTo = [None for _ in range(self.g.V)]
        self.visited = [False for _ in range(self.g.V)]
        
        q = deque()
        q.append(self.s)
        self.visited[self.s] = True
        while q:
            v = q.popleft()
            for e in self.g.adj[v]:
                w = e.other(v)
                if e.remainingCapacityTo(w) > 0 and not self.visited[w]:
                    self.edgeTo[w] = e
                    self.visited[w] = True
                    q.append(w)

        return self.visited[self.t] 


    def inCut(self, vertex): 
        return self.visited[vertex]

def main():
    N, P = map(int, input().split())
    g = FlowNetwork(N)
    for _ in range(P):
        v, w = map(int, input().split())
        g.addEdge(FlowEdge(v-1, w-1, 1))

  
    res = FordFulkerson(g, 0, 1).flow
    print(int(res))

if __name__ == '__main__':
    main()
