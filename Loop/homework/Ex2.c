#include <stdio.h>

void main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    
    if ((a>=0 && b>=0) || (a<0 && b<0)) {
        printf("The same sign");
    } else {
        printf("Not the same sign.");
    }
}