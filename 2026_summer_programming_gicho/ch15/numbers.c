# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main(){
    FILE *f;
    int num;
    if ((f = fopen("numbers.txt", "w") )== NULL)
    {
        printf("파일없음");
        exit(1);
    }
    for (int i = 0; i < 10; i++)
    {
        num = rand() % 100;
        fprintf(f, "%d\n", num);
    }
    return 0;
}