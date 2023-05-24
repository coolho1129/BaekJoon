import sys
input=sys.stdin.readline

def main():
    n=int(input())
    wine=[int(input()) for _ in range(n)] 
    drink=[0 for _ in range(n+1)] 
    drink[1]=wine[0]
    if(n!=1):
        drink[2]=wine[0]+wine[1]
   
    for i in range(3,n+1):
        drink[i]=max(drink[i-2]+wine[i-1],drink[i-1],drink[i-3]+wine[i-2]+wine[i-1])
        
    print(drink[n])
main()