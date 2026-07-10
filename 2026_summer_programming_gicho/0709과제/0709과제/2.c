# include <stdio.h>
# include <stdlib.h>

struct MovieData {
	char title[50];
	char director[30];
	int year;
	int runningtime;
};

void print(struct MovieData* m);

int main() {
	struct MovieData movie1;
	fgets(movie1.title, sizeof(movie1.title), stdin); // 제목과 감독 이름에 공백이 포함되므로 
	fgets(movie1.director, sizeof(movie1.director), stdin); // scanf 사용 시 원하는 결과가 나오지 않음. fgets() 사용하기
	scanf("%d", &movie1.year);
	scanf("%d", &movie1.runningtime);

	struct MovieData * p = &movie1;

	print(p);
	return 0;
}

void print(struct MovieData *m) {
	printf("Title : %s", m->title); // 그리고 fgets로 입력 시 마지막에 개행문자도 저장됨
	printf("Director : %s", m->director); // 그래서 fgets로 입력받은 두 항목 뒤에는 \n 사용하지 않음
	printf("Year : %d\n", m->year);
	printf("RunningTime : %d\n", m->runningtime);
}