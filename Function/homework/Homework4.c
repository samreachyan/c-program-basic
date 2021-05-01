#include <stdio.h>

// function for input a number from user
// return number to main function
int inputNum() {
    int a;
    printf("Enter a = ");
    scanf("%d", &a);

    return a;
}
// calculate even number 
// return sum to main function
// EvenSum(13) => 0 + 2 + 4 + ...+ 12
int EvenSum(int n) {
    int i, sum=0;
    for(i=0; i<=n; i++) {
        if (i % 2 == 0){
            sum += i;
            // 0+2+4+...+n
        }
    }
    return sum;
}

void main() {
    int n = inputNum();
    int result = EvenSum(n);
    printf("Result even num = %d", result);
}