// 1차원 동적 배열을 사용해서 데이터 저장 후 최솟값 찾기 
# include <stdio.h>
# include <stdlib.h>


int *buildArray(int *size); // 함수 원형
int findMin(int *ary, int size); // 함수 원형 

int main(){
FILE *f;
f = fopen("f2.txt", "r"); // 파일 읽기로 열기 
int n;
fscanf(f, "%d", &n);  // 첫 줄의 숫자 (=배열의 크기)를 n에 넣음
fclose(f); //함수 내에서 다시 여니까 일단 닫기?


int *arr = buildArray(&n); // 함수 호출 - 결과로 나온 배열을 main 함수 내의 arr 배열에 저장
int answer = findMin(arr, n);
printf("%d", answer);

return 0;
}


int *buildArray(int *size){ //함수 정의하기 
    int *a;
    int k; //그냥 임시로...
    a = (int *) malloc(sizeof (int) * *size); // 크기가 size인 a라는 배열을 만들기
    FILE *f = fopen("f2.txt", "r");
    fscanf(f, "%d", &k); // 함수를 이렇게 짜도 되는지는 모르겠으나... 두번째줄부터 읽어야 하니까? 첫 줄은 딴데로 치워두기
    for (int i = 0; i < *size; i++){
        fscanf(f, "%d", &a[i]); // 두번째줄의 정수를 읽기
    }
    fclose(f); // 함수 내에서 연 거 다시 닫기
    return a; // a라는 배열을 return
}


int findMin(int *ary, int size){ // 최솟값 구하는 함수 정의하기 
    int min = ary[0];
    for (int i =0; i < size; i++){
    if (ary[i] < min)
        min = ary[i];
    }
    return min;
}