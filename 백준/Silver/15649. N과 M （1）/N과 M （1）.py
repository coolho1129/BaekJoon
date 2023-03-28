import sys,math
input=sys.stdin.readline

def dfs(n,m,visit):
    if len(visit) == m:
        for x in visit:
            print(x, end=' ')
        print()
        return
    for i in range(1, n+1):
        if i not in visit:
            visit.append(i)
            dfs(n,m,visit)
            visit.pop()
    
def main():
    n,m = list(map(int,input().split()))
    visit=[]
    dfs(n,m,visit)
    
main()
 
