#include <stdio.h>

void main() {
    char operation;
    int a, b;
    printf("Enter operation (+ - * /) : ");
    scanf("%c", &operation);

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    // check condition
    if (operation == '+') {
        printf("Result %d %c %d = %d \n", a, operation, b, a + b);
    } else if (operation == '-') {
        printf("Result %d %c %d = %d \n", a, operation, b, a - b);
    } else if (operation == '*') {
        printf("Result %d %c %d = %d \n", a, operation, b, a * b);
    } else if (operation == '/') {
        printf("Result %d %c %d = %.3f \n", a, operation, b, (float) a / b);
    } else {
        printf("You input wrong operation. Bye!!! (@_@) \n");
    }
}