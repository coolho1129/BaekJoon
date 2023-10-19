import sys
input=sys.stdin.readline

def root(ids,i):
    while i !=ids[i]: i=ids[i]
    return i
    

def union(size,ids,p,q):
   
    idx1,idx2=root(ids,p),root(ids,q)
    
    if p==q or idx1==idx2:
        return True

    if size[idx1]<=size[idx2]:
        ids[idx1]=ids[idx2]
        size[idx2]+=size[idx1]
   
    else:
        ids[idx2]=ids[idx1]
        size[idx1]+=size[idx2]
        
  
def main():
    n,m=map(int,input().split())
    size=[1 for _ in range(n)]
    ids=[i for i in range(n)]
    for i in range(m):
        p,q=map(int,input().split())
        if(union(size,ids,p,q)):
            print(i+1)
            return 

    print(0)
       
main()