import sys
input=sys.stdin.readline

def main():
    a=input().rstrip()
    b=input().rstrip()
    a_len,b_len=len(a),len(b)
    dp=[[0 for _ in range(a_len+1)]for _ in range(b_len+1)]
   
    
    for i in range(1,b_len+1):
        for j in range(1,a_len+1):
            if(b[i-1]==a[j-1]):
                dp[i][j]=dp[i-1][j-1]+1
                
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
            
        
    print(dp[b_len][a_len])
            
main()