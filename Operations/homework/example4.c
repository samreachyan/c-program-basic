#include <stdio.h>

void main(){
    char ch;
    printf("Input a char : ");
    scanf("%c", &ch);
    // A 65 => Z = 90
    // a = 97 => z = 122
    
    // check A->Z
    if (ch >= 65 && ch < 90){
        printf("=> %c \n", ch+33);
    } 
    // a->z
    else if (ch >= 97 && ch < 122) {
        printf("=> %c \n", ch-31);
    }
    // Z 
    else if (ch == 90) {
        printf("=> %c \n", ch+7);
    }
    // z 
    else if (ch == 122) {
        printf("=> %c \n", ch-57);
    }
    else {
        printf("You input invalid");
    }
}