//25 슬라이드 

# include <stdio.h>

int main(){
    int arr1[]= {1, 2, 3};
    int arr2[] = {4, 5 ,6};
    int arr3[] = {7, 8, 9};

    int *arrPointers[3] = {arr1, arr2, arr3}; // arrPointers는 새 개의 배열의 주소를 저장하는 원소가 세개인 포인터 배열 (1차)

    for (int i = 0 ; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", arrPointers[i][j]);
        }
        printf("\n");
    }

    return 0;
}