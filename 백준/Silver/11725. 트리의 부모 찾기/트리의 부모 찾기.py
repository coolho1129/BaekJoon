import sys
from collections import deque
input=sys.stdin.readline


def bfs(tree,start,parents):
    visit=[False for _ in range(len(tree))]
    visit[start]=True
    q=deque()
    q.append(start)

    while q:
        now=q.popleft()
        for temp in tree[now]:
            if(visit[temp]==False):
                parents[temp]=now
                q.append(temp)
                visit[temp]=True
      
def main():
    n=int(input())
    parents=[i for i in range(n+1)]
    tree=[[] for _ in range(n+1)]
    for _ in range(n-1):
        a,b=map(int,input().split())
        tree[a].append(b)
        tree[b].append(a)
        
    bfs(tree,1,parents)
    for p in parents[2:]:
        print(p)
        
main()