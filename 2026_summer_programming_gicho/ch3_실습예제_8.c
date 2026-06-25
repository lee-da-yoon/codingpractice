# include <stdio.h> 

int main(void){
    printf("%Cava", 'J');

    char sq = '\'';
    printf("%c\7\n", '\a');
    printf("%c자바 언어'\n", sq);

    // 문자열 내부에서는 "(큰따옴표) 반드시 \"로 사용 
    printf("\"C언어\" 정말 재미있다!\n");

    return 0;
}