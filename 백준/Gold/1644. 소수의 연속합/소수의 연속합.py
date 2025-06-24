import sys
input = sys.stdin.readline

def get_primes(n):
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(n ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, n + 1, i):
                is_prime[j] = False
    return [i for i, val in enumerate(is_prime) if val]

def main():
    n = int(input())
    primes = get_primes(n)

    left = 0
    right = 0
    total = 0
    res = 0

    while True:
        if total >= n:
            if total == n:
                res += 1
            total -= primes[left]
            left += 1
        elif right == len(primes):
            break
        else:
            total += primes[right]
            right += 1

    print(res)

if __name__ == "__main__":
    main()
