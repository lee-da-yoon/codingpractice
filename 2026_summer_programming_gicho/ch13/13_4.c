# include <stdio.h>

int main(){
    //공용체 union data 정의
    union data{
        char ch;
        int cnt;
        double real;
    };

    //유니온 union data를 다시 자료형 udata로 정의
    typedef union data udata;

    //udata형으로 value와 pointer p 선언
    udata value, *p;

    p = &value;

    p -> ch = 'a';
    printf("%c %c\n", p -> ch, (*p).ch);
    p -> cnt = 100;
    printf("%d", p -> cnt);
    p -> real = 3.14;
    printf("%.2f\n", p -> real);

    return 0;
}