import sys, math
sys.setrecursionlimit(10**6)
input=sys.stdin.readline

def main():
    
    n = int(input())
    cnt = [0]*26
    for i in range(n):
       name = input().strip()
       cnt[ord(name[0])-ord('a')] += 1
       
    if max(cnt) < 5:
        print("PREDAJA")
    
    for i in range(26):
        if cnt[i] >= 5:
            print(chr(i+ord('a')),end='')
  
            
if __name__ == '__main__':
    main()