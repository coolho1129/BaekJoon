import sys
from collections import deque
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def topologicalSortKahn(graph, V):
    indegree = [0 for _ in range(V)] 
    for v in range(V):
        for w in graph[v]:
            indegree[w] += 1

    q = deque()
    for v in range(V):
        if indegree[v] == 0:
            q.append(v)

    order = []
    while q:        
        v = q.popleft()
        order.append(v)
        for w in graph[v]:
            indegree[w] -= 1
            if indegree[w] == 0:
                q.append(w)
                
    if len(order) != V:
        return "IMPOSSIBLE"
    
    return ' '.join(str(v+1) for v in order)

    
def main():
    T = int(input())
    for _ in range(T):
        n = int(input())
        t = list(map(int, input().split()))
        m = int(input())
        changes = set()
        
        for _ in range(m):
            a,b = map(int, input().split())
            changes.add((a,b))
            
        graph = [[] for _ in range(n)]
        
        for i in range(len(t)):
            for j in range(i+1,len(t)):
                if ((t[i], t[j]) in changes):  
                    graph[t[j]-1].append(t[i]-1)
                elif ((t[j], t[i]) in changes):
                    graph[t[j]-1].append(t[i]-1)
                else:
                    graph[t[i]-1].append(t[j]-1)
        
        res = topologicalSortKahn(graph,n)
        
        print(res)
                
      
            
if __name__ == '__main__':
    main()