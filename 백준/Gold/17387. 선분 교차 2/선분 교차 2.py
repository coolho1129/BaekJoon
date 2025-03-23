import sys
input = sys.stdin.readline

def ccw(a, b, c):
    D = (a[0]*b[1] + b[0]*c[1] + c[0]*a[1]
         - a[1]*b[0] - b[1]*c[0] - c[1]*a[0])
    if D > 0:
        return 1
    elif D < 0:
        return -1
    else:
        return 0

def main():
    a1, a2, b1, b2 = map(int, input().split())
    c1, c2, d1, d2 = map(int, input().split())
    A = (a1, a2)
    B = (b1, b2)
    C = (c1, c2)
    D = (d1, d2)
    D1 = ccw(A, B, C) * ccw(A, B, D)
    D2 = ccw(C, D, A) * ccw(C, D, B)
    if D1 == 0 and D2 == 0:
        if A > B:
            A, B = B, A
        if C > D:
            C, D = D, C
        if A <= D and C <= B:
            print(1)
        else:
            print(0)
    elif D1 <= 0 and D2 <= 0:
        print(1)
    else:
        print(0)

if __name__ == "__main__":
    main()
