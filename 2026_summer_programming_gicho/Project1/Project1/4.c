//19슬라이드 예시 -- 필기하기 
#include <stdio.h>
int main() {
	int td[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 가로세로 3 * 2인 배열 만들기 

	// 테스트용 수정 전 배열 출력하기 
	printf("%u\n", td[0][0]); //%u는 unsigned int를 나타내는 형식 지정자이다. 
	printf("%u\n", td[1][1]);
	printf("%u\n", td[1][2]);

	//배열 및 행 크기 출력 
	printf("%u\n", (unsigned int)sizeof(td)); // 배열의 전체 크기 -> 4 * 6 = 24?
	printf("%u\n", (unsigned int)sizeof(td[0])); // 첫 번째 행의 크기 - 12?? 

	//값 수정 
	*(*td + 4) = 20; // 처음의 5를 20으로 수정
	*(*(td + 1) + 2) = 30; // 처음의 1행 3열 (=6)을 30으로 수정 

	//수정된 값 출력 
	printf("%u\n", td[0][0]); //1
	printf("%u\n", td[1][1]); //20
	printf("%u\n", td[1][2]); //30

	return 0;
}