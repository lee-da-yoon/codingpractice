# include <stdio.h>

int main1();
int main2();
int main3();
int main4();

int main() {
	main1();
	main2();
	main3();
	main4();
	return 0;
}

void print(const int* ptr, int size);
void print2(const int* ptr, int size);

int main1(void) {
	const int arr[] = { 1, 2, 3, 4, 5 }; // 상수 배열 선언 및 초기화 
	// 근데 얘는 const 없이도 문제없이 돌아간다. 
	print(arr, 5); //배열을 출력하는 함수 호출 
		return 0;
}

void print(const int* ptr, int size) {
	//배열 요소를 순회하면서 출력 
	for (int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

// 그러면 여기서 const가 없으면 뭐가 달라짐? 무슨 역할인지? 
// 위 예제에서는 없어도 됨, 아무 영향 주지 않음, 결과 동일, 오류 X

void print2(const int* ptr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
		//ptr[i] = 5; // 이 줄은 상수 배열에 대한 잘못된 접근입니다. 
	}
	printf("\n");
}

