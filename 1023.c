#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define LEN 12

int main(void)
{
    char num[LEN] = { 0, };

    scanf("%s", &num);
    for (int i = 0; i < strlen(num); i++) {
        if (num[i] == '.')
            printf("\n");
        else
            printf("%c", num[i]);
    }

    return 0;
}