#include <stdio.h>

void main() {
    int a, b, c;
    printf("Input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < 0) {
        // a = a * (-1);
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    if (c < 0) {
        c *= -1;
    }
    printf("=> %d %d %d\n", a, b, c);
}