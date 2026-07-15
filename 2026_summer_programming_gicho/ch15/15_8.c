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
}; // 구조체 정의하기 

typedef struct personscore pscore;

void appendscore(FILE *f, int cnt);   
int printscore(FILE *f);

int main(void)
{
    FILE *f;
    char fname[] = "score.bin";
    int cnt = 0;
    long offset = 0;

    if ((f = fopen(fname, "ab+")) == NULL){  // 이진 파일의 이어쓰기 모드? 
        printf("파일이 안열림\n");
        exit (1);
    }

    int readcnt = printscore(f);
    if (readcnt == 1){ 
        pscore score;
        offset = (long)sizeof(pscore); // 구조체 하나의 크기 
        fseek(f, -offset, SEEK_END);  // 파일의 마지막에서 마지막 학생을 읽기 위해 한 학생만큼 뒤로 이동 
        fread(&score, sizeof(pscore), 1, f); // 마지막 학생을 읽음 
        cnt = score.number;  // 제일 마지막 자료의 번호를 찾기 위하여 
        printf("\n제일 마지막 번호는 %d번 \n\n", cnt); 
    }

    fseek(f, 0L, SEEK_END);  // 이렇게 가면 맨 마지막으로 indicatior가 이동? 
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
    rewind(f);  // 파일의 맨 앞으로 이동 
    pscore score;  
    // 파일 f에 자료가 하나도 없으면 변수 readcnd가 0
    int readcnt = fread(&score, sizeof(pscore), 1, f);  // 0이면 정보 없음 출력하기 
    if (readcnt == 0){
        printf("성적 정보 없음 \n");
        return 0;
    }
    while(!feof(f)){
        
    }
    return 1;
}