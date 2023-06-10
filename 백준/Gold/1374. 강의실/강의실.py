import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
import heapq

def main():
    n = int(input())
    lecture=[0]*n
    for _ in range(n):
        num,start,finish=map(int,input().split())
        lecture[num-1]=(start,finish)
  
    lecture.sort()
    prior_que=[]

    heapq.heappush(prior_que,lecture[0][1])
    for i in range(1,n):
        if lecture[i][0] < prior_que[0]:
            heapq.heappush(prior_que,lecture[i][1])
        else:
            heapq.heappop(prior_que)
            heapq.heappush(prior_que,lecture[i][1])
    print(len(prior_que))
            
main()
