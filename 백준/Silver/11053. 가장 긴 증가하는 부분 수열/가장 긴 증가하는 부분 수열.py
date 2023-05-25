import sys
input=sys.stdin.readline

def main():
    n=int(input())
    num=list(map(int,input().split()))
    sublen=[ 1 for _ in range(n)]
    
    for i in range(1,n):  
        for j in range(0,i):
            if(num[j]<num[i]):
                if(sublen[j]>=sublen[i]):
                    sublen[i]=sublen[j]+1
    
    print(max(sublen))             
    
main()