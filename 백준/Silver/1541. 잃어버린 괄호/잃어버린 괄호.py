import sys, re


input = sys.stdin.readline


def main():
    formula = input().strip()
    nums = re.split(r"[\+\-]", formula)
    ops = re.findall(r"[\+\-]", formula)
    res = 0

    idx = ops.index("-") if "-" in ops else None
    if idx is None:
        res = sum(map(int, nums))
    else:
        for num in nums[idx + 1 :]:
            res -= int(num)

        res += sum(map(int, nums[: idx + 1]))

    print(res)


if __name__ == "__main__":
    main()
