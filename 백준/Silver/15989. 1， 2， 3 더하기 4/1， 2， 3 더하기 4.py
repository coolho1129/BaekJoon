import sys
input=sys.stdin.readline

def main():
    t=int(input())
    dp=[0]*10001
    
    dp[1]=1
    sum=1
    for i in range(2,10001):
            if(i%6==1):
                dp[i]=dp[i-1]+sum-1
            else:
                if(i %6==0):
                    sum+=1    
                dp[i]=dp[i-1]+sum
    
    for _ in range(t):
        n=int(input())
        print(dp[n])

main()