import sys
input=sys.stdin.readline

def infix_to_postfix(infix):
    stack = []
    postfix = []
    priors = {
        '+': 1,
        '-': 1,
        '*': 2,
        '/': 2,
        '(': 0
    }
    
    for ch in infix:
        if ch == '(':
            stack.append(ch)
    
        elif ch == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            
            if stack:
                stack.pop()
        
        
        elif ch in ['+', '-', '*', '/']:
            while stack and priors[stack[-1]] >= priors[ch]:
                postfix.append(stack.pop())
            stack.append(ch)
            
        else:
            postfix.append(ch)
                
        
    while stack:
        postfix.append(stack.pop())
    
    return ''.join(postfix) 
    
    
def main():
    infix = input().strip()
    print(infix_to_postfix(infix))
   
    
if __name__ == '__main__':
    main()