import sys
input=sys.stdin.readline
    
def main():
    n = int(input())
    res = 0
    for _ in range(n):
        a, b = map(int, input().split())
        res += a*b
        
    print(res)
        
if __name__ == "__main__":
    main()