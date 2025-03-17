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
    
vertex_map = {}  
def get_vertex_index(v):
    if v not in vertex_map:
        vertex_map[v] = len(vertex_map)  
    return vertex_map[v]

def main():
    N = int(input())
    g = FlowNetwork(52)
    for _ in range(N):
        v, w, cap = map(str, input().split())
        v, w, cap = get_vertex_index(v), get_vertex_index(w), int(cap)
        g.addEdge(FlowEdge(v, w, cap))
        g.addEdge(FlowEdge(w, v, cap))
    
    s, t = get_vertex_index('A'), get_vertex_index('Z')
    maxflow = FordFulkerson(g, s, t).flow
    print(int(maxflow))
if __name__ == '__main__':
    main()
