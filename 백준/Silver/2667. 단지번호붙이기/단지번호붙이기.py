global count
count=0

def dfs(x,y,visit,graph):
    n=len(graph)
    
    if(0 <= x < n and 0 <= y < n and visit[x][y]==False and graph[x][y]=='1'):
        visit[x][y]=True
        global count
        count+=1
        dfs(x-1,y,visit,graph)
        dfs(x+1,y,visit,graph)
        dfs(x,y-1,visit,graph)
        dfs(x,y+1,visit,graph)
    return count
        
def main():
    n=int(input())
    graph = [input() for _ in range(n)]
    counts=[]
    visit=[[False] * n for _ in range(n)]

    
    for i in range(n):
       for j in range(n):
        if(graph[i][j]=='1' and visit[i][j]==False):
           counts.append(dfs(i,j,visit,graph))
           global count
           count=0
    
    counts.sort()
    
    print(len(counts))
    for cnt in counts:
        print(cnt)

        
main()