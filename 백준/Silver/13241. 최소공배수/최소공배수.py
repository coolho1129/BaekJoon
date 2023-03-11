import sys

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def solve():
    a, b= map(int, sys.stdin.readline().split())
    print(lcm(a,b))
   
    
solve()
    
    
   
