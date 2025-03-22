import sys,math
from collections import defaultdict
input=sys.stdin.readline

def gcd(a, b) :
  while b :
    a, b = b, a%b
  return a

def normalize(x, y):
    if x == 0:
        y = 1
        
    elif y == 0:
        x = 1
    
    else:
        gcd_value = gcd(abs(x), abs(y))
        x, y = x // gcd_value, y // gcd_value
    
    return (x, y)

def main():
    num_points = int(input())
    orthogonal_counter = defaultdict(int)
    zero_vector_count = 0
    orthogonal_pairs_count = 0

    for _ in range(num_points):
        x, y = map(int, input().split())
        if x == 0 and y == 0:
            zero_vector_count += 1
            continue
        x, y = normalize(x, y)
        
        orthogonal_pairs_count += orthogonal_counter[(x, y)]
        orthogonal_counter[(-y, x)] += 1
        orthogonal_counter[(y, -x)] += 1

    result = orthogonal_pairs_count + zero_vector_count * (num_points - zero_vector_count) + (zero_vector_count * (zero_vector_count - 1) // 2)
    print(result)
            
if __name__ == "__main__":
    main()