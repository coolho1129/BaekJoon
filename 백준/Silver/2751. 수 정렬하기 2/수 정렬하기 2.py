import random

def partition3Way(a, lo, hi):
    if (hi <= lo): return
    v = a[lo]
    lt, gt = lo, hi   
    i = lo
    while i <= gt:
        if a[i] < v:
            a[lt], a[i] = a[i], a[lt]  # Swap
            lt, i = lt+1, i+1
        elif a[i] > v:
            a[gt], a[i] = a[i], a[gt]  # Swap
            gt = gt-1
        else: i = i+1

    partition3Way(a, lo, lt-1)
    partition3Way(a, gt+1, hi)

def quickSort3Way(a):
    random.shuffle(a)

    partition3Way(a, 0, len(a)-1)
    return a

if __name__ == "__main__":
    n=int(input())
    a=[int(input()) for _ in range(n)]
    res=quickSort3Way(a)
    for r in res:
        print(r)
