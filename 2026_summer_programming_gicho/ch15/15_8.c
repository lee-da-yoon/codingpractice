# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct personscore{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};

typedef struct personscore pscore;

void appendscore(FILE *f, int cnt);
int printscore(FILE *f);

int main(void)
{
    FILE *f;
    char fname[] = "score.bin";
    int cnt = 0;
    long offset = 0;

    if ((f = fopen(fname, "ab+")) == NULL){
        printf("파일이 안열림\n");
        exit (1);
    }

    int readcnt = printscore(f);
    if (readcnt == 1){
        pscore score;
        offset = (long)sizeof(pscore);
        fseek(f, -offset, SEEK_END);
        fread(&score, sizeof(pscore), 1, f);
        cnt = score.number;
        printf("\n제일 마지막 번호는 %d번 \n\n", cnt);
    }

    fseek(f, 0L, SEEK_END);
    appendscore(f, cnt);
    printscore(f);
    fclose(f);

    return 0;
}

void appendscore(FILE *f, int cnt){
    char line [80];
    pscore score= { 0};
    printf("입력?\n\n");
    fgets(line, 80, stdin);
    while (! feof(stdin)){
        sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, f);
        fgets(line, 80, stdin);
    }
}

int printscore(FILE *f){
    rewind(f);
    pscore score;
    int readcnt = fread(&score, sizeof(pscore), 1, f);
    if (readcnt == 0){
        printf("성적 정보 없음 \n");
        return 0;
    }
}