//22슬라이드 

# include <stdio.h>
# define COLS 3

void doubleElements (int (*ptr) [COLS], int rows); // 이번에는 함수의 인자가 2개 - 열 개수는 배열주소 넣을때 같이 적음 
int main(){
    int arr[2][COLS] = {{1, 2, 3}, {4, 5, 6}}; //배열 정의
    doubleElements(arr, 2); 

    printf("Array after doubling elements: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < COLS ; j++){
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
    return 0;
}

void doubleElements (int (*prt)[COLS], int rows){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < COLS; j++){
            prt[i][j] *= 2;
        }
    }
}