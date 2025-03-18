import sys, math
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def cross_product(i,j,k):
    return (j[0]-i[0])*(k[1]-i[1])-(j[1]-i[1])*(k[0]-i[0])

def ccw(i,j,k):
    return True if cross_product(i,j,k)>0 else False
    
def grahamScan(points):
    points.sort(key=lambda x:(x[1],x[0]))
    start=points[0] # 시작점 설정
    sorted_point=sorted(points,key=lambda p:(math.atan2(p[1]-start[1],p[0]-start[0]))) #각도 계산 및 정렬   
    output=[sorted_point[0],sorted_point[1]]
    
    for i in range(2,len(sorted_point)):
        checkpoint=sorted_point[i]
        while(len(output) >= 2 and not ccw(output[-2],output[-1],checkpoint)):
                output.pop()
        output.append(checkpoint)
              
    return output

def is_inside(points,px,py):
    n = len(points)
    cross_product_list = [cross_product(points[i], points[(i + 1) % n], (px, py)) for i in range(n)]
    # 모든 교차곱이 음수이거나 모두 0 이상이이면 내부 혹은 경계
    return True if (min(cross_product_list) >= 0) or (max(cross_product_list) <= 0) else False 

def main():
    
    n,px,py = map(int,input().split())
    points = []
    res = 0 

    for _ in range(n):
        x,y = map(int,input().split())
        points.append((x,y))
                
    while True:
       
        if len(points) < 3: 
            break
       
        convex_hull = grahamScan(points)
        
        if is_inside(convex_hull,px,py) is False:
            break
        
        convex_hull_set = set(convex_hull)  
        points = [point for point in points if point not in convex_hull_set]
        res+=1
      
        
    print(res)
            
if __name__ == '__main__':
    main()