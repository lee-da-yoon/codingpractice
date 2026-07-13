# include <Stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp ;
    long pos;
    char ch;

    FILE * ofp = fopen("output.txt","w");


    fp = fopen("output.txt", "r");
    if (fp == NULL){
        perror("Fail");
        exit (1);
    }

    pos = ftell(fp);
    printf("initial position : %ld\n", pos);
    
    ch = fgetc(fp);
    printf("read character : %c\n", ch);

    pos = ftell(fp);
    printf("position after reading one character : %ld\n", pos);

    fseek(fp, 10L, SEEK_SET);
    pos = ftell(fp);
    printf("position after fseek to 10th byte: %ld\n", pos);

    rewind (fp);
    pos = ftell(fp);
    printf("position after rewind %ld\n", pos);

    fclose (fp);
}