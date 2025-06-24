import sys
input = sys.stdin.readline

def get_max_area(hist, left, right):
    if left == right:
        return hist[left]

    mid = (left + right) // 2
    left_area = get_max_area(hist, left, mid)
    right_area = get_max_area(hist, mid + 1, right)

    low = mid
    high = mid + 1
    height = min(hist[low], hist[high])
    mid_area = height * 2

    while left < low or high < right:
        if high < right and (low == left or hist[low - 1] < hist[high + 1]):
            high += 1
            height = min(height, hist[high])
        else:
            low -= 1
            height = min(height, hist[low])
        mid_area = max(mid_area, height * (high - low + 1))

    return max(left_area, right_area, mid_area)

def main():
    while True:
        data = list(map(int, input().split()))
        if data[0] == 0:
            break
        n = data[0]
        hist = data[1:]
        print(get_max_area(hist, 0, n - 1))

if __name__ == "__main__":
    main()
