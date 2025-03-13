import sys
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def tarjan_scc(V, graph):
    index = 0
    indices = [-1] * V  # DFS 방문 순서
    low_link = [-1] * V  # SCC 루트 찾기
    on_stack = [False] * V  # 스택 포함 여부
    stack = []
    scc_list = []
    
    def dfs(v):
        nonlocal index
        indices[v] = low_link[v] = index
        index += 1
        stack.append(v)
        on_stack[v] = True

        for w in graph[v]:
            if indices[w] == -1:  # 방문하지 않은 노드
                dfs(w)
                low_link[v] = min(low_link[v], low_link[w])
            elif on_stack[w]:  # 스택에 있는 노드면 SCC 가능성 존재
                low_link[v] = min(low_link[v], indices[w])

        # SCC 발견
        if indices[v] == low_link[v]:
            scc = []
            while True:
                w = stack.pop()
                on_stack[w] = False
                scc.append(w)
                if w == v:
                    break
            scc.sort()  # SCC 내부 정점 정렬
            scc_list.append(scc)

    for v in range(V):
        if indices[v] == -1:
            dfs(v)

    scc_list.sort(key=lambda x: x[0])

    return scc_list

def main():
    V, E = map(int, input().split())
    graph = [[] for _ in range(V)]
    for _ in range(E):
        v, w = map(int, input().split())
        graph[v-1].append(w-1) 

    scc_list = tarjan_scc(V, graph)

    print(len(scc_list))
    for scc in scc_list:
        for scc_v in scc:
            print(scc_v+1, end=' ')
        print(-1)

    
if __name__ == '__main__':
    main()