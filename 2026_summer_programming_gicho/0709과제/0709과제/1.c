# include <stdio.h>
# include <string.h>
# include <stdlib.h> // atoi가 여기에 있음

int main(int argc, char* argv[]) { // argc[]는 주소가 저장된 포인터들의 배열  - 값을 사용할 거면 간접연산자 * 필요?

	// argc[1]이 입력받은 연산자 - 첫 글자와 산술연산기호 비교하기? 
	// atoi 함수 사용 문자열을 정수로 변환하기 

	int first = atoi(argv[2]);
	int second = atoi(argv[3]);

	// + 연산
	if (*argv[1] == '+') {
		printf("Result = %.1f\n", (float)(first + second));
	}

	// - 연산 
	if (*argv[1] == '-') {
		printf("Result = %.1f\n", (float)(first - second));
	}

	// * 연산 
	if (*argv[1] == '*') {
		printf("Result = %.1f\n", (float)(first * second));
	}

	// / 연산 
	if (*argv[1] == '/') {
		if (argc == 4) {
			printf("Result = %.1f\n", (float)(first / second));
		}
		else if ((argc == 3) && (first == 1)) {
			printf("사용방법: 프로그램이름 <operation> <num1>, <num2>");
		}
	}
	return 0;
}