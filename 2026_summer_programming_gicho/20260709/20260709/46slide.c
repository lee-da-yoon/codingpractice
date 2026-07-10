# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char name[20];
	int id;
	double score;
} Student;

void print_students(Student s[], int size);

int main() {
	Student students[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째\n", i + 1);
		printf("이름");
		scanf("%s", &students[i].name);
		printf("학번");
		scanf("%d", &students[i].id);
		printf("점수");
		scanf("%lf", &students[i].score);
		printf("\n");

	}

	print_students(students, 3);
	return 0;
}


void print_students(Student s[], int size) {
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", s[i].name);
		printf("%d ", s[i].id);
		printf("%.2lf", s[i].score);
		printf("\n");
	}
}