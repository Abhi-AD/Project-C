#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The sum is: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The quotient is: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
