#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char a, b;

    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);

    return 0;
}