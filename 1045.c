#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%ld\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a - (a / b) * b);
	printf("%.2lf\n", a / (double)b);

	return 0;
}