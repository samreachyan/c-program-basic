#include <stdio.h>

void main() {
    int i, j, n, s=1;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            if (j % 2 != 0) {
                printf("+ ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}