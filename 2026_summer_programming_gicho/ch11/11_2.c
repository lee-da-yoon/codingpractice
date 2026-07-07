# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS
# define SIZE 5

void inputArray(int *arr, int size);
void printArray(const int *arr, int size);

int main(){
    int arr[SIZE];

    inputArray(arr, SIZE);
    printArray(arr,SIZE);

    return 0;
}

void inputArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] 입력 : ", i);
        scanf("%d", arr + i);
    }
}

void printArray(const int *arr, int n){
    printf("입력한 값들 : ");
    for (int i = 0; i < n; i++ ){
        printf("%d ", *(arr + i));
    }
}