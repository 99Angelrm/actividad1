#include <stdio.h>
#include <string.h>

int main()
{
    int number1, number2, res;
    char op[2]; 

    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);
    
    printf("Enter your opetation [+,-,*,/]: ");
    scanf("%s", &op);

    if (strcmp(op, "+")==0){
        res = number1 + number2;
    } else if (strcmp(op, "-")==0){
        res = number1 - number2;
    } else if (strcmp(op, "*")==0){
        res = number1 * number2;
    } else if (strcmp(op, "/")==0){
        res = number1 / number2;
    } else {
        res = -1;
    }

    printf("The result of %d %s %d is %d", number1, op, number2, res);
    
    return 0;
}