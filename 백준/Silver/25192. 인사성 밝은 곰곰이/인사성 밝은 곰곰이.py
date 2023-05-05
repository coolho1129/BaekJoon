import sys
input = sys.stdin.readline
def main():
    n=int(input())
    gomgom=set()
    total=0
    
    for _ in range(n):
        chat=input().rstrip()
        if chat !="ENTER":
            gomgom.add(chat)
        else:
            total+=len(gomgom)
            gomgom=set()
            
    total+=len(gomgom)
    print(total)

main()