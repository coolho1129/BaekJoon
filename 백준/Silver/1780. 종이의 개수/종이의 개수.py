import sys
input=sys.stdin.readline

counts=[0]*3

def countPaper(paper,starti,startj,size):
    cnt1,cnt2,cnt3=0,0,0
    end=size*size
    for i in range(starti,starti+size):
        for j in range(startj,startj+size):
            if paper[i][j]==-1:
                cnt1+=1
            elif paper[i][j]==0:
                cnt2+=1
            else:
                cnt3+=1
    if(cnt1==end):
        counts[0]+=1
    elif(cnt2==end):
        counts[1]+=1
    elif(cnt3==end):
        counts[2]+=1
    else:
        size//=3
        countPaper(paper,starti,startj,size)
        countPaper(paper,starti,startj+size,size)
        countPaper(paper,starti,startj+size*2,size)
        
        countPaper(paper,starti+size,startj,size)
        countPaper(paper,starti+size,startj+size,size)
        countPaper(paper,starti+size,startj+size*2,size)
        
        countPaper(paper,starti+size*2,startj,size)
        countPaper(paper,starti+size*2,startj+size,size)
        countPaper(paper,starti+size*2,startj+size*2,size)
        
        
    



def main():
    n=int(input())
    paper=[ list(map(int,input().split())) for _ in range(n)]
    # for i in range(0,9):
    #     for j in range(0,9):
    #         print(paper[i][j],end=" ")
    #     print()
    countPaper(paper,0,0,n)
    for count in counts:
        print(count)
        
            
            
        
            
main()