#include <stdio.h>
void main() {
    int n, i;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n], b[n], s[n], sum=0;
    // input from user to array A, B
    for (i=0; i < n; i++) {
         printf("Input arrA[%d] = ", i);
         scanf("%d", &a[i]);
    }
    for (i=0; i < n; i++) {
         printf("Input arrB[%d] = ", i);
         scanf("%d", &b[i]);
    }
    for (i=0 ; i < n; i++) {
         s[i]=0;
         s[i] = a[i] + b[i];
         sum += s[i];
     }

     printf("Display sum of each index\n");
     for (i=0; i < n; i++) {
         printf("Sum[%d] = %d \n", i, s[i]);
     }
     printf("All sum each array = %d \n", sum);
}