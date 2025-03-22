import sys
input=sys.stdin.readline

def root(ids,i):
    while i !=ids[i]: i=ids[i]
    return i
    

def union(size,ids,p,q):
   
    idx1,idx2=root(ids,p),root(ids,q)
    
    if p==q or idx1==idx2:
        return size[idx1]

    if size[idx1]<=size[idx2]:
        ids[idx1]=ids[idx2]
        size[idx2]+=size[idx1]
        return size[idx2]

    else:
        ids[idx2]=ids[idx1]
        size[idx1]+=size[idx2]
        return size[idx1]
    
def main():
    n=int(input())
    for _ in range(n):
        m=int(input())
        size=[1 for _ in range(2*m)]
        ids=[i for i in range(2*m)]
        names={}
        index=0
        for _ in range(m):
            name1,name2=map(str,input().rstrip().split())
            if(name1 not in names):
                names[name1]=index
                index+=1
            if(name2 not in names):
                names[name2]=index
                index+=1
            
            print(union(size,ids,names[name1],names[name2]))

            
main()