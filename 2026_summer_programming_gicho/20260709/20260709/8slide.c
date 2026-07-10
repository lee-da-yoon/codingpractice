# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

struct account {
	char name[12];
	int actnum;
	double balance;
};

int main() {
	struct account mine = { "홍길동", 1001, 300000 };
	struct account yours;

	strcpy(yours.name, "이동원"); // 이렇게 넣어줘야 함!!

	yours.actnum = 1002;
	yours.balance = 500000;

	printf("구조체 크기 : %zu\n", sizeof(mine));

	printf("구조체 크기 : %zu\n", sizeof(mine.name));
	printf("구조체 크기 : %zu\n", sizeof(mine.actnum));
	printf("구조체 크기 : %zu\n", sizeof(mine.balance));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}