#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	long int a, b;

	scanf("%ld%ld", &a, &b);
	printf("%ld", a + b);

	return 0;
}