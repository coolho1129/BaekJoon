import sys
input=sys.stdin.readline

class MaxHeap:
    def __init__(self):
        self.pq=['']
   
    def insert(self,key):
        self.pq.append(key)
        idx=len(self.pq)-1
        while(idx>1 and self.pq[idx//2]<key):
            self.pq[idx//2],self.pq[idx]=self.pq[idx],self.pq[idx//2]
            idx=idx//2
    
    def delete(self):
        if(len(self.pq)<=1):return 0
 
        self.pq[1],self.pq[len(self.pq)-1]=self.pq[len(self.pq)-1],self.pq[1]
        res=self.pq.pop()
        idx=1
        while(2*idx<=len(self.pq)-1):
            child=2*idx
            if(child<len(self.pq)-1 and self.pq[child]<self.pq[child+1]): child=child+1
            if(self.pq[idx]>=self.pq[child]): break
            self.pq[idx],self.pq[child]=self.pq[child],self.pq[idx]
            idx=child
       
        return res
            
def main():
    n=int(input())
    maxheap=MaxHeap()
    for _ in range(n):
        key=int(input())
        maxheap.insert(key) if key else print(maxheap.delete())
        
main()        