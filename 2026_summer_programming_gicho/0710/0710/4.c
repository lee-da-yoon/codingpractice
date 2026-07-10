# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void hello() { printf("Hello!\n"); }
void goodbye() { printf("goodbye!\n"); }

int main(void)
{
	int choice;
	printf("1. 인사\n2. 작별\n> ");
	scanf("%d", &choice);

	if (choice == 1)
		run(hello);
	else if (choice == 2)
		run(goodbye);
	else
		printf("잘못\n");
	return 0;

}
