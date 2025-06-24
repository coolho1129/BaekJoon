import sys
input = sys.stdin.readline

def main():
    n = int(input())
    wires = [tuple(map(int, input().split())) for _ in range(n)]
    wires.sort()

    b_list = [b for a, b in wires]
    sublen = [1] * n

    for i in range(n):
        for j in range(i):
            if b_list[j] < b_list[i] and sublen[j] + 1 > sublen[i]:
                sublen[i] = sublen[j] + 1

    print(n - max(sublen))

if __name__ == "__main__":
    main()
