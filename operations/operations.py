# print("Welcome to the program that returns the result of the given operation of two numbers.")
# array={"+","-","*","/"}
# op=input("Select operation (+, -, *, /) ")

# if(op in array):
#     a=abs(float(input("Enter first number: ")))
#     b=abs(float(input("Enter second number: ")))
#     if((op=="/")and(b==0)):
#         print("Division by zero is infite.")
#     elif(op=="+"):
#         print("The result of",a,"+",b,"is equal to",a+b)
#     elif(op=="-"):
#         print("The result of",a,"-",b,"is equal to",a-b)
#     elif(op=="*"):
#         print("The result of",a,"*",b,"is equal to",a*b)
#     elif(op=="/"):
#         print("The result of",a,"/",b,"is equal to",a/b)
#     else:
#         print("Not valid operation.")
# else:
#     print("Not valid operation.")

import sys
array={"+","-","*","/"}
op=sys.argv[1]

if (len(sys.argv)>3):
    if(op in array):
        a=abs(float(sys.argv[2]))
        b=abs(float(sys.argv[3]))
        if((op=="/")and(b==0)):
            print("Division by zero is infite.")
        elif(op=="+"):
            print("The result of",a,"+",b,"is equal to",a+b)
        elif(op=="-"):
            print("The result of",a,"-",b,"is equal to",a-b)
        elif(op=="*"):
            print("The result of",a,"*",b,"is equal to",a*b)
        elif(op=="/"):
            print("The result of",a,"/",b,"is equal to",a/b)
        else:
            print("Not valid operation.")
    else:
        print("Not valid operation.")
else:
    print("More parameters are needed to execute.")