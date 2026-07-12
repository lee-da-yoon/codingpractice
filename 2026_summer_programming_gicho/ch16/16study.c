// 동적 할당 메모리 할당방식 -> heap 영역에 확보된다 

# include <stdio.h>
# include <stdlib.h>

// int main(){
//     int *pi;
//     pi = (int*)malloc(sizeof(int));
// }

/*
malloc 인자 1개, 그 인자 만큼의 할당 후 기본 주소 반환  ( 5 * sizeof(int))
calloc 인자 2개, 앞 인자가 수 뒤 인자 크기 -> 수 * 크기 만큼의 메모리 할당 (5, sizeof(int))
realloc(처음의 배열, 바꿀 사이즈)
아더워

마지막에 free 하는거 까먹지 말기 
<stdlib.h>에 정의되어 있다 
*/

int main(){
    int *arr;
    arr = (int*) malloc (3 * sizeof(int));
    
    for (int i = 0 ; i < 3; i++){
        arr[i] = i + 1;
    }

    int * tmp = realloc (arr, 5 * sizeof(int));

    if (tmp == NULL){
        free (arr);
        return 1;
    }

    arr = tmp;
    arr [ 3] = 4;
    arr[4] = 5;
    for (int i = 0; i < 5; i++){
        printF("%d", arr[i]);
    }
    
    free (arr);
    return 0;
}