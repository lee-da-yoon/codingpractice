#include <stdio.h>
# include <stdlib.h>

int compareAscending(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int compareDescending(const void* a, const void* b) {
	return (*(int*)b - *(int*)a);
}

int main() {
	int numbers[] = { 5, 3, 2, 4, 1 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	sortArray(numbers, size, compareAscending);

	for (int i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	sortArray(numbers, size, compareDescending);
}