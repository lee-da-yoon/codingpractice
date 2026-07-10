//backspace 0 p ; / space 

// ppt 7slide
#include <stdio.h>
int main() {
	char* java = "java"; // java는 "java"라는 문자열의 첫 원소 j의 주소가 저장된 포인터 변수
	printf("%s ", java); // java는 주소, 포인터변수에 저장된 주소로 문자열을 출력 

	int i = 0;
	while (java[i]) //i번째 element가 \0이 아니라면 아래 내용을 반복 
		printf("%c", java[i++]); // java[i++] 와 *(java + i) 는 같다. i번째 원소 출력 후 다음 주소로 이동하여 그 값을 출력하기를 반복
	printf(" ");

	i = 0;
	while (*(java + i) != '\0')  // 위와 완전히 동일, java[i] 대신 *(java + i)로 표기한 것이다. 
		printf("%c", *(java + i++));
	printf("\n");


	java[1] = 'A';  // 수정 불가능, 실행 결과에 문제 발생
	// "java"는 특정 배열 이름을 가진 문자열이 아니며 임의로 메모리 어딘가(근데 읽기 전용 자리)에 저장된 문자열, 그래서 수정이 불가능하다. 
	printf("%c", java[1]);

	return 0;
}