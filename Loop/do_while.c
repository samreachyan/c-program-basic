#include <stdio.h>

void main() {
    int i = 0, sum = 0;
    do {
        printf("%d ", i);
        i++;
        sum += i;
    } while (i < 2);
    printf("\nsum=%d, i=%d ",sum, i);
}