# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS
# define SIZE 5

void inputArray(int* arr, int size);
void printArray(const int* arr, int size);
int main3() {
	int arr[SIZE];
	inputArray(arr, SIZE); 
	// 첫번째 parameter에 배열의 주소 값 가진 포인터 넣기 - 배열 이름은 배열의 첫 원소 주소를 가진 상수 포인터이다. 
	printArray(arr, SIZE);
	return 0;
}

void inputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("arr[%d]입력: ", i);
		scanf_s("%d", arr + i);
	}
}

void printArray(const int* arr, int size) {
	printf("입력한 값들: \n");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}
}