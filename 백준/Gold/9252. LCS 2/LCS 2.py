import sys

input=sys.stdin.readline

def main():
    a=input().rstrip()
    b=input().rstrip()
    row=len(a)+1
    col=len(b)+1
    dp=[[0 for _ in range(row)]for _ in range(col)]
    LCS = []
   
    for i in range(1,col):
        for j in range(1,row):
            if(b[i-1]==a[j-1]):
                dp[i][j]=dp[i-1][j-1]+1
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
            
    res = dp[col-1][row-1]
    print(res)
    
    if res != 0:
        i, j = col - 1, row - 1
        while i > 0 and j > 0:
            if b[i-1] == a[j-1]:
                LCS.append(b[i-1])
                i -= 1
                j -= 1
            elif dp[i-1][j] >= dp[i][j-1]:
                i -= 1
            else:
                j -= 1
        LCS.reverse()
        print(''.join(LCS))
        
if __name__ == "__main__":
    main()