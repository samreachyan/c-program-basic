#include<stdio.h>

void main() {
    float a, b;
    printf("Input 2 numbers: ");
    scanf("%f %f", &a, &b);

    float  s = a + b;
    float tb = s/2;
    printf("%.2f %.2f \n", s, tb);    
}