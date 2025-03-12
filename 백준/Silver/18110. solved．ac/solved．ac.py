import sys
input=sys.stdin.readline

def round(n, decimals=0):
    multiplier = 10 ** decimals
    return int((n * multiplier + 0.5) / multiplier)

def main():
    n = int(input())
    scores = [0]*n
    if n == 0:
        print(0)
        return
     
    for i in range(n):
        scores[i] = int(input())
    scores.sort()
    threshold = round(n*0.15)
    scores = scores[threshold:n-threshold]
    
    avg = sum(scores)/len(scores)
    avg = round(avg)
    print(avg)    
    
if __name__ == '__main__':
    main()