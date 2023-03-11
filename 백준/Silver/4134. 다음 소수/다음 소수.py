def isprime(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def smallestprime(n):
    max=4*(10**9)+8
    if n==0 or n==1:
        return 2
    
    for i in range(n, max):
        if isprime(i):
            return i
    return 0



def solve():
    t=int(input())
    
    for _ in range(t):
        n=int(input())
        print(smallestprime(n))
   
   
    
solve()
    
    
   
