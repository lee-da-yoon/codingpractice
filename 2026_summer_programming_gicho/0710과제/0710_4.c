# include <stdio.h>
# include <stdlib.h>

int *squareArray(const int *ary, int size);
void printArray(const int *array, int size);

int main(){
    // 파일로부터 n과
    FILE *f = fopen("f4.txt", "r");
    int n;
    fscanf(f, "%d", &n);
    //n개의 정수 데이터를 읽어 n크기의 동적 배열 ary1에 저장
    int *ary1;
    ary1 = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        fscanf(f, "%d", &ary1[i]);
    }

    int *ary2; // 새로운 동적 배열 생성 
    ary2 = (int*)malloc(n * sizeof(int));

    ary2 = squareArray(ary1, n); // 함수 호출 
    printf("ary1: ");
    printArray(ary1, n); // 함수 호출 - 내용 출력하기
    printf("\nary2: "); 
    printArray(ary2, n);
    free(ary1); // free 해주는거 까먹지말기!!!
    free(ary2);
    fclose(f);
    return 0;
}


int *squareArray(const int *ary, int size){  // 배열 원소를 제곱하는 함수 
    int *ary2;
    ary2 = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        ary2[i] = ary[i] * ary[i];
    } 
    return ary2;
}

void printArray(const int *array, int size){ // 출력
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}