#include <stdio.h>

void main() {
    int a, b;
    // Recieve a value
    printf("Enter a = "); 
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    printf("a = %d, b = %d \n", a, b);
    int tem;
    tem = a;
    a = b;
    b = tem;
    printf("a = %d, b = %d \n", a, b);

}