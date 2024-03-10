import sys
input = sys.stdin.readline

def main():
    n = int(input())
    costs = [0]*1001
    jincost = 0
    cnt = 0
    for _ in range(n):
        name, price = map(str,input().split())
        price = int(price) 
        
        if name == 'jinju':
            jincost = price
            continue  
            
        if price <= 1000:
            costs[price]+=1
        else:
            cnt+=1
            
    
    for res in costs[jincost+1:]:
        cnt+=res
        
    print(jincost)     
    print(cnt)

main()