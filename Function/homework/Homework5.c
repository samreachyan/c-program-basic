#include <stdio.h>

// return function
// calculate => 182 -> 1+8+2=11
/*
    182 / 10 = 18 % 2
    18 / 10 = 1 % 8
    1 / 10 = 0 % 1
    0 stop loop
*/
int digitNum(int n) {
    int ans=0;
    while (n != 0)
    {
        ans = ans + (n % 10);
        n = n / 10;
        // printf("n %d\n", n);
    }
    return ans;
}

void main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("The answer = %d ", digitNum(n));
}