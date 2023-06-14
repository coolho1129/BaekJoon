import sys
input=sys.stdin.readline

def findlast(a,b):
    a%=10
    res=0
    
    if(a==0):
        res=10
    elif (a==1):
        res=1
    elif (a==2):
        tmp=[2,4,8,6]
        res=tmp[b%4-1]
    elif (a==3):
        tmp=[3,9,7,1]
        res=tmp[b%4-1]
    elif (a==4):
        tmp=[4,6]
        res=tmp[b%2-1]
    elif(a==5):
        res=5
    elif(a==6):
        res=6
    elif(a==7):
        tmp=[7,9,3,1]
        res=tmp[b%4-1]
    elif(a==8):
        tmp=[8,4,2,6]
        res=tmp[b%4-1]
    else:
        tmp=[9,1]
        res=tmp[b%2-1]
        
    return res
    
t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    print(findlast(a,b))