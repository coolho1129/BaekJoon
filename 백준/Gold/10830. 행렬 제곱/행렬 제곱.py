import sys
input = sys.stdin.readline

def matrix_mul(matrix1,matrix2):
    size=len(matrix1)
    result=[[0 for _ in range(size)] for _ in range(size)]
    
    for i in range(size):
        for j in range(size):
            for k in range(size):
                result[i][j]+=matrix1[i][k]*matrix2[k][j]
            result[i][j]%=1000
    
    return result
            

def matrix_pow(matrix,n):
    size=len(matrix)
    if n==1:
         for i in range(size):
            for j in range(size):
                matrix[i][j]%=1000
         return matrix
    
    tmp=matrix_pow(matrix,n//2)
    if n % 2==1:
        return matrix_mul(matrix_mul(tmp, tmp), matrix)
    
    return matrix_mul(tmp, tmp)
    


def matrix_print(matrix):
    size=len(matrix)
    
    for i in range(size):
        for j in range(size):
            print(matrix[i][j],end=" ")
        print()


def main():
    a,b=map(int,(input().split()))
    matrix=[list(map(int,(input().split()))) for _ in range(a)]
    

    matrix_print(matrix_pow(matrix,b))
    
    

main()


