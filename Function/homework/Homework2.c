#include <stdio.h>

int getDays(int d, int m, int y) {
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
    if (m == 2 && (y % 4 == 0 || y % 100 == 0 || y % 400 == 0)) 
        return date = 29;

    return date;
}

int TotalDate(int d, int m, int y) {
    int s=0, i;
    for(i=1; i<m; i++) {
        printf("%d ", getDays(d,i,y));
        s += getDays(d, i, y);
    }
    s += d;
    printf("%d \n", d);
    return s;
}

void main() {
    int day, month, year;
    printf("Enter date : ");
    scanf("%d", &day);

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);

    printf("Total date : %d \n", TotalDate(day, month, year));
}