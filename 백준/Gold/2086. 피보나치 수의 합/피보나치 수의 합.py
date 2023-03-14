import sys
input = sys.stdin.readline

def matrix_mul(matrix1,matrix2):
    result=[[0 for _ in range(len(matrix2))] for _ in range(len(matrix1))]
    
    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j]+=matrix1[i][k]*matrix2[k][j]
            result[i][j]%=1000000000
    
    return result
            

def matrix_pow(matrix,n):
    size=len(matrix)
    if n==1:
         for i in range(size):
            for j in range(size):
                matrix[i][j]
         return matrix
    
    tmp=matrix_pow(matrix,n//2)
    if n % 2==1:
        return matrix_mul(matrix_mul(tmp, tmp), matrix)
    
    return matrix_mul(tmp, tmp)
    

def fibonacci(n):
    fibo=[[1],[0]]
    matrix=[[1,1],[1,0]]
    matrix=matrix_pow(matrix,n)
    result=matrix_mul(matrix,fibo)
     
    return result[1][0]
    

def main():
    a,b=map(int,(input().split()))
    sum=(fibonacci(b+2)-fibonacci(a+1))%1000000000
   
    print(sum)
    
main()