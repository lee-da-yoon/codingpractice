# include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* f;
	f = fopen("f2.txt", "r");
	int n;
	fscanf(f, "%d", &n); // 첫 번째 값 정수 n 입력받기 

	char ** p = (char**)malloc(n * sizeof(char*)); // 2차배열 p

	for (int i = 0; i < n; i++) { //p[i]를 동적 할당하기
		p[i] = (char*)malloc(20); //p[i]도 각 열의 첫 원소의 주소
	}
	
	for (int i = 0; i < n; i++) { // 배열에 txt파일의 문자열 읽어서 저장하기
		fscanf(f, "%s", p[i]);  // fget의 첫 parameter에 배열의 주소값?
	}

	for (int i = 0; i < n; i++) {  // n개의 문자열 읽어 저장하기
		printf("%s ", p[i]);  
	}

	for (int i = 0; i < n; i++) { // 메모리 해제
		free(p[i]);
	}
	fclose(f);
	return 0;
}