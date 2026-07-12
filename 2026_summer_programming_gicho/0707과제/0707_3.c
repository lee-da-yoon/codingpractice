// 배열 데이터를 정렬한 후 그 결과를 출력하는 코드를 작성하시오

// # include <stdlib.h>
// # include <stdio.h>

// int compareMyType (const void *a, const void *b);
// int main(){
//     FILE *f;
//     f = fopen("f3.txt", "r"); // 파일 열기 
//     int n; 
//     fscanf(f, "%d", &n); //배열 크기를 입력받았음. 
//     float *ary;
//     ary = (float *) malloc(sizeof (float) * n); // 크기가 n인 배열 a를 만들기 
    
//     for (int i = 0; i < n; i++){
//         fscanf(f, "%f", &ary[i]);
//     }

//     //다음 데이터를 정렬하여 저장해야 함 
//     qsort(ary, n, sizeof(float), compareMyType);
//     for (int i = 0; i < n; i++){
//         printf("%.1f ", ary[i]);
//     }
//     fclose(f);
//     return 0;
// }

// int compareMyType (const void * a, const void * b)
// {
//   if ( *(float*)a <  *(float*)b ) return -1;
//   if ( *(float*)a == *(float*)b ) return 0;
//   if ( *(float*)a >  *(float*)b ) return 1;
// }

# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *f = fopen("f3.txt", "w");
    int n;
    fscanf(f, "%d", &n); 
    float *arr;
    arr = (double*) malloc(sizeof(double) * n);
    fgets(arr, sizeof(arr), f);

    qsort(arr, n, sizeof(float), compare);




}
int compare (){

}
