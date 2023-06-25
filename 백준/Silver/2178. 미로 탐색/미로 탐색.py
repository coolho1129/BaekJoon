import sys
from collections import deque
input=sys.stdin.readline

def exit_maze(maze,start,end,n,m):
    visit=[[False for _ in range(m)] for _ in range(n)]
    node_cnt=[[0  for _ in range(m)]for _ in range(n)]

    q = deque()
    q.append(start)
    visit[start[0]][start[1]] = True
    node_cnt[start[0]][start[1]] = 1
    
    
    while q:
        node=q.popleft()
        row,col=node
        if node == end:
            return node_cnt[row][col]
        
        neighbors = [(row-1, col), (row+1, col), (row, col-1), (row, col+1)]
        
        for neighbor in neighbors:
            n_row, n_col = neighbor

            if n_row < 0 or n_row >= n or n_col < 0 or n_col >= m:
                continue
              
            if maze[n_row][n_col] == '0':
                continue
            
            if visit[n_row][n_col]:
                continue

            q.append(neighbor)
            visit[n_row][n_col] = True
            node_cnt[n_row][n_col] = node_cnt[row][col] + 1

    return -1

def main():
    n,m=map(int,input().split())
    maze=[input().strip() for _ in range(n)]
   
    res=exit_maze(maze,(0,0),(n-1,m-1),n,m)
    print(res)

main()