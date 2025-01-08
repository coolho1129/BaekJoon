import sys
input = sys.stdin.readline

def activate(meeting,n):
    meeting.sort(key=lambda x:(x[1],x[0]))
    cnt=1
    k=0
    
    for i in range(1,n):
        if(meeting[i][0]>=meeting[k][1]):
            cnt+=1
            k=i
    return cnt

def main():
    n = int(input().strip())
    meeting=[]
    
    for _ in range(n):
        start,finish=map(int,input().split())
        meeting.append((start,finish))
  
    print(activate(meeting,n))
            
main()