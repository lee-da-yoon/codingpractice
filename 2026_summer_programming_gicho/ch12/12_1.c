//52 slide

# include <stdio.h>

int main(){
    char *pa[] = {"JAVA", "C++", "C#"}; // pa는 읽기 전용 영역에 저장된 문자열의 주소만 가져와서 저장한 포인터 배열 
    // pa의 주소값을 역참조하여 원본 배열을 수정할 수 없다!!!!
    char   ca[][5] = {"JAVA", "C++", "C#"};   // ca라는 이름을 가진 배열이 생성된 것으로 배열 안의 값 수정 가능 

    //pa[0][2] = 'v' // 실행 문제 발생 
    ca [0][2] = 'v'; // 수정 가능 

    //  문자열 출력 
    printf("%s %s %s\n", pa[0], pa[1], pa[2]);
    printf("%s %s %s\n", ca[0], ca[1], ca[2]);


    // 문자 출력 
    printf("%c %c %c\n", pa[0][1], pa[1][1], pa[2][1]);
    printf("%c %c %c\n", ca[0][1], ca[1][1], ca[2][1]);

    return 0;
}