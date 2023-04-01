import sys
input=sys.stdin.readline

def main():
    n=int(input())
    db=set()
    for _ in range(n):
        name,check=input().split()
        if(check=='enter'):
            db.add(name)
        else:
            db.remove(name)
        
    
    db=list(db)
    db.sort(reverse=True)
    for res in db:
        print(res)
    
            
    
main()

