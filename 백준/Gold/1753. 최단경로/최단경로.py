import sys
from heapq import heappush,heappop
input=sys.stdin.readline
INF=int(1e9)

def shortpath(start,graph,n):
    dist=[INF for _ in range(n)]
    visit=[False]*n
    dist[start]=0
    
    pq=[]
    heappush(pq,(dist[start],start))
    
    while(pq):
        _,node=heappop(pq)
        if(not visit[node]):
            visit[node]=True
            for next,cost in graph[node]:
                if(dist[node]+cost<dist[next]):
                    dist[next]=dist[node]+cost
                    heappush(pq,(dist[next],next))
    
    for res in dist:
        print('INF' if res==INF  else res)
            

def main():
    n,m=map(int,input().split())
    start=int(input())-1
    graph=[[] for _ in range(n)]
    for _ in range(m):
        u,v,w=map(int,input().split())
        graph[u-1].append((v-1,w))
    
    shortpath(start,graph,n)
        
        
main()