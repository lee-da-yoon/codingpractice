# include <stdio.h>
# include <stdlib.h>

int main() {
	int* arr = NULL; // 포인터 배열 만들기?
	int size = 0, capacity = 2;

	arr = (int*)malloc(capacity * sizeof(int)); // 동적 할당
	if (arr == NULL) return 1; // 할당 실패 시 return 1

	printf("Enter numbers (exit with -1) : \n");
	while (1) { //무한반복
		int num; 
		printf("Input: ");
		scanf("%d", &num); // 정수를 입력받아 num에 저장
		
		if (num == -1) break; // -1 입력 시 종료, printf로 넘어간다. 
		if (size == capacity) { // 공간이 다 차면 
			capacity *= 2; // 크기를 2배 하여
			int* temp = realloc(arr, capacity * sizeof(int)); // 공간이 2배 할당된 temp라는 배열 만들기 
			if (temp == NULL) { // 재할당 성공 여부를 확인
				free(arr); // 실패 시 할당 해제
				return 1;
			}
			arr = temp; // arr을 확장된 배열로 바꾼다
		}
		arr[size++] = num; // size - 현재까지 저장한 개수, 다음번의 저장할 위치 
	}

	printf("Entered numbers: ");
	for (int i = 0; i < size; i++) { // for 반복문으로 배열의 element 하나씩 출력하기
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr); // 메모리 해제 
	return 0; // 끝!!!
}