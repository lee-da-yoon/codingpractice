
# include <stdio.h>
# include <stdlib.h>

int compare(const void* a, const void* b);

int compare(const void* a, const void* b) {
	return (*(double*) a - *(double*)b);
}

int main() {
	double arr[] = { 5.0, 2.0, 9.0, 1.0, 5.0, 6.0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, n, sizeof(double), compare);
	for (int i = 0; i < n; i++) {
		printf("%f ", arr[i]);
	}
	printf("\n");

	return 0;

}