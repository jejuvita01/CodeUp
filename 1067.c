#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%s\n", n > 0 ? "plus" : "minus");
	printf("%s\n", n % 2 == 0 ? "even" : "odd");

	return 0;
}