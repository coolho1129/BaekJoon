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
    result=[[0 for _ in range(size)] for _ in range(size)]
    for i in range(0,size):
        result[i][i]=1

    
    while(n>0):
        if n%2==1:
            result=matrix_mul(result,matrix)
            
        matrix=matrix_mul(matrix,matrix)
        n//=2
    
    return result


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


