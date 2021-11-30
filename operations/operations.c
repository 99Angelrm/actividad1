#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int number1, number2, res;
    char op; 

    number1 = argv[1];
    number2 = argv[2];
    op = argv[3];

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