#include <stdio.h>

void main() {
    int i, n, sum = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d ", i*i*i);
        sum += i*i*i;
    }
    printf("\nSum = %d \n", sum);
}