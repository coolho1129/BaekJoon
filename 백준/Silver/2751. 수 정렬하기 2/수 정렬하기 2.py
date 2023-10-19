import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def merge(a,aux,lo,mid,hi):
    for k in range(lo,hi+1):
        aux[k]=a[k]
        
    i,j=lo,mid+1
    for k in range(lo,hi+1):
        if i>mid: a[k],j=aux[j],j+1
        elif j>hi: a[k],i=aux[i],i+1
        elif aux[i]<=aux[j]:a[k],i=aux[i],i+1
        else: a[k],j=aux[j],j+1
            
def dividedNmerge(a,aux,lo,hi):
    if(hi<=lo): return a
    mid=(lo+hi)//2
    dividedNmerge(a,aux,lo,mid)
    dividedNmerge(a,aux,mid+1,hi)
    merge(a,aux,lo,mid,hi)
    
def mergesort(a):
    aux=[None]*len(a)
    dividedNmerge(a,aux,0,len(a)-1)
    
    
n=int(input())
a=[0]*n
for i in range(n):
    a[i]=int(input())
mergesort(a)

for v in a:
    print(v)
