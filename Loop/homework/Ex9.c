/*
    143 / 10 = 14 % 3
    14 / 10 = 1 % 4
    1 / 10 = 0 % 1 
    0 / 10 Not work 
    => 3+4+1 = 8

    1746 / 10 = 174 % 6
    174 / 10 = 17 % 4
    17 / 10 = 1 % 7
    1 / 10 = 0 % 1
    => 6+4+7+1 = 18 
*/
#include <stdio.h>
void main() {
    int n, mod, sum=0;
    printf("Enter n : ");
    scanf("%d",&n);

    while(n != 0) {
        mod = n % 10; // យកសំណល់
        if (mod % 2 == 0){
            sum += mod; // បូកសំណល់
            printf("%d + ", mod);
        }
        n = n / 10; // យកចម្លើយថ្មីបោះទៅ n
    }
    printf("\b\b \nSum = %d \n", sum);
}