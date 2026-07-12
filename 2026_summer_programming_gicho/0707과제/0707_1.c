# include <stdio.h>
# include <stdlib.h>

// void add_array(double ary[], double ary2[], double target[], int size); // 함수 원형
// int main(){
// FILE *f;
// f = fopen("f1.txt", "r"); // 파일 열기 
// int n;
// fscanf(f, "%d", &n); //int n에 배열의 크기를 입력받기 열어서 첫 줄은 읽었음 
// // printf("%d", n);  //확인용

// double *a1, *a2, *a3;
// a1 = (double *) malloc(sizeof(double) * n);
// a2 = (double *) malloc(sizeof(double) * n);
// a3 = (double *) malloc(sizeof(double) * n);

// // 각각 한줄씩 읽어서 그걸 배열로 만들기 총 배열 2개 만들고
// // 함수 호출해서 더하기 
// //일단 배열을 만들었고 한줄씩 집어넣기

// for (int i = 0; i < n; i++){
//     // n개의 수를 크기 n인 배열에 집어넣기 
//     fscanf(f, "%lf", &a1[i]);
//     } // txt파일의 두 번째 줄을 첫 번째 배열에 넣음 

// for (int i = 0; i < n; i++){
//     fscanf(f, "%lf", &a2[i]);
// } // 세번째 줄을 두번째 배열에 넣기 

// add_array(a1, a2, a3, n); // 함수 호출 
// for (int i = 0; i < n; i++){  // 결과 출력하기 
//     printf("%.2f ", a3[i]);
// }
// return 0;
// }

// void add_array(double ary[], double ary2[], double target[], int size){
//     for (int i = 0; i < size; i++){
//         target [i] = ary[i] + ary2[i];
//     }
// }

void add_array(double source1[], double source2[], double target[], int size);

int main(){
    int n;
    FILE *f = fopen("f1.txt", "r");
    fscanf(f, "%d", &n);

    double *arr1, *arr2, *target;
    arr1 = (double*)malloc(n * sizeof(double));
    arr2 = (double*) malloc(n * sizeof(double));
    target = (double*) malloc(n * sizeof(double));

    for (int i = 0; i < n; i++){
        fscanf(f, "%lf", &arr1[i]);
    }
    for (int i = 0 ; i < n ; i++){
        fscanf(f, "%lf", &arr2[i]);
    }

    add_array(arr1, arr2, target, n);
    for (int i = 0 ; i < n ; i++){
        printf("%.2f ", target[i]);
    }

    free(arr1);
    free(arr2);
    free(target);
    fclose(f);

    return 0;
}

void add_array(double source1[], double source2[], double target[], int size){
    for (int i = 0 ; i < size ; i++){
        target[i] = source1[i] + source2[i];
    }
}