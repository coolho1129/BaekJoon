import sys
input=sys.stdin.readline

def integration(fx,sign):
    
    if fx == "_":
        return "_"
    
    x_degree = fx.count('x')
    coefficient = fx.split('x')[0]
    
    new_degree = x_degree + 1
    new_coefficient = str(int(coefficient) // new_degree)
    
    
    if new_coefficient == '1':
        res = "x"* new_degree if sign == 1 else "-"+"x" * new_degree
        
    else:
        res = new_coefficient + "x" * new_degree if sign == 1 else "-" + new_coefficient + "x" * new_degree


    return res
        
def main():
    poly = input().strip()
    gx = "_"
    sign1 = 1
    sign2 = 1
    
    if poly[0] == '0':
        print('W')
        return 
    
    if poly[0] == '-':
        sign1 = -1
        poly = poly[1:]
        
    if '-' in poly:
        sign2 = -1
        fx, gx = poly.split('-')
        
    elif '+' in poly:
        fx, gx = poly.split('+')
    
    else:
        fx = poly
    
    new_fx = integration(fx,sign1)
    new_gx = integration(gx,sign2)
    
    if new_gx == "_":
        res = new_fx + "+W"
        
    else:
        res = new_fx + ("+" + new_gx if sign2 == 1 else new_gx)+ "+W"
        
    print(res)
    
     
if __name__ == "__main__":
    main()