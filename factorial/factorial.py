print("Welcome to the program that returns the factorial of an integer number.")
num = int(input("Enter the number: "))
factorial = 1

# check if the number is negative, positive or zero
if num < 0:
   print("Please, input a positive number.")
elif num == 0:
   print("The factorial of 0 is 1.")
else:
   for i in range(1,num + 1):
       factorial = factorial*i
   print("The factorial of",num,"is",factorial)