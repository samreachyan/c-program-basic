#include <stdio.h>
int w = 20;

void Display(int n) {
    printf("Display function n = %d", n);
    printf("\nDisplay w = %d", w);
}

int SeriesSum(int n) {
    int i, sum=0;
    for(i=0; i<=n; i++) {
        sum += i;
    }
    // sum = 0 + 1 + ... + n
    printf("\nSum w = %d", w);
    return sum; 
}

void main() {
    Display(30);

    int s = SeriesSum(10);
    printf("\nMain w = %d", w);
    printf("\ns = %d", s);
}
