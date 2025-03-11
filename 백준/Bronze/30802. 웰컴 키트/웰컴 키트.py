import sys
input=sys.stdin.readline
   
def main():
    n = int(input())
    sizes = list(map(int, input().split()))
    t,p = map(int, input().split())
    res1 = 0
    
    for size in sizes:
        res1 += (size//t+1 if size%t !=0 else size//t)
        
    res2 = n//p
    res3 = n%p
    print(res1)
    print(res2, res3)
   
    
if __name__ == '__main__':
    main()