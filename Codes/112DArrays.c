#include <stdio.h>

int main(void)
{
	int numbers[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	printf("2D array elements:\n");
	for (int row = 0; row < 2; row++) {
		for (int column = 0; column < 3; column++) {
			printf("%d ", numbers[row][column]);
		}
		printf("\n");
	}

	return 0;
}
