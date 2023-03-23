#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM 10

int main(void)
{
	int arr[NUM][NUM] = { 0, };
	int x, y;
	int stop = 0;

	// get the map info
	for (int i = 0; i < NUM; i++)
		for (int j = 0; j < NUM; j++)
			scanf("%d", &arr[i][j]);
	
	x = y = 1;

	while (stop == 0) {
		if ((x == NUM - 1 && y == NUM - 1) || (arr[x][y] == 2) || (arr[x][y + 1] == 1 && arr[x + 1][y] == 1)) {
			stop = 1;
			arr[x][y] = 9;
			break;
		}
		if (y < NUM && arr[x][y + 1] != 1)
			arr[x][y++] = 9;
		else if (x < NUM && arr[x + 1][y] != 1)
			arr[x++][y] = 9;
	}

	// print the map
	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < NUM; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}