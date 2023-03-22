import sys
#input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def cantorian(string,start,end):
    if(start==end):
        return
    
    gap=end-start
    
    cantorian(string,start-gap//3*2,start-gap//3)
    for i in range(start,end):
        string[i]=" "    
    cantorian(string,end+gap//3,end+gap//3*2)
        
def main():
    n=0
    while True:
        try:
             n=int(input())
             size=3**n
             string=list("-"*(size))
             start=size//3
             end=size//3*2
             cantorian(string,start,end)
             print("".join(string))
             

        except EOFError:
            break
    
        
        
 
main()