#include <stdio.h>

void main() {
	int a = 7, b, c;
//	i++; i = i + 1;
// i--; i = i - 1;
	b = a++ + 2; // b=9 / a=8
	c = --a - b++; // a=7, b=9 => b=10
	
//	a 7, b 10, c -2
	printf("a = %d, b = %d, c = %d", a,b,c);
}