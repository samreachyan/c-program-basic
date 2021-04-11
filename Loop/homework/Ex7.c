// S(n!) = 0!+1!+2!+3!+ ... +n! 
#include <stdio.h>

void main() {
    int i, j, sum=0, fact=1,n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        // printf("%d", i);
        if (i==0) {
            fact = 1;
        }
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += fact;
    }
    printf("Sum = %d\n", sum);
}