#include <stdio.h>

void main() {
    int i, n, sum=0, sumKu=0;
    printf("Enter n = ");
    scanf("%d", &n);
    for(i=0; i<=n;i++) {
        if (i%2 != 0){
            sum += i;
        } else {
            sumKu += i;
        }
        // printf("%d - %d \n", i, sum);
    }
    printf("\nsum=%d \n", sum);
    printf("sumKu=%d \n", sumKu);
}