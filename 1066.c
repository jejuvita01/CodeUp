#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM 3

int main(void)
{
	int n;

	for (int i = 0; i < NUM; i++) {
		scanf("%d", &n);
		printf("%s\n", n % 2 == 0 ? "even" : "odd");
	}

	return 0;
}