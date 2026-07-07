# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE  *f; // 일단 파일 포인터 만들고
    f = fopen("f1.txt", "r"); // 열었어

    if (f == NULL){
        exit (1);   // 읽을게 없으면 끝
    }
    char ch [256];  // 읽어온 내용 넣을 문자열 배열 만들기 
    while (fgets(ch, 256, f) != NULL){ // 더 이상 읽을 게 없을 때까지 반복 
        printf("%s", ch); // 읽어온 걸 표준 출력한다. 
    }
    fclose(f); // 열었던 파일 닫기
    return 0;  // 0을 반환하고 main 함수가 종료. 
}