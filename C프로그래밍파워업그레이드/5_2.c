# include <stdio.h>

int main(){
    float a;
    printf("반지름 입력 : ");
    scanf("%f", &a);
    printf("원의 넓이 : %f", a * a * 3.14);
    return 0;
}