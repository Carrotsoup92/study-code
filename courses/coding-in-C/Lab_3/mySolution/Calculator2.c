#include <stdio.h>

double value1 = 0;
double value2 = 0;
char operator = 0;
double sum = 0;

int main() {    
    printf("Enter first number: ");
    scanf("%lf", &value1);
    printf("Enter second number: ");
    scanf("%lf", &value2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

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