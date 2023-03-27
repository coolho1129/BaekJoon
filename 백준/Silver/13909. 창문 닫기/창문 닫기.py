import sys,math
input=sys.stdin.readline

def main():
    n=int(input())
    result=0
    for _ in range(1,int(math.sqrt(n))+1):
        result+=1
    print(result) 
    
   
        
main() 
