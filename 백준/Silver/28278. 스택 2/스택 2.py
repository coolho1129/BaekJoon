import sys
input=sys.stdin.readline

def main():
    n=int(input())
    stack=[]
    for _ in range(n):
        x=list(map(int,input().split()))
        if x[0]==1:
            stack.append(x[1])
        elif x[0]==2:
            print(stack.pop() if(stack) else -1)
        elif x[0]==3:
            print(len(stack))
        elif x[0]==4:
            print(0 if(stack) else 1)
        else:
            print(stack[-1] if(stack) else -1)  
        
main()