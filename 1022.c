#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LEN 2000

int main(void)
{
    char line[LEN + 1] = "";

    fgets(line, LEN, stdin);
    printf("%s", line);

    return 0;
}