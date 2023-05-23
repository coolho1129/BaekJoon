import sys
input=sys.stdin.readline

def main():
    n=int(input())
    num_map=[list(map(int,input().split())) for _ in range(n)]
    visit=[[0 for _ in range(n)] for _ in range(n)]

    visit[0][num_map[0][0]]=1
    visit[num_map[0][0]][0]=1 
        
    for i in range(n):
        for j in range(n):
            if(num_map[i][j]!=0):
                if(j+num_map[i][j]<n):
                    visit[i][j+num_map[i][j]]+=visit[i][j]
                if(i+num_map[i][j]<n):
                    visit[i+num_map[i][j]][j]+=visit[i][j]
            
    print(visit[n-1][n-1])

main()
