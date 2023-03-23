#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, w;
	int n;
	int l, d, x, y;
	int** arr;

	scanf("%d%d", &h, &w);
	arr = (int**)calloc(h, sizeof(int**));
	for (int i = 0; i < h; i++)
		arr[i] = (int*)calloc(w, sizeof(int*));

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &l, &d, &x, &y);
		for (int j = 0; j < l; j++) {
			if (d == 1)
				arr[x + j - 1][y - 1] = 1;
			else
				arr[x - 1][y + j - 1] = 1;
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}