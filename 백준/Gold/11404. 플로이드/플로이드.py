import sys
input = sys.stdin.readline

INF=10**7

def Floyd(dist, n):
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dist[i][j]=min(dist[i][j] , dist[i][k] + dist[k][j])

def main():
    n = int(input().strip())
    m = int(input().strip())
    graph = [[0 if i==j else INF for i in range(n)] for j in range(n)]

    for _ in range(m):
        i, j, cost = map(int, input().split())
        graph[i - 1][j - 1] = min(cost,graph[i-1][j-1])
        
    Floyd(graph, n)
    
    for row in graph:
        for dis in row:
            print(0, end=" ") if dis == INF  else print(dis, end=" ")
        print()

main()
