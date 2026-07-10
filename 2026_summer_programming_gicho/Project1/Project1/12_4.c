//slide 20

# include <stdio.h>
# include <string.h>

int main() {
	int snum;
	char name[20];
	char dept[30];
	char line[101];

	printf("입력?");
	scanf("%d %19s %29s", &snum, name, dept);

	printf("\n 입력결과 \n");
	printf("%d\n", snum);
	printf("%s\n", name);
	printf("%s\n\n", dept);

	getchar();

	while (fgets(line, sizeof(line), stdin) != NULL) {
		line[strcspn(line, "\n")] = '\0';
		puts(line);

	}
	return 0;
}
