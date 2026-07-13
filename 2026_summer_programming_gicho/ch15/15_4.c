// 11slide

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct personscore{  //구조체 struct personscore 정의 
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
} pscore;  // 구조체 자료형 pscore 정의


int main(void)
{
    char fname[] = "score.bin";
    FILE *f;
    if ((f = fopen(fname, "wb")) == NULL){ // 쓰기 모드로 파일 열기 
        printf("파일이 열리지 않습니다.\n");
        exit (1);
    }

    char line[80];  // 표준입력으로 행을 저장하기 위한 변수
    int cnt = 0;  // 입력 학생 번호 (자동 생성) 변수 
    pscore score; // 구조체 변수 선언 

    printf("입력하시오\n");

    fgets(line, 80, stdin);

    while (!feof(stdin)){
        sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, f);
        fgets(line, 80, stdin);
    }

    fclose(f);
    f = fopen(fname, "rb");
    if (f == NULL){  // 읽기 모드로 파일 열기
        printf("파일이 안열림\n");
        exit(1);
    }
    
    fread(&score, sizeof(pscore), 1, f);  // 이진모드로 파일 f에서 구조체 pscore 자료 읽기
    
    while (!feof(f)){ // 파일에서읽어 표준출력에 쓰기 
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, f);
    }
    printf("%s\n", "    -----------------------------------");
    fclose(f);

    return 0;
}