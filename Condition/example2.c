#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c;
    printf("ax^2 + bx + c = 0 \n");
    scanf("%f%f%f", &a, &b, &c);

    // case a = 0
    if (a == 0) {
        float x = -c / b;
        printf("Phuong trinh x = %.2f", x);
    }
    // case a != 0
    // del = b*b  - 4*a*c;
    else {
        float delta = b*b - 4*a*c;
        // case delta > 0
        if (delta > 0) {
            float x1 = (-b+sqrt(delta))/2*a;
            float x2 = (-b-sqrt(delta))/2*a;
            printf("Phuong trinh co 2 nghiem. \n");
            printf("x1 = %.2f , x2 = %.2f", x1, x2);
        }
        // case delta == 0
        else if (delta == 0) {
            float x = -b/2*a;
            printf("Phuong trinh co 2 nghiem bang nhau \n");
            printf("x1 = x2 = %.2f", x);
        }
        // delta < 0
        else {
            printf("Phuong trinh vo nghiem.");
        }
    }
    printf("\nThanks!!\n");

}