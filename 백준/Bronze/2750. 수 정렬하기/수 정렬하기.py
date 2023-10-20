import sys,random
input=sys.stdin.readline

def hinsertsort(a,h):
    for i in range(h,len(a)):
        key=a[i]
        j=i-h
        while(j>=0 and a[j]>key):
            a[j+h]=a[j]
            j-=h
        a[j+h]=key
        
def shellsort(a):
    N=len(a)
    h=1
    while(h<N/3):
        h=3*h+1
   
    while(h>=1):
        hinsertsort(a,h)
        h=h//3
        
              
    
n=int(input())
a=[0]*n
for i in range(n):
    a[i]=int(input())
shellsort(a)
for v in a:
    print(v)
