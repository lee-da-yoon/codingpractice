// 23 slide

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    FILE *fp  = fopen("data.bin", "wb+"); // 쓰기 + 읽기 형태의 이진 파일 열기 

    char str[] = "Hello";
    char buf[10];

    fwrite (str, sizeof(char), 5, fp); // 파일 스트림 fp에 str의 문자열을 쓰기 

    rewind (fp); // 다시 파일 지시자를 맨 앞으로
    fread(buf, sizeof(char), 5, fp);  //  fp의 문자열을  배열  buf에 저장 
    buf [5] = '\0';  // 마지막에 null 문자 붙여주기 

    printf("%s\n", buf); //    출력 

    fclose(fp);   // 파일 닫기  
    return 0;
}