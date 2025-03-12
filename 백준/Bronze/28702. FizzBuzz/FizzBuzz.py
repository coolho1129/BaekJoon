n1 = input()
n2 = input()
n3 = input()

if n1 == "FizzBuzz":
    print("Fizz")
    
elif n1 == "Fizz":
    num = int(n2) if n2.isdigit() else int(n3)
    ans = num + (3 - (1 if n2.isdigit() else 1))
    print("FizzBuzz" if ans % 5 == 0 else "Fizz")
    
elif n1 == "Buzz":
    num = int(n2) if n2.isdigit() else int(n3)
    ans = num + (3 - (1 if n2.isdigit() else 2))
    print("Fizz" if ans % 3 == 0 else ans)
    
else:
    ans = int(n1) + 3
    print("FizzBuzz" if ans % 15 == 0 else "Fizz" if ans % 3 == 0 else "Buzz" if ans % 5 == 0 else ans)


        