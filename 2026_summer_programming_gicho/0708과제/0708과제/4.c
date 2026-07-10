# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
	FILE* f;
	f = fopen("f4.txt", "r");
	char a[20][20];
	char b[20][20];

	for (int i = 0; i < 20; i++) {
		fscanf(f, "%s", a[i]);
	} // 일단 입력받음

	//알아서 잘 오름차순 정렬해서 출력해라
	//맨앞글자비교니까 a[i][0]을 싹 다 비교를 해서 줄세우기?? 근데어케함


	//for (int i = 0; i < 20; i++) {
	//	printf("%s ", a[i]);
	//}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19 - i; j++) {
			if (strcmp(a[j], a[j + 1]) > 0) { //2개 비교해서 strcmp 결과가 양수면 앞(a[j])가 큼 -> 앞뒤 바꾸기
				char t[20];
				strcpy(t, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], t); // 2개 바꿈
			}
		}
	}

	for (int i = 0; i < 20; i++) { // 출력하기 
		printf("%s ", a[i]);		
	}
		fclose(f);
		return 0;
}