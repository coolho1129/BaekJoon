import sys
input = sys.stdin.readline

def main():
    n = int(input())
    num = list(map(int, input().split()))
    sublen = [1 for _ in range(n)]
    from_idx = [-1 for _ in range(n)]

    for i in range(1, n):  
        for j in range(0, i):
            if num[j] < num[i] and sublen[j] + 1 > sublen[i]:
                sublen[i] = sublen[j] + 1
                from_idx[i] = j

    maxlen = max(sublen)
    print(maxlen)

    idx = sublen.index(maxlen)
    result = []
    while idx != -1:
        result.append(num[idx])
        idx = from_idx[idx]

    result.reverse()
    print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()
