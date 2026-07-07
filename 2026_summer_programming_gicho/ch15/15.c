# include <stdio.h>
int main(){
    char fname[] = "grade.txt";
    char names[80];
    int cnt = 0;
    FILE *f ;

    f = fopen(fname, "w");
    if (f == NULL){
        printf("파일이 열리지 않습니다. \n");
        exit (1);
    }

    fgets(names, 80, stdin);
    while (!feof(stdin)){
        fprintf(f, "%d", ++cnt);
        fputs(names, f);
        fgets(names, 80, stdin);
    }
    fclose(f);
    return 0;
}