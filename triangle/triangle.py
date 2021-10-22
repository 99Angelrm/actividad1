print("Welcome to the program that determines if three positive numbers can make a triangle.")
a = abs(float(input("Enter first side: ")))
b = abs(float(input("Enter second side: ")))
c = abs(float(input("Enter third side: ")))

if a<0 or b<0 or c<0:
    print("Please, input positive numbers.")
elif ((a+b)>c and (b+c)>a and (c+a)>b): #check the condition if true then the sides are not the part of the triangle.
    print("They can form a triangle")
else:
    print("They cannot form a triangle")
