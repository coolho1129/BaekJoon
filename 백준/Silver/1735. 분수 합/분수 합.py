import sys

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def solve():
    a, b= map(int, sys.stdin.readline().split())
    c,d = map(int, sys.stdin.readline().split())
    
    mo=lcm(b,d)
    ja=a*(mo//b)+c*(mo//d)
    
    gd=gcd(ja,mo)
    
    if(gd):
        ja//=gd
        mo//=gd
    
    print(ja,mo)
    
solve()
    
    
   
