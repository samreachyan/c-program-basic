#include <stdio.h>

int f(int x) {
    return x*x*x - 4*x*x + 2*x + 5;
}

void main() {
    int x;
    printf("Enter x : ");
    scanf("%d", &x);

    printf("Function f(%d) = %d", x, f(x));
}