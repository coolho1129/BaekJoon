import sys
input=sys.stdin.readline
def main():
    N,B=map(int,input().split())
    result=""
    while(N):
        tmp=N%B
        if(0<=tmp<=9):
            result+=str(tmp)
        else:
            result+=chr(tmp+ord('A')-10)
        N//=B
    
    
    print(result[::-1])
    
main()
            