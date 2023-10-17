import sys
input=sys.stdin.readline

def connected(ids,i,j):
    return 'YES' if root(ids,i)==root(ids,j) else 'NO' 

def root(ids,i):
    while i != ids[i]: i=ids[i]
    return i


def union(size,ids,p,q):
    i,j=root(ids,p),root(ids,q)
    
    if i==j: 
        return
    elif size[i]<=size[j]: 
        ids[i] = j
        size[j]+=size[i]
    else: 
        ids[j] = i
        size[i]+=size[j]
    

def main():
    n,m=map(int,input().split())
    ids=[]
    size=[]
    for i in range(n+1):
        ids.append(i)
        size.append(1)

    for _ in range(m):
        o,i,j=map(int,input().split())
        print(connected(ids,i,j)) if o else union(size,ids,i,j)
        
        
main()