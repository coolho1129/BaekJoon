import sys
import bisect
input = sys.stdin.readline

def main():
    n = int(input())
    wires = [tuple(map(int, input().split())) for _ in range(n)]
    wires.sort()

    b_list = [b for a, b in wires]
    dp = []
    from_idx = [-1] * n
    dp_idx = []

    for i in range(n):
        b = b_list[i]
        pos = bisect.bisect_left(dp, b)
        if pos == len(dp):
            dp.append(b)
            dp_idx.append(i)
        else:
            dp[pos] = b
            dp_idx[pos] = i
        if pos > 0:
            from_idx[i] = dp_idx[pos - 1]

    lis_idx = []
    k = dp_idx[-1]
    while k != -1:
        lis_idx.append(k)
        k = from_idx[k]
    lis_idx = set(lis_idx)

    result = []
    for i in range(n):
        if i not in lis_idx:
            result.append(wires[i][0])
    result.sort()
    print(len(result))
    for a in result:
        print(a)

if __name__ == "__main__":
    main()
