import sys
input=sys.stdin.readline


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
    n=int(input())
    m=int(input())
    ids=[]
    size=[]
    for i in range(n+1):
        ids.append(i)
        size.append(1)

    for i in range(1,n+1):
        isconnect=list(map(int,input().split()))
        for city,connect in enumerate(isconnect):
            city+=1
            if connect:
                union(size,ids,i,city) 
        
    visit=list(map(int,input().split()))
    for i in range(1,len(visit)):
          if root(ids,visit[i-1])!=root(ids,visit[i]):
            print('NO')
            return 
    print('YES')

main()