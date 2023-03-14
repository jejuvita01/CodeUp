#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	for (int i = 0; i < b; i++)
		a <<= 1;
	printf("%d", a);

	return 0;
}