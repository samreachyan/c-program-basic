#include <stdio.h>
// s(n) = 1+3+5+7+...+n
void main() {
    int i=1, n, sum=0;
    printf("Enter n : ");
    scanf("%d", &n);
    while(i <= n) {
        if (i%2 != 0){
            sum += i;
        }
        i++;
    }
    printf("\nSum = %d\n", sum);
}