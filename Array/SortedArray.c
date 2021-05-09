#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    // input from user to array
    for (i=0; i < n; i++) {
         printf("Input array[%d] = ", i);
         scanf("%d", &a[i]);
    }
    printf("\nDisplay all array : ");
    for ( i = 0; i < n; i++) {
         printf("%d ", a[i]);
    }
    // sort code
    for (i=0; i < n; i++) {
         for ( j =i+1; j < n; j++) {
               if (a[i] > a[j]) {
                    int temp = a[i]; 
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     } 

    printf("\nSorted array : ");
    for ( i = 0; i < n; i++) {
         printf("%d ", a[i]);
    }

    // sort code
    for (i=0; i < n; i++) {
         for ( j =i+1; j < n; j++) {
               if (a[i] < a[j]) {
                    int temp = a[i]; 
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     } 

    printf("\nSorted array : ");
    for ( i = 0; i < n; i++) {
         printf("%d ", a[i]);
    }
}