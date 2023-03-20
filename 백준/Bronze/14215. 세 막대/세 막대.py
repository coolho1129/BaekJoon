import sys
input=sys.stdin.readline

def main():
  
        line=list(map(int,input().split()))
        line.sort()
        if(line[0]+line[1]>line[2]):
            print(line[0]+line[1]+line[2])
            return
        print((line[0]+line[1])*2-1)
        
        
            
            
        
            
main()