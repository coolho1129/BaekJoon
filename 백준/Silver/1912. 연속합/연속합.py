
def main():
    n=int(input())
    arr = list(map(int, input().split()))
    dp=[]
    dp.append(arr[0])
    for i in range(1,n):
        dp.append(max(dp[i-1]+arr[i],arr[i]))

    print(max(dp))

main()