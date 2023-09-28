import sys
import math

input=sys.stdin.readline

def ccw(i,j,k):
    area2 = (j[0]-i[0])*(k[1]-i[1])-(j[1]-i[1])*(k[0]-i[0])
    return True if area2>0 else False
    
def grahamScan(points):
    points.sort(key=lambda x:(x[1],-x[0])) 
    start=points[0]# 시작점 설정
    sorted_point=sorted(points,key=lambda p:(math.atan2(p[1]-start[1],p[0]-start[0])))#각도 계산 및 정렬   
    output=[sorted_point[0]]
    
    for i in range(1,len(sorted_point)):
        checkpoint=sorted_point[i]
        while(len(output) >= 2 and not ccw(output[-2],output[-1],checkpoint)):
                output.pop()
        output.append(checkpoint)
        
   
            
    return len(output)
            

def main():
    t=int(input())
    points=[]
    for _ in range(t):
        n,m=map(int,input().split())
        points.append((n,m))
    res=grahamScan(points)
    print(res)
        
        
main()