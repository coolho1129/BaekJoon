import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def activate(meeting):
    n=len(meeting)
    meeting.sort(key=lambda x:(x[1],x[0]))
    A=[0]
    k=0
    
    
    for i in range(1,n):
        if(meeting[i][0]>=meeting[k][1]):
            A.append(i)
            k=i
    return len(A)


def main():
    n = int(input().strip())
    meeting=[]
    for _ in range(n):
        start,finish=map(int,input().split())
        meeting.append((start,finish))
  
    print(activate(meeting))
            
main()
