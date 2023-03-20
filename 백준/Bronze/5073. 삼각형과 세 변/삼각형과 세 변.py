import sys
input=sys.stdin.readline

def main():
    while(True):
        line=list(map(int,input().split()))
        line.sort()
        if(line[0]==line[1]==line[2]==0):
            return
        elif(line[0]+line[1]<=line[2]):
            print("Invalid")
        elif(line[0]==line[1]==line[2]):
            print("Equilateral")
        elif(line[0]==line[1] or line[1]==line[2] or line[0]==line[2]):
            print("Isosceles")
        else:
            print("Scalene")
        
        
            
            
        
            
main()