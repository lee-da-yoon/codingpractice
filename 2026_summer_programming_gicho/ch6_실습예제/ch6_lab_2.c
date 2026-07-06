# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    enum shape {TRIANGLE = 1, RECTANGLE};
    // enum이 열거형 enumeration 자료형을 정의하는 선언 - 서로 관련된 정수 상수들에 이름을 붙여 묶어주는 키워드?
    //저 안의 triange rectangle이 열거 상수, 실제로 컴파일 시 정수 값으로 치환됨 
    // triangle은 1이라고 지정했으니까 1 값 가지며, ractangle은 별도로 값을 지정하지 않았으므로 c언어의 규칙에 따라 바로 앞 상수의 값에 1 증가한 값, 즉 2가 자동으로 할당됨 
    int input;
    double width, height;

    printf("삼각형[1], 사격형[2] 중의 번호 하나를 선택 >> ");
    scanf("%d", &input);
    printf("넓이와 높이를 입력 >>");
    scanf("%lf %lf", &width, &height);
    printf("가로: %.2lf 세로 %.2lf \n", width, height);

    switch (input)
    {
        case TRIANGLE:
            printf("삼각형 면적: %.2lf\n", width * height / 2);
            break;
        case RECTANGLE:     
            printf("사각형 면적: %.2lf\n", width * height);
            break;
 
        default : 
            printf("잘못된 입력\n");
        }
        return 0;
}