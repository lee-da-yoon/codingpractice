// 42slide 

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef union{
    int i;
    float f;
    char str[20];
} Data;

int main(){
    Data * dataPtr = (Data*) malloc(sizeof(Data));

    if (dataPtr == NULL){
        return 1;
    }

    dataPtr -> i = 42;
    printf("integer %d\n", dataPtr -> i);

    dataPtr -> f = 3.14f; //여기서 붙이는 f는 소숫점 들어간 거면 c에서 자동으로 double로 인식하는데 double이 아니라 float로 지정하기 위하여 붙인다 
    printf("float %.2f", dataPtr -> f);

    strcpy(dataPtr -> str, "Hello, union");
    printf("String %s\n", dataPtr -> str);

    free (dataPtr);
    return 0;


}