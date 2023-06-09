import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)

def backTrack(a,b,i,j,score,back,res):
    if back[i][j]=='S':
        res[0]=i
        res[1]=j
        return 
    else:
        if back[i][j]=='U':
            backTrack(a,b,i-1,j,score,back,res)
    
        elif back[i][j]=='L':
            backTrack(a,b,i,j-1,score,back,res)
    
        else:
            backTrack(a,b,i-1,j-1,score,back,res)
   
    

def main():
    x_len=int(input())
    x=input().rstrip()
    y_len=(int(input()))
    y=input().rstrip()
    match=3
    miss=-2
    gap=-2
    
    score_matrix=[[0 for _ in range(y_len+1)] for _ in range(x_len+1)]
    backtrack_matrix=[["S" for _ in range(y_len+1)] for _ in range(x_len+1)]
    


    for col in range(1,x_len+1):
        for row in range(1,y_len+1):
            s=miss
            if(x[col-1]==y[row-1]):
                s=match
            
            score_matrix[col][row]=max(0,score_matrix[col-1][row-1]+s,score_matrix[col][row-1]+gap,score_matrix[col-1][row]+gap)
            
            if(score_matrix[col][row]==0):
                backtrack_matrix[col][row]='S'
            
            elif(score_matrix[col][row]==score_matrix[col-1][row-1]+s):
                 backtrack_matrix[col][row]='D'
              
            
            elif(score_matrix[col][row]==score_matrix[col][row-1]+gap):
                backtrack_matrix[col][row]='L'
            
          
            elif(score_matrix[col][row]==score_matrix[col-1][row]+gap):
                backtrack_matrix[col][row]='U'
            
           
    # print("SCORE MATRIX")     
    # for i in range(0,x_len+1):
    #     for j in range(0,y_len+1):
    #           print("%5d"%(score_matrix[i][j]),end=" ")
    #     print()
        
    # print()
    # print("BACKTRACK MATRIX")  
    # for i in range(0,x_len+1):
    #     for j in range(0,y_len+1):
    #           print("%5s"%(backtrack_matrix[i][j]),end=" ")
    #     print()
        
    
    findmax=0
    maxi=0
    maxj=0
    res=[0,0]
    for i in range(0,x_len+1):
        if(findmax<max(score_matrix[i])):
            findmax=max(score_matrix[i])
            maxi=i
    
    maxj=score_matrix[maxi].index(findmax)
   
   
    backTrack(x,y,maxi,maxj,score_matrix,backtrack_matrix,res)
    print(findmax)
    # print(maxi,maxj)
    # print(res[0],res[1])
    # print()
    # print(x)
    # print(y)
    if(res[0]<0):
        res[0]=0
    if(res[1]<0):
        res[1]=0
    for i in range(res[0],maxi):
        print(x[i],end="")
    print()
    for j in range(res[1],maxj):
        print(y[j],end="")
        
    
        
main()
    