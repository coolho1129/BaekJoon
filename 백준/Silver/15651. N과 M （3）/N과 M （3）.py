import sys
input=sys.stdin.readline

def dfs(n,m,start,visit):
    if len(visit) == m:
        for x in visit:
            print(x, end=' ')
        print()
        return
    
    
    for i in range(start, n+1):
        visit.append(i)
        dfs(n,m,start,visit)
        visit.pop()
        
def main():
    n,m = list(map(int,input().split()))
    visit=[]
    dfs(n,m,1,visit)
    
main()
 




