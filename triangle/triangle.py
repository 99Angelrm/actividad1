""" print("Welcome to the program that determines if three positive numbers can make a triangle.")
a = abs(float(input("Enter first side: ")))
b = abs(float(input("Enter second side: ")))
c = abs(float(input("Enter third side: ")))

if a<0 or b<0 or c<0:
    print("Please, input positive numbers.")
elif ((a+b)>c and (b+c)>a and (c+a)>b): #check the condition if true then the sides are not the part of the triangle.
    print("They can form a triangle")
else:
    print("They cannot form a triangle") """
import sys

a = abs(float(sys.argv[1])) #input first side
b = abs(float(sys.argv[2])) #input second side
c = abs(float(sys.argv[3])) #input third side

if(len(sys.argv)>3): #condition to make
    if a<0 or b<0 or c<0: #condition to make the sides positive
        print("Please, input positive numbers.")
    elif ((a+b)>c and (b+c)>a and (c+a)>b): #check the condition if true then the sides are not the part of the triangle.
        print("They can form a triangle")
    else:
        print("They cannot form a triangle")
else:
    print("More parameters are needed to execute.")
