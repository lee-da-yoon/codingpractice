# include <stdio.h>
int main(){
    char line[40];
    printf("문자열 입력 : ");
    fgets(line, sizeof(line), stdin);
    printf("입력된 문자열 : %s", line);
    return 0;
}