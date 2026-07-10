# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

//slide 14
int main(void)
{
	int* arr = malloc(3 * sizeof(int)); //arr라는 세칸짜리 int 배열 만들기 

	for (int i = 0; i < 3; i++) {
		arr[i] = i + 1; // [0] [1] [2]에다가 1 2 3 넣기
	}
	//크기확장
	int* tmp = realloc(arr, 5 * sizeof(int)); // arr를 5칸짜리로 크기변경한 배열 tmp
	if (tmp == NULL) { // realloc은 메모리 부족해 크기 변경 실패 시 NULL 반환
		free(arr);
		return 1;
	}
	arr = tmp; // arr이 5칸짜리 배열이 됨
	arr[3] = 4;
	arr[4] = 5;

	for (int i = 0; i < 5; i++) // arr 출력하기 
		printf("%d ", arr[i]);
	
	free(arr); // arr 할당 해제
	return 0;
}

