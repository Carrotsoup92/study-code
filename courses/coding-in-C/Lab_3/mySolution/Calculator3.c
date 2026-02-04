#include <stdio.h>

float mySum(float value1, float value2) {
    return value1 + value2;
}
float mySub(float value1, float value2) {
    return value1 - value2;
}
float myMul(float value1, float value2) {
    return value1 * value2;
}
float myDiv(float value1, float value2) {
        return value1 / value2;
    
}

int main() { 

float value1 = 0;
float value2 = 0;
char operator = 0;
float sum = 0;

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
        sum = mySum(value1, value2);
        printf("Result: %.2f\n", sum);
        break;
   case '-':
        sum = mySub(value1, value2);
        printf("Result: %.2f\n", sum);
        break;
   case '*':
        sum = myMul(value1, value2);
        printf("Result: %.2f\n", sum);
        break;
   case '/':
        if (value2 != 0) {
            sum = myDiv(value1, value2);
            printf("Result: %.2f\n", sum);
        } else {
            printf("Error: Division by zero\n");
        }
        break;
   default:
    break;
   }
}