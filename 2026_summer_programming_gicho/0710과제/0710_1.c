# include <stdio.h>
# include <stdlib.h>

//1. 파일에 저장된 정수 데이터를 읽기
//2. 2차원 동적 배열 만들어서
//3. 저장
//4. 평균 계한하는 함수
//5. 출력하는 함수
// 6. 출력하고 메모리 해제하고 파일 닫고 종료 

double * calculateColumnAverages( int **Arr, int row, int cols);
void printAverages(double *avg, int cols);

int main(){
    int rows, cols; 
    FILE *f;
    f = fopen("f1.txt", "r");
    fscanf(f, "%d %d", &rows, &cols);  // 파일 열어서 rows cols 입력받기 

    int **arr = (int **)malloc(rows * sizeof(int*)); // 저장할 배열 arr 동적 할당 
    for (int i = 0; i < rows; i++){
        arr[i] = (int*) malloc (cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++){ // 반복 돌면서 정수값 입력하기 
        for (int j = 0; j < cols; j++){
            fscanf(f, "%d", &arr[i][j]);
        }
    }
    
    double* avg; // 함수의 결과를 넣을 배열 정의
    avg = calculateColumnAverages(arr, rows, cols); // 함수 호출 
    printAverages(avg, cols); // 출력하는 함수 호출 

    for (int i = 0; i < rows; i++){ // 메모리 해제
        free(arr[i]);
    }
    free(arr); //파일 닫기
    fclose(f);
    return 0;    
}

double * calculateColumnAverages( int **Arr, int rows, int cols){ // 함수 정의
    double *sum;  // 결과물 넣을 배열 정의
    sum = (double*)calloc(cols, sizeof(double)); // 크기 할당 
    for (int j = 0; j < cols; j++){  // 각 열의 숫자들을 더하기 
        for (int i = 0; i < rows; i++){
            sum[j] += Arr[i][j]; 
        }
    }
    for (int j = 0; j < cols; j++){
        sum[j] = sum[j] / rows;  // 더한 걸 열 개수로 나누어 평균 구하기 
    }
    return sum; // 결과 배열 반환
    free (sum); // 메모리 해제
}

void printAverages(double *avg, int cols){ // 출력함수 
    for (int i = 0 ; i < cols; i++)
    {
        printf("%d : %.2f\n",i,  avg[i]);
    }

}