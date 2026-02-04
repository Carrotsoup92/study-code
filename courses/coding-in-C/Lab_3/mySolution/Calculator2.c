#include <stdio.h>

double value1 = 0;
double value2 = 0;
char operator = 0;
double sum = 0;

int main() {    
    printf("Enter first number: ");
    if (scanf("%f", &value1) != 1)   // Check if the input is a valid float
    {
        printf("Invalid input for the first number.\n");
        return 1;    // Exit main with an error code
    }

    printf("Enter second number: ");
    if (scanf("%f", &value2) != 1)  // Check if the input is a valid float
    {
        printf("Invalid input for the second number.\n");
        return 1;    // Exit main with an error code, 
    }
    
    if (operator == '+'|| operator == '-' ||operator == '*' || operator == '/') {
    }
    else {
        printf("Invalid operator\n");
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);
    }

   switch (operator)
   {
   case '+':
        sum = value1 + value2;
        printf("Result: %.2lf\n", sum);
        break;
   case '-':
        sum = value1 - value2;
        printf("Result: %.2lf\n", sum);
        break;
   case '*':
        sum = value1 * value2;
        printf("Result: %.2lf\n", sum);
        break;
   case '/':
        if (value2 != 0) {
            sum = value1 / value2;
            printf("Result: %.2lf\n", sum);
        } else {
            printf("Error: Division by zero\n");
        }
        break;
   default:
    break;
   }
}