import sys
input = sys.stdin.readline
def main():
    n=int(input())
    rainbow=set()
    total=0

    
    for _ in range(n):
        line=input().rstrip()
        name1,name2=line.split(" ")
        
        if name1 =="ChongChong" or name2=="ChongChong":
            rainbow.update([name1,name2])
            continue
        
        if name1 in rainbow or name2 in rainbow:
            rainbow.update([name1,name2])
        
            
    total+=len(rainbow)
    print(total)

main()