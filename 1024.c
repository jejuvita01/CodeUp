#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void)
{
    char word[LEN + 1] = "";

    scanf("%s", &word);
    for (int i = 0; i < strlen(word); i++)
        printf("\'%c\'\n", word[i]);

    return 0;
}