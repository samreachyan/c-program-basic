#include <stdio.h>

void main() {
    float mid, final;
    // printf("Middle term: ");
    // scanf("%f", &mid);

    // printf("Final : ");
    // scanf("%f", &final);

    printf("Input mid and final : ");
    scanf("%f%f", &mid, &final);

    // diem trung binh
    float tb =mid*0.3 + final*0.7;
    // check diem tb
    if (tb >= 9) 
        printf("Tb = %f Grade A.", tb);
    else if (tb >= 7 && tb < 9) 
        printf("Tb = %f Grade B.", tb);
    else if (tb >= 5 && tb < 7) 
        printf("Tb = %f Grade C.", tb);
    else printf("Tb = %f Grade F. Bye.", tb);
}