#include <stdio.h>
void main() {
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a); // input from keyboard
    
    printf("Enter b = ");
    scanf("%d", &b); // input from keyboard
    
    // scanf("%d %d", &a, &b);
    int c = a + b;
    printf("a + b = %d \n", c);
}