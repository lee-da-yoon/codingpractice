# include <stdio.h>
int main(){
    char a;
    int b;
    float c;
    char d[20];
    printf("[문자, 정수, 실수, 문자열]의 포맷으로 입력: ");
    scanf("%c, %d, %f, %s", &a, &b, &c, &d);
    printf("입력된 데이터 출력: %c, %d, %f, %s", a, b, c ,d);
    return 0;
}