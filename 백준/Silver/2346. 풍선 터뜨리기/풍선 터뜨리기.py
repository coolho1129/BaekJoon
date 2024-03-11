import sys
from collections import deque
input=sys.stdin.readline

def main():
    n = int(input())
    paper = list(map(int,input().split()))
    ballons = [(i+1,paper[i])for i  in range(n)]
    ballons = deque(ballons)
    
    for _ in range(n):
        res,next = ballons.popleft()
        next = next-1 if next>0 else next
        print(res)
        if len(ballons) and abs(next)>=len(ballons):
            temp = abs(next) % len(ballons)
            next = temp if next >0 else temp*-1
        next*=-1
        ballons.rotate(next)
       
        
if __name__ == "__main__":
    main()