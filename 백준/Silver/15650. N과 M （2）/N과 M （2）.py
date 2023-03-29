import sys
input=sys.stdin.readline

def dfs(n,m,start,visit):
    if len(visit) == m:
        for x in visit:
            print(x, end=' ')
        print()
        return
    
    for i in range(start, n+1):
        if i not in visit:
            visit.append(i)
            dfs(n,m,i+1,visit)
            visit.pop()
    
def main():
    n,m = list(map(int,input().split()))
    visit=[]
    dfs(n,m,1,visit)
    
main()
 
