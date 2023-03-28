#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char c;

	scanf("%c", &c);
	switch (c) {
	case 'A': printf("best!!!"); break;
	case 'B': printf("good!!"); break;
	case 'C': printf("run!"); break;
	case 'D': printf("slowly~"); break;
	default: printf("what?"); break;
	}

	return 0;
}