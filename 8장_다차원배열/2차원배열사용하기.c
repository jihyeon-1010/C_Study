#include <stdio.h>

int main(void) {
	int arr[4][2] = {
		{1, 2},
		{3, 4},
		{5, 6},
		{7, 8}
	};

	arr[3][0] = 9;
	arr[3][1] = 10;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2차원 배열 [%d][%d]의 값: %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}