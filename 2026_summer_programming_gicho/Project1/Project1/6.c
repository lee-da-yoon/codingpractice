/*
2차원 배열 동적 할당 
포인터 배열 사용 
m행 n열의 정수형 2차원 동적 배열 생성 
1) 행 개수 m개 만큼 int형 포인터 배열 생성 
int **arr = (int **)malloc(m * sizeof(int *));

2) 각 행마다 열의 개수 n만큼 배열을 동적으로 할당 
for (int i = 0; i < m; i++){
	arr[i] = (int*) malloc(n * sizeof(int));
}
*/

# include <stdio.h>
# include <stdlib.h>

int main() {

}