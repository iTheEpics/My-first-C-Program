#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
   
    double num1;
    double num2;
    char op;


        printf("Enter a number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Please enter a valid number.\n");
        return 1;
    }
    
    printf("Enter an operator: ");
    scanf(" %c", &op);
    if (op !='+' && op !='-' && op != '/' && op != '*')
    {
        printf("Please enter a valid operator.\n");
        return 1;
    }
    
    printf("Enter a number: ");
    if(scanf("%lf", &num2) != 1){
        printf("Please enter a valid number.\n");
        return 1;
    }
    
    if (op == '+')
    {
        printf("%lf\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%lf\n", num1 - num2);
    }
    else if (op == '/' && op == 0)
    {
        printf("Please enter valid divisor.\n");
    }
    else if (op == '/')
    {
        printf("%lf\n", num1 / num2);
    }
    else if (op == '*')
    {
        printf("%lf\n", num1 * num2);
    }

}


