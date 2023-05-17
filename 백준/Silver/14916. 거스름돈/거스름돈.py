import sys
input = sys.stdin.readline
def main():
    n=int(input())
    cnt=0
    
  
    while(n>0):
        if(n==1 or n==3):
            print(-1)
            return 0  
        elif(n%5==0):
            n-=5
            cnt+=1
        elif (n%2==0):
            n-=2
            cnt+=1
        elif(n//5>0):
            n-=5
            cnt+=1
    print(cnt)
            
        
main()
