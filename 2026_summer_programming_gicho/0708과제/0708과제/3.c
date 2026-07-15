// # include <stdio.h>
// # include <Stdlib.h>
// # include <string.h>

// void reverse_print(const char* str);

// int main() {
// 	// 입출력을 무한반복 돌리고 입력이 q이면 반복 종료 
// 	char a[80];
// 	while (1) {
// 		printf("문자열 입력(종료 q) : ");
// 		//scanf("%s", a); // 입력받아서 배열 a에 저장
// 		fgets(a, 80, stdin);
// 		if (a[0] == 'q') // q가 입력되면 종료하기 
// 			break;
// 		reverse_print(a); // 함수 호출 - 문자열 역순으로 출력하기
// 	}
// 	return 0;
// }

// void reverse_print(const char* str) {
// 	int n = strlen(str);
// 	for (int i = n-2; i >= 0; i--) {
// 		printf("%c", str[i]);
// 	}
// 	printf("\n");
// }

# include <stdio.h>
# include <string.h>

void reverse_print(const char *str);

int main(){
	char line[80];
	while (1){
		printf("문자열 입력 (종료 q) : ");
		fgets(line, 80, stdin);
		if ((strcmp(line, "q\n")) == 0)
			break;
		reverse_print(line);
	}
	return 0;
}

void reverse_print(const char *str){
	int n = strlen(str) - 1;
	for (int i = n-1; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
}