// S(n) = 1/1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n)
#include <stdio.h>
#include <math.h> // pow(),sqrt(), cos(), sin(),
// ceil, floor, round, abs

double SumSeries(int n) {
    double ans=0;
    int i, j;
    // code 
    for(i=1; i<=n; i++) {
        // រកផលបូកភាគបែង
        double sumBelow=0;
        for(j=1; j <= i; j++) {
            sumBelow += j;
        }
        //ផលបូកសរុប
        ans += 1/sumBelow;
    }
    return ans;
}

void main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("\n Ans = %.3lf ", SumSeries(n));
    printf("\n Ans = %.3lf ", SumSeries(10));
    printf("\n Ans = %.3lf ", SumSeries(20));
}