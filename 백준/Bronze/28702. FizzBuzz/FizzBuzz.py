n1 = input()
n2 = input()
n3 = input()

if n1 == "FizzBuzz": # 15배수
    print("Fizz")
    
elif n1 == "Fizz": #3배수
    num = int(n2) if n2.isdigit() else int(n3)
    ans = num + (3 - (1 if n2.isdigit() else 2))
    print("FizzBuzz" if ans % 5 == 0 else "Fizz")
    
elif n1 == "Buzz": #5배수
    num = int(n2) if n2.isdigit() else int(n3)
    ans = num + (3 - (1 if n2.isdigit() else 2))
    print("Fizz" if ans % 3 == 0 else ans)
    
else:
    ans = int(n1) + 3
    if ans % 15 == 0:
        print("FizzBuzz")
    elif ans % 5 == 0:
        print("Buzz")
    elif ans % 3 == 0:
        print("Fizz")
    else:
        print(ans)
        


        