// 실습예제 9 - 3
# include <stdio.h>

int sumary(int ary[], int SIZE); // 이건 함수 원형이다 

int main(){
    int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
    int arySize = sizeof(point); // 전체 배열 크기 바이트수 - int니까 element 수 * 4가 나옴 
    printf("메인에서 배열 전체크기 : %d\n", arySize);
    int aryLength = arySize / sizeof(int); // 다시 4로 나눠서 배열 크기 구하기 

    int sum =0 ;
    for (int i = 0; i < aryLength; i++) 
        sum += point[i];
        
    

}