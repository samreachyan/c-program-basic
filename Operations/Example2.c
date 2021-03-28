// Enter a, b
// a > b 
//     c = a - b;
// a < b
//     c = b - a
// printf(" C = %d", c);
#include <stdio.h>
void main() {
    int a, b;
    char s;
    scanf("%c", &s);
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (s == 'a') {
        printf("char condition works");
    }
    if (a > b) {
        printf("%d - %d = %d",a,b,a-b);
    }
    if (b > a) {
        printf("%d - %d = %d",b,a,b-a);
    }
    if (a == b) {
        printf("%d - %d = %d",a,b,a-b);
    }
}