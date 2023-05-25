import sys
input=sys.stdin.readline

def main():
    n=int(input())
    cnt=[0]*1000001
    cnt[1]=0
    cnt[2]=1
    cnt[3]=1
    
    for i in range(4,n+1):
        if(i%6==0):
            cnt[i]=min(cnt[i//3]+1,cnt[i//2]+1)
        
        elif(i%3==0):
            cnt[i]=min(cnt[i//3]+1,cnt[i-1]+1)
        
        elif(i%2==0):
            cnt[i]=min(cnt[i//2]+1,cnt[i-1]+1)
        
        else:
            cnt[i]=cnt[i-1]+1
    
    print(cnt[n])
    
main()