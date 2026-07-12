# include <stdio.h>

//열거형 상수 정의?  가 맞나
typedef enum {INT, FLOAT, CHAR} Type;

// 센서 값 저장용 공용체 
typedef union {
    int i;
    float f;
    char c;
} Value;

//하나의 센셔 표현 구조체 
typedef struct {
    Type type;
    Value val;
} Sensor;

void printSensor (Sensor s){
    switch (s.type){
        case INT: 
            printf("INT : %d\n", s.val.i); break;
        case FLOAT : 
            printf("FLOAT : %.2f\n", s.val.f); break;
        case CHAR : 
            printf("CHAR : %c\n", s.val.c); break;
    }
}

int main(){
    Sensor s1 = {INT,   .val.i = 100};
    Sensor s2 = {FLOAT, .val.f = 36.5f};
    Sensor s3 = {CHAR, .val.c = 'N'};

    printSensor(s1);
    printSensor(s2);
    printSensor(s3);
}