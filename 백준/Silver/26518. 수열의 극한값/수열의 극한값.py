import sys
input=sys.stdin.readline

def main():
    b,c,a_1,a_2=map(int,input().split())
    res=(b+(b**2+4*c)**0.5)/2
    print(res)
    
if __name__ == "__main__":
    main()