// 파일에서 데이터를 읽어서 2차원 a 배열에 저장하고 p 배열 사용해서 배열 a의 원소 출력하기 
// # include <stdio.h>
// # include <stdlib.h>

// void printIDArray(int *arr, int n); //함수 원형
// int main(){
//     FILE *f;
//     f = fopen("f4.txt", "r"); //파일 열기
//     if(f == NULL){ //안열리면 에러 띄움
//         perror("");
//     }
//     int a[4][5]; // a 배열에 txt 파일에서 읽은 내용 저장
//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 5; j++){
//         fscanf(f,"%d", &a[i][j]);  
//         }
//     }

//     int *p[4]; // 각 1차원 포인테 배열 int *p[]를 선언하고 
//     p[0] = a[1]; // 각 포인터가 a의 행을 가리키도록 설정 
//     p[1] = a[3];
//     p[2] = a[0];
//     p[3] = a[2];

//     for (int i = 0; i<=3; i++){  // 출력하기 - a의 한 행씩 총 4번 반복
//     printIDArray(p[i],4);
//     printf("\n");
//     }
//     fclose(f);
//     return 0;
// }

// void printIDArray(int *arr, int n){ //함수 정의
//     for (int i = 0; i<=n; i++){ 
//         printf("%d ", arr[i]);
//     }
// }

# include <stdio.h>
# include <stdlib.h>

void print1DArray(int *arr, int n);

int main(){
    FILE *f = fopen("f4.txt", "r");
    int a[4][5];
    for (int i = 0 ; i < 4; i++){
        for (int j = 0; j < 5; j ++){
            fscanf(f, "%d", &a[i][j]);
        }
    }

    int *p[4];

    p[0] = a[1];
    p[1] = a[3];
    p[2] = a[0];
    p[3] = a[2];
    
    for (int i = 0; i < 4; i++){
        print1DArray(p[i],5);
        printf("\n");
    }

    return 0;
}

void print1DArray(int *arr, int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}