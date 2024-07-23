import sys, math
input = sys.stdin.readline

def main():
    x, y, d, t = map(int, input().split())
    distance = (x**2 + y**2)**0.5
    sec = 0

    if distance < t:
        sec = distance

    else:
        jump = distance // d
        sec = distance
        distance -= d * jump
        sec = (
            min(t + d - distance, 2 * t, sec)
            if jump == 0
            else min(jump * t + distance, (jump + 1) * t, sec)
        )

    print(sec)


if __name__ == "__main__":
    main()
