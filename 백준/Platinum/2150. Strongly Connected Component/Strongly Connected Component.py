import sys
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def topologicalSort(graph,V):
    def recur(v):
        visited[v] = True
        for w in graph[v]:
            if not visited[w]: recur(w)
        reverseList.append(v)
        
    visited = [False for _ in range(V)]
    reverseList = []
    for v in range(V): 
        if not visited[v]: recur(v)

    reverseList.reverse()
    return reverseList

def reverse(graph, V):
    rev_graph = [[] for _ in range(V)]
    for v in range(V):
        for w in graph[v]:
            rev_graph[w].append(v) 
    return rev_graph
    
def main():
    V,E = map(int, input().split())
    graph = [[] for _ in range(V)] 
    scc_list = []
    for _ in range(E):
        v,w = map(int, input().split())
        graph[v-1].append(w-1)
        
    count =  0
    ids = [-1 for _ in range(V)]
    
    def dfs(v,scc):         
            ids[v] = count
            scc.append(v)
            for w in graph[v]:
                if ids[w] < 0: 
                    dfs(w,scc)
                    
    reverse_graph = reverse(graph,V)
    order =  topologicalSort(reverse_graph ,V)
    for v in order:
        if ids[v] < 0:
            scc = []
            dfs(v, scc)
            scc.sort()
            scc_list.append(scc)
            count += 1
            
    scc_list.sort(key=lambda x: x[0])
    print(count)
    for scc in scc_list:
        for scc_v in scc:
            print(scc_v+1, end=' ')
        print(-1)

    
if __name__ == '__main__':
    main()