#include <stdio.h>

void main() {
    int x = 500, y = 200;
    char s = 'b';
    float c = (float) x / y;
    printf("This is char = %c", s);
    printf("\na * b = %d", x * y);
    printf("\na / b = %.2f", c);
    printf("\na - b = %d", x - y);
    printf("\na + b = %d \n", x + y);
}