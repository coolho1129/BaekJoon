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
    
def quickselct(a,k):
    random.shuffle(a)
    lo,hi=0,len(a)-1
    while(lo<hi):
        j=partition(a,lo,hi)
        if(j<k): lo=j+1
        elif(k<j): hi=j-1
        else: return a[k]
    
    return a[k]

def main():
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    print(quickselct(a,k-1))
    
main()