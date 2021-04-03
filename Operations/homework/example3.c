#include <stdio.h>

void main() {
    int a, b, c, max, min;
    printf("Input 3 numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    // find max
    if (a > b) {
        if ( a > c) max = a;
        else max = c;
    } else { 
        if ( b > c) max = b;
        else max = c;
    }

    // find min
    if (a > b) {
        if (b > c) min = c;
        else min = b;
    } else { 
        if (a > c) min = c;
        else min = a;
    }
    printf("max %d, min %d", max, min);
}