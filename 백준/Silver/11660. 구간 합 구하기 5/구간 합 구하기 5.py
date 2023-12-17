import sys
input=sys.stdin.readline

def main():
    n,m = map(int,input().split())
    partsum=[[0 for _ in range(n+1)]for _ in range(n+1)]
    for i in range(n):
        arry=list(map(int,input().split()))
        for j in range(n):
            partsum[i+1][j+1]=arry[j]+partsum[i][j+1]+partsum[i+1][j]-partsum[i][j]

    res=0
    for _ in range(m):
        x1,y1,x2,y2=map(int,input().split())
        res=partsum[x2][y2]-partsum[x1-1][y2]-partsum[x2][y1-1]+partsum[x1-1][y1-1]

        print(res)
    
   
if __name__ == "__main__":
    main()

