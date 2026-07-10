// 비밀번호 입력하기 2번 연속
// 조건 안만족하면 리트
// 만족시 done하고 끝 
// 두 문자열 비교 기능 함수로 작성 

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int validate(char* str1, char* str2);
int main() {
	char a[50];
	char b[50];

	while (1) { //반복돌리기
		fgets(a, 50, stdin); // 첫번째 입력 받기 - 중간에 공백이 들어갈 수 있으므로 scanf 말고 fgets 사용하기
		if ((strlen(a) > 10) || (strlen(a) < 5)) { // 첫번째 입력이 길이 초과이면 
			printf("Retry\n"); // Retry 출력, 다시 첫번째 입력으로 돌아가기
		}
		else {
			fgets(b, 50, stdin); // 첫번째 입력의 길이가 통과면 두번째 입력 받기 
			if ((strlen(a) <= 10) && (strlen(a) >= 5)) { //두번째것도 길이 통과이면
				if (validate(a, b) == 1) { // 두 개가 동일하면
					printf("Done\n"); // Done 출력하고 
						break; //반복문 종료하기
				}
				else { // 길이는 2개 다 통과했는데 두개 다르면
					printf("Retry\n");
				}
			}
		}
	}
	return 0;
}

int validate(char* str1, char* str2) {
	if (strcmp(str1, str2) == 0)
		return 1;
	else
		return 0;
}

