import sys
input=sys.stdin.readline

def main():
    n=int(input())
    m=int(input())
    
    min_cnt=abs(n-100)
    
    if(m):
        break_button=list(map(int,input().split()))
        button=[0]*10
        for i in break_button:
            button[i]=1
            
        for ch in range(1000001):
            isbroke=False
            strch=str(ch)
            for c in strch:
                num=int(c)
                if(button[num]):
                    isbroke=True
                    break
            if(not isbroke):    
                cnt=abs(n-ch)+len(strch)
                min_cnt=min(min_cnt,cnt)
    else:
        min_cnt=min(min_cnt,len(str(n)))
    
    print(min_cnt)
    
main()