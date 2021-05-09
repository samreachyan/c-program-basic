#include <stdio.h>

void main() {
    char name[20];
    int count = 0, i = 0;
    printf("Enter your name : ");
    scanf("%s", name);
    // gets(name); 

    while (name[i] != '\0')
    {
        count++;
        i++;
    }   
    
    printf("Hi, %s ! you have %d characters. \n", name, count);
    printf("Display reverse : ");
    for (int i = count; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}