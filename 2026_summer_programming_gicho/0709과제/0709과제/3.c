//구조체를 정의하고 -- 이건 할 수 있고
// 저 형태의 배열 사용해서 저장된 데이터 읽어서 구조체 배열에 저장하기??
// 그다음에 함수 만들어서 출력한다 

#include <stdio.h>
# include <string.h>

struct Employee { //구조체 만들기
	int num;
	char name[50];
	char add[50];
	int money;
	float insentive;
};

void print(struct Employee e[], int count); // 함수 원형 

int main() {
	FILE* f = fopen("f3.txt", "r");

	struct Employee people[10];
	int i = 0;

	while (fscanf(f, "%d", &people[i].num) != EOF) { // scanf는 개행문자 저장 안함
		fgetc(f); // 저장안된 개행문자 읽고 버리기
		fgets(people[i].name, sizeof(people[i].name), f);
		people[i].name[strcspn(people[i].name, "\n")] = '\0'; // fgets는 개생문자 저장 - 그걸 \0으로 바꿔주기
		fgets(people[i].add, sizeof(people[i].add), f);
		people[i].add[strcspn(people[i].add, "\n")] = '\0';
		fscanf(f, "%d", &people[i].money);
		fscanf(f, "%f", &people[i].insentive);
		i++;
	}


	print(people, i);
	fclose(f);
	return 0;
}

void print(struct Employee e[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", e[i].num);
		printf("%s ", e[i].name);
		printf("%s ", e[i].add);
		printf("%d ", e[i].money);
		printf("%.2f%% ", e[i].insentive * 100);
		printf("%.1f\n", e[i].money * (12 + e[i].insentive));
	}
}
