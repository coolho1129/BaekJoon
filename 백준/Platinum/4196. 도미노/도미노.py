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

def Kosaraju(graph,V):
    count =  0
    ids = [-1 for _ in range(V)]
    
    def dfs(v):         
            ids[v] = count
            for w in graph[v]:
                if ids[w] < 0: 
                    dfs(w)
                    
    reverse_graph = reverse(graph,V)
    order =  topologicalSort(reverse_graph ,V)
    for v in order:
        if ids[v] < 0:
            dfs(v)
            count += 1
            
    
    return ids, count
    
def main():
    T = int(input())
    for _ in range(T):
        N,M= map(int, input().split())
        graph = [[] for _ in range(N)] 
        res = 0
        for _ in range(M):
            x,y = map(int, input().split())
            graph[x-1].append(y-1)
            
        ids, scc_count = Kosaraju(graph, N)
        
        # 각 SCC의 진입 차수를 계산
        in_degree = [0 for _ in range(scc_count)]  
        for v in range(N):
            for w in graph[v]:
                if ids[v] != ids[w]:
                    in_degree[ids[w]] += 1
        
        # 진입 차수가 0인 SCC의 개수가 답
        for indeg in in_degree:
            if indeg == 0:
                res += 1 
        print(res)
            
if __name__ == '__main__':
    main()