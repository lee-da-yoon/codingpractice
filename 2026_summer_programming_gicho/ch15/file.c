# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    FILE *fp = fopen("file.c", "r");
    char line [256];
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }
    while (fgets(line, sizeof(line), fp) != NULL){
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}