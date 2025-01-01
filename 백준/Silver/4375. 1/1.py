import sys

def sol(n):
    x = 1
    res = 1
    while True:
        if x % n == 0:
            break
        x *= 10
        x += 1
        res += 1

    print(res)

def main():
    lines = sys.stdin.readlines()
    for n in lines:
        sol(int(n))

if __name__ == "__main__":
    main()