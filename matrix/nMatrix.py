def createNMatrix(n):
    mat=[]
    for i in range(n): 
        row=[]                              #temporary list to store the row
        for j in range(n): 
            row.append(int(input()))         #add the input to row list
        mat.append(row)                      #add the row to the list
    #print(mat)
    return mat

def print_matrix(n,mat):
    for i in range(n):
        for j in range(n):
            print(mat[i][j], end=" ")
        print()
    return 0

def matrixMultiplication(n,a,b):
    c=[]
    for i in range(n):
        row=[]
        for j in range(n):
            temp = 0
            for k in range(n):
                temp += a[i][k] * b[k][j];
            row.append(temp)
        c.append(row)
    return c


def nmatrix():
    A=[]
    B=[]
    C=[]

    n=int(input("enter the order of matrix: "))

    print("enter elements for the first matrix:")
    A=createNMatrix(n)
    print_matrix(n,A)

    print("enter elements for the second matrix:")
    B=createNMatrix(n)
    print_matrix(n,B)

    print("this is the result of the multiplication:")
    C=matrixMultiplication(n,A,B)
    print_matrix(n,C)

def main():
    nmatrix()

    return 0

if __name__ == '__main__':
    main()
    
