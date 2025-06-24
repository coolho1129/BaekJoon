import sys
input = sys.stdin.readline

def main():
    n, s = map(int, input().split())
    arr = list(map(int, input().split()))
    
    left = 0
    total = 0
    min_len = n + 1

    for right in range(n):
        total += arr[right]
        while total >= s:
            min_len = min(min_len, right - left + 1)
            total -= arr[left]
            left += 1

    print(min_len if min_len <= n else 0)

if __name__ == "__main__":
    main()
