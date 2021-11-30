#include <stdio.h>
#include <stdlib.h>

void createNMatrix(int n, double a[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)

        {

            a[i][j] = rand() % 20;
        }
    }
    /*

    printf("matrix of n * n order is\n");

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }*/
}

void print_mat(int r, int c, int m[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }
    return;
}

void matrixMultiplication(int n, double a[n][n], double b[n][n], double c[n][n])
{
    int i, j, k;
    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {

            c[i][j] = 0;

            for (k = 0; k < n; k++)

            {

                c[i][j] += a[i][k] * b[k][j];
            }

            //printf("%d ", c[i][j]);
        }

        //printf("\n");
    }
}

int main(int argc, char *argv[])
{
    double a[1000][1000], b[1000][1000], c[1000][1000];
    int n;

    //printf("enter the order of matrix: ");

    n = atoi(argv[1]);

    //printf("enter elements for the first matrix: \n");
    createNMatrix(n, a);

    //printf("enter elements for the second matrix: \n");
    createNMatrix(n, b);

    //printf("this is the result of the multiplication: \n");
    matrixMultiplication(n, a, b, c);

    return 0;
}