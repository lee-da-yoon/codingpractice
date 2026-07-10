// 18slide 

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char name[30];

	printf("name?");
	fgets(name, sizeof(name), stdin);

	name[strcspn(name, "\n")] = '\0'; //원래대로면 입력한문자열\n\0이 되는데 여기서 \n을 없애는 함수?
	printf("Hello, %s!\n", name);
	return 0;
}

// name [strcspn(name, "\n")] = '\0'; 개행문자를 \0으로 바꾸는 과정!!!!!!