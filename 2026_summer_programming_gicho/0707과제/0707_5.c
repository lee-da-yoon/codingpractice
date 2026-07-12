# include <stdio.h>
# include <stdlib.h>

// int sumAryID(int ary[], int size);
// int main(){
//     FILE *f;
//     f = fopen("f5.txt", "r");
//     int r, c; 
//     fscanf(f, "%d", &r); // 파일에서 크기 r c 입력받기
//     fscanf(f, "%d", &c);

//     // 2차원 동적배열 arr을 생성, r * c개의 데이터를 입력받아 저장 
    
//     for (int i = 0; i < r; i++){
//     sumAryID(ary[i], c);
//     }
// }

// int sumAryID(int ary[], int size){ //함수 정의
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += ary[i];
//     }
//     return sum;
// }

int sumAry1D(int ary[], int size);

int main (){
    FILE *f = fopen("f5.txt", "r");
    int r, c;
    fscanf(f, "%d %d", &r, &c);

    int **arr;
    arr = (int **)malloc( r * sizeof(int*));
    for (int i = 0; i < r; i++){
        arr[i] = (int *) malloc( c * sizeof(int));
    }

    for (int i = 0 ; i < r; i++){
        for (int j = 0 ; j < c ; j++){
            fscanf(f, "%d", &arr[i][j]);
        }
    }

    int totalsum = 0;
    for (int i = 0 ; i < r; i++){
        int sum = sumAry1D(arr[i], c);
        printf("row %d sum = %d\n", i, sum);
        totalsum += sum;
    }
    printf("total = %d", totalsum);

    for (int i = 0; i < c; i++){
        free(arr[i]);
    }

    free (arr);
    fclose(f);
    return 0;
}

int sumAry1D(int ary[], int size){
    int sum = 0;
    for (int i = 0 ; i < size; i++){
        sum += ary[i];
    }
    return sum;
}

// 2차배열 동적 할당 주의
// 파일입출력인 경우 제발 파일 먼저 만들고 하기 