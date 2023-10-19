import sys,random
input=sys.stdin.readline

def partition(a,lo,hi):
    i,j=lo+1,hi
    while(True):
        while(i<=hi and a[i]<a[lo]):i+=1
        while(j>=lo+1 and a[lo]<a[j]):j-=1
        if(j<=i):break
        a[i],a[j]=a[j],a[i]
        i,j=i+1,j-1
        
    a[lo],a[j]=a[j],a[lo]
    return j

def dividedNpartition(a,lo,hi):
    if(hi<=lo):return
    j=partition(a,lo,hi)
    dividedNpartition(a,lo,j-1)
    dividedNpartition(a,j+1,hi)
    
def quicksort(a):
    random.shuffle(a)
    dividedNpartition(a,0,len(a)-1)
    

n=int(input())
a=[0]*n
for i in range(n):
    a[i]=int(input())
quicksort(a)

for v in a:
    print(v)
