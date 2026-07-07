# include <stdio.h>
# include <stdlib.h>
int main(){
    FILE *f;
    int ch, cnt = 0;

    f = fopen("05flist.c", "r");
    if (f == NULL){
        printf("파일안열림");
        exit (1);
    }
    printf("%4d: ", ++cnt);
    while ((ch = fgetc(f)) != EOF){
        putchar(ch);
        if (ch == '\n')
            printf("%4d: ", ++cnt);
    }
    printf("\n");
    fclose(f);
    return 0;
}