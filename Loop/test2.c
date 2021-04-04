// S = 1+2+3+...+10
#include <stdio.h>

void main() {
    int i, n, sum=0;
    printf("Input n = ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + i;
        printf("%d %d \n", i, sum);
        
    }
    printf("Sum = %d \n", sum);
}