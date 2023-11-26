import sys
input=sys.stdin.readline

def main():
    n=int(input())
    num=list(map(int,input().split()))
    stack=[]
    res=1
    for i in range(n):
        while stack and stack[-1]==res:
            stack.pop()
            res+=1
        
        if num[i]==res:
            res+=1
        else:
            stack.append(num[i])
        
    while stack and stack[-1]==res:
        stack.pop()
        res+=1
    print( "Sad" if stack else "Nice")
  
if __name__ == "__main__":
    main()