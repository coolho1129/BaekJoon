import sys
input=sys.stdin.readline

def main():
    n,m=map(int,input().split())
    dic={}
    for _ in range(n):
        word=input().rstrip()
        if(len(word)>=m):
            if(not dic.get(word)):
               dic[word]=1
            else:
                dic[word]+=1 
            
    result=sorted(dic.items(),key=lambda dic:[-dic[1],-len(dic[0]),dic[0]])

    for res in result: 
        print(res[0])
   
    
            
    
main()
