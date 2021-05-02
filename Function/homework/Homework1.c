#include <stdio.h>

int checkDate(int d, int m, int y) {
    int date;
    switch (m) {
        case 1:
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            date = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            date = 30;
            break;
        default:
            date = 28; // if normal February
            break;
    }
    // Check if in special year => Feb 29
    if (m == 2 && (y % 4 == 0 || y % 100 == 0 || y % 400 == 0)) date = 29;

    // d input <= default date => return 1 true
    if (d <= date) {
        return 1;
    }
    return 0;
}

void main() {
    int day, month, year;
    printf("Enter date : ");
    scanf("%d", &day);

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);

    if (checkDate(day, month, year)) {
        printf("Your date is valid.");
    } else {
        printf("Your date is invalid.");
    }
}