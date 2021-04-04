#include <stdio.h>
#include <math.h> // pow, sqrt, ceil, floor...
void main() {
    int a, b, c;
    printf("Input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("=> %d %d %d\n", abs(a), abs(b), abs(c));
}