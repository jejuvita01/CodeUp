#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM 3

int main(void)
{
	int n;

	for (int i = 0; i < NUM; i++) {
		scanf("%d", &n);
		if (n % 2 == 0)
			printf("%d\n", n);
	}

	return 0;
}