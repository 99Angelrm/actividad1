#include <stdio.h>

void createNMatrix(int n, int a[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)

        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix of n * n order is\n");

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
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

void matrixMultiplication(int n, int a[n][n], int b[n][n], int c[n][n])
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

            printf("%d ", c[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int n;

    printf("enter the order of matrix: ");

    scanf("%d", &n);

    printf("enter elements for the first matrix: \n");
    createNMatrix(n, a);

    printf("enter elements for the second matrix: \n");
    createNMatrix(n, b);

    printf("this is the result of the multiplication: \n");
    matrixMultiplication(n, a, b, c);

    return 0;
}