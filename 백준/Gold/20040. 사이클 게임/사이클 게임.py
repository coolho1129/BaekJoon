import sys
input=sys.stdin.readline

def root(ids,i):
    while i !=ids[i]: i=ids[i]
    return i
    
def union(ids,p,q):
    idx1,idx2=root(ids,p),root(ids,q)
    if idx1==idx2:
        return True
    ids[idx2]=ids[idx1]
      
def main():
    n,m=map(int,input().split())
    ids=[i for i in range(n)]
    for i in range(m):
        p,q=map(int,input().split())
        if(union(ids,p,q)):
            print(i+1)
            return 
    print(0)
       
main()