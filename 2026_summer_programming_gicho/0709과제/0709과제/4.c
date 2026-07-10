# include <stdio.h>
# include <stdlib.h>

typedef struct {
	char fname[100];
	int calories;
} Food;

int main() {
	FILE* f;
	f = fopen("f4.txt", "r");
	int n;
	fscanf(f, "%d", &n);

	Food * total;
	total = (Food*) malloc(sizeof(Food) * n);

	for (int i = 0; i < n; i++) {
		fscanf(f, "%s %d", total[i].fname, &total[i].calories); 
		// fname은 100칸짜리 배열 - 저렇게 적으면 그냥 첫 원소 주소고 
		// calories는 int이므로 주소가 아님 - &를 붙여줘야 한다. 
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += total[i].calories;
	}

	printf("%d", sum);

	fclose(f);
	return 0;
}