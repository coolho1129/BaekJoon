def hanoi(N, A, B, C):

    if N == 1:
        print("%d %d"%(A,C)) 

    else:
        hanoi(N - 1, A, C, B)
        print("%d %d"%(A,C))
        hanoi(N - 1, B, A, C)

    
n=int(input())
print(2**n-1)

if n<=20:
    hanoi(n,1,2,3)
    