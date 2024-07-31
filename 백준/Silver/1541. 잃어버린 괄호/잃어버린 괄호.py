import sys, re

input = sys.stdin.readline

def main():
    formula = input().strip()
    nums = re.split(r"[\+\-]", formula)
    ops = re.findall(r"[\+\-]", formula)
    res = 0

    idx = ops.index("-") if "-" in ops else None
    res = sum(map(int, nums)) if idx is None else (sum(map(int, nums[: idx + 1]))-1*sum(map(int,nums[idx + 1 :])))
    print(res)

if __name__ == "__main__":
    main()
