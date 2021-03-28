#include <stdio.h>

void main() {
	int a =8, b = 9, c =6, d;
	d = a / b * c + c++; // d=6, c => c=7;
	printf("%d %d %d %d", a,b, c, d);
}