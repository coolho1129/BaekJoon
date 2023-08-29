import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
import heapq

def main():
    n = int(input().strip())
    lecture=[]
    for _ in range(n):
        start,finish=map(int,input().split())
        lecture.append((start,finish))
  
    lecture.sort()
    prior_que=[]

    heapq.heappush(prior_que,lecture[0][1])
    for i in range(1,n):
        if lecture[i][0] >= prior_que[0]:
            heapq.heappop(prior_que)
        heapq.heappush(prior_que,lecture[i][1])
    
    print(len(prior_que))
            
main()