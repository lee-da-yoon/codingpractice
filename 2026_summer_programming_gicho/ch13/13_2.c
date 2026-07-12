# include <stdio.h>

typedef enum {INT, FLOAT, CHAR} Type;

typedef union {
    int i;
    float f;
    char c;
} Value;

typedef struct {
    Type type;
    Value val;
} Sensor;


int main(){
    Sensor s;
    int menu;

    printf(" ");
    scanf("%d", &menu);

    switch (s.type){
        case INT:
        printf("정수값 입력 : ");
        scanf("%d" , & s.val.i);
        case FLOAT:
        printf("실수값 입력 : ");
        scanf("%f", &s.val.f);
    }
}