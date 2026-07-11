# include <stdio.h>
# include <stdlib.h>
# include <string.h>

float sumArray(float *array, int size); // 함수 원형 
float averageArray(float *array, int size);

int main (){
    FILE *f = fopen("f3.txt", "r"); // 파일 열기 
    int size = 0;  // 현재 배열 안에 들어있는 개수 
    int space = 5; // 배열 전체 공간의 크기 
    float *arr;
    arr = (float*)malloc(space * sizeof(float)); // 처음에는 배열 크기를 5로 동적 할당 

    while (fscanf (f, "%f", &arr[size]) != EOF){  // 실수 하나를 읽어서 저장, 더 읽을 게 남아있으면 
        size++; // 카운트 수를 하나 올리기 
        if (size == space){ // 배열 안 원소 개수 = 공간 크기 라면 가득 찼다는 의미이므로
            space *=2; // 크기를 나타내는 변수를 2배 하여
            arr = (float*) realloc(arr, space * sizeof(float)); // 그 변수를 크기로 해서 재할당하기 
        }
    }

    float sum = sumArray(arr, size);  // 함수 호출 - 합 구하기 
    float avg = averageArray(arr, size);  // 함수 호출 - 평균 구하기 
    printf("합 = %.2f 평균 = %.2f", sum, avg); // 출력 
    free(arr);
    fclose(f);
    return 0;

}

float sumArray(float *array, int size){
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}
float averageArray(float *array, int size){
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    float avg;
    avg = sum / size;
    return avg;
}