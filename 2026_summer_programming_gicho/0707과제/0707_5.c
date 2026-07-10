# include <stdio.h>
# include <stdlib.h>

int sumAryID(int ary[], int size);
int main(){
    FILE *f;
    f = fopen("f5.txt", "r");
    int r, c; 
    fscanf(f, "%d", &r); // 파일에서 크기 r c 입력받기
    fscanf(f, "%d", &c);

    // 2차원 동적배열 arr을 생성, r * c개의 데이터를 입력받아 저장 
    
    for (int i = 0; i < r; i++){
    sumAryID(ary[i], c);
    }
}

int sumAryID(int ary[], int size){ //함수 정의
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ary[i];
    }
    return sum;
}
