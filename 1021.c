#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LEN 50

int main(void)
{
    char word[LEN + 1] = "";

    scanf("%s", &word);
    printf("%s", word);

    return 0;
}