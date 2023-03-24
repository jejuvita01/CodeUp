#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LEN 5

int main(void)
{
    int n;
    int mul = 10000;

    for (int i = 0; i < LEN; i++) {
        scanf("%1d", &n);
        printf("[%d]\n", n * mul);
        mul /= 10;
    }

    return 0;
}