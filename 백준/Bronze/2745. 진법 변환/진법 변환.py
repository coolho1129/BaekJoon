def main():
    N,B=input().split()
    B=int(B)
    result=0
    for i in range(len(N)-1,-1,-1):
         if('0'<=N[i]<='9'):
             result+=int(N[i])*(B**(len(N)-1-i))
         else:
            result+=(ord(N[i])-ord('A')+10)*(B**(len(N)-1-i))
            
    print(result)
    
main()
            