# include <stdio.h>
# include <stdlib.h>

void printDynamic2DArray(int** arr, int rows, int cols);
int main() {
	int rows = 3, cols = 3;

	int** arr = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++) {
		arr[i] = (int*)malloc(cols * sizeof(int));
	}

	int value = 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = value++;
		}
	}
	printDynamic2DArray(arr, rows, cols);

	for (int i = 0; i < rows; i++) {
		free (arr[i]);
	}
	free(arr);
	return 0;
}


void printDynamic2DArray(int **arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}