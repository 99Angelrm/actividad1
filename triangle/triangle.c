

#include <stdio.h>

int main()
{
    int A, B, C, sum;

    printf("Enter three lengths of triangle: \n");
    scanf("%d%d%d", &A, &B, &C);
    if(A+B>C && B+C>A && C+A>B) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}