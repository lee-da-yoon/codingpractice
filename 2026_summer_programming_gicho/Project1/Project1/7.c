# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <String.h>

int main(void)
{
	int snum;
	char name[20];
	char dept[30];
	char line[101];

	scanf("%d %19s %29s", &snum, name, dept);

	printf("%d %s %s \n\n", snum, name, dept);

	getchar(); // scanf() 한 후 남아있는 enter (= 개행문자) 를 제거하는 것이다

	// Ctrl + Z 하면 EOF (= End of File)이라는 신호이다!!! 
	while (fgets(line, sizeof(line), stdin) != NULL) { // ctrl + Z 를 눌러서 eof로 처리되면 fgets는 null을 반환하게 되어 while 반복문 종료. 
		line[strcspn(line, "\n")] = '\0';
		puts(line); // 입력받은 것의 개행문자를 null문자로 대치한 후 출력, 다시 다음 반복으로 가기 
	}
}