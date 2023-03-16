import sys
input = sys.stdin.readline

def main():
    n=int(input())
    stack=[]
    result=0
    
    for _ in range(n):
        h=int(input())
        
        while(len(stack)!=0 and stack[-1][0]<h):
            result+=stack.pop()[1]
            
        size=len(stack)
        
        if(size!=0 and stack[-1][0]==h):
            if(size!=1):
                result+=1
            result += stack[-1][1]
            stack[-1][1]+=1
            
        else:
            if (size!=0):
                result+=1
            stack.append([h, 1])
             
    print(result)

        
main()