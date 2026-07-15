# include <stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp ;
    long pos;
    char ch;

    FILE * ofp = fopen("output.txt","w"); // 쓰기로  열기 
    if (ofp == NULL){  // 제대로 열렸는지 검사 코드 
        perror("Failed to open output file");
        return EXIT_FAILURE;
    }

    fprintf(ofp, "Hello, World!\nThis is a test file.\n1234567890\n"); // 파일에다 이걸 적고 
    fclose(ofp);  // 파일 닫기 

    fp = fopen("output.txt", "r");  // 동일 파일을 이번에는 읽기전용으로 열기 
    if (fp == NULL){ // 열림 테스트 
        perror("Failed to open input file");
        return EXIT_FAILURE;
    }

    pos = ftell(fp); // 현재 위치 
    printf("initial position : %ld\n", pos);
    
    ch = fgetc(fp);  // 다음 글자 읽어서 char를 ch에 저장 
    printf("read character : %c\n", ch);

    pos = ftell(fp);  // 읽고 난 다음에 그다음 현재의 위치 구하기 
    printf("position after reading one character : %ld\n", pos);

    fseek(fp, 10L, SEEK_SET);  // 맨 처음으로부터   10바이트  뒤의 위치로 옮기기ㅣ 
    pos = ftell(fp); // 현재의 위치를 pos에  저장
    printf("position after fseek to 10th byte: %ld\n", pos); // 출력

    rewind (fp);  // 다시 파일 지시자를 맨 처음으로 보내기 
    pos = ftell(fp);  // 현재의 파일 지시자 위치 구하기
    printf("position after rewind %ld\n", pos); // 출력 

    fclose (fp);  // 파일 닫기 
}