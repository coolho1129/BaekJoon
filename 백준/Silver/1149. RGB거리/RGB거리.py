import sys
input=sys.stdin.readline

def main():
    n= int(input())
    rgb = [list(map(int,input().split())) for _ in range(n)]
    dp = [[rgb[0][0],rgb[0][1],rgb[0][2]] if i==0 else [0,0,0] for i in range(n)]

    for i in range(1,n):
        for j in range(3):
            minnum=10**6
            for k in range(3):
                if j==k:
                    continue
                minnum=min(dp[i-1][k],minnum)
            dp[i][j]=minnum+rgb[i][j]
    print(min(dp[n-1]))
        
if __name__ == "__main__":
    main()