// 구조체 time 정의
// 시작시간 입력받기
// 종료시간 입력받기
// 경과시간 함수로 계산 - 초와 분 계산 시 내림 처리를 해야 함 

# include <stdio.h>
typedef struct { // 구조체를 정의했다
    int hour;
    int min;
    int sec;
} Time;

Time elapsedTime (Time start, Time end); // 함수 원형

int main(){  
    Time start;  // 자료형이 Time인 변수 3개 선언 
    Time end;
    Time middle;

    scanf("%d:%d:%d", &start.hour, &start.min, &start.sec); // 두 개의 시간 입력받기 
    scanf("%d:%d:%d", &end.hour, &end.min, &end.sec);



    middle = elapsedTime(start, end); // middle 변수에 함수 호출해서 반환값을 저장
    printf("%02d:%02d:%02d\n", middle.hour, middle.min, middle.sec); // 저장된 middle을 출력 
    return 0; // 끝
}


Time elapsedTime (Time start, Time end){ // 반환값의 자료형이 Time인 함수 정의하기 
    Time middle;
    if (start.sec > end.sec){ // 초 자리 내림 
        end.sec = end.sec + 60;
        end.min -=1;
    }
        middle.sec = end.sec - start.sec; // 초 계산 
    if (start.min > end.min){ // 분 자리내림 
        end.min = end.min + 60;
        end.hour -=1;
    }
    middle.min = end.min - start.min; // 분 계산 
    middle.hour = end.hour - start.hour; // 시 계산 

    return middle; // 계산 결과 반환하기 
}