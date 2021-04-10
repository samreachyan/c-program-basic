#include <stdio.h>

void main() {
    int i = 0, sum = 0;
    while(i < 10) {
        // i++; // 1 2 3
        if (i == 3) {
            break;
        }
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nsum = %d i=%d", sum, i );
}