# include <stdio.h>
int main(){
    int count = 0;
    while(1){
        printf("Data input (Ctrl+Z to exit) : ");
        int n = getchar();
        if(n == EOF){
            break;
        }
        int k = getchar();
        count++;
    }
    printf("입력된 문자의 수 : %d",  count);
    return 0;
}


/*
getchar 함수 - 키보드로부터 문자 데이터를 읽어 들이는 기능 제공 - 입력 버퍼로부터 문자 데이터를 읽어 들이는 함수 
일반적인 컴퓨터의 데이터 입력 과정에서 - 두 개의 버퍼가 사용됨 - 키보드 입력 버퍼 / 프로세스 입력 버퍼 
키보드로 입력된 데이터는 키보드 입력 버퍼에 저장 -- 이곳의 데이터는 지우거나 변경 가능하다 
Enter 키 입력 시 --> 키보드 입력 버퍼에 저장된 데이터가 프로세스 입력 버퍼로 흘러가 저장됨 
getchar를 비롯한 모든 콘솔 입력 함수들이 이때부터 데이터를 가져갈 수 있게 된다. 
*/

/*
#include <stdio.h>
int main(){
    int total = 0;
    char input;
    while(1){
        fputs("Data input (Ctrl+Z to exit) : ", stdout);
        input = getchar();
        if (input == EOF)
            break;
        fflush(stdin);
        total++;
    }
    printf("입력된 문자의 수 : %d \n", total);
    return 0;
}
*/

// fflush 함수 호출을 톻해 입력 버퍼를 비우기 - 프로세스 입력 버퍼를 비운다. 
// 이 함수가 필요한 이유 | 한 문자 한 문자 입력 시마다 Enter 키를 입력, Enter 키도 데이터로서 버퍼에 입력이 되며, 이 데이터를 버리는 작업이 반드시 필요하다. 
// 그렇지 않으면 한 문자 입력하고 Enter 키를 입력할 때마다 getchar 함수가 두 번 호출된다. (문자 두개가 입력되었으므로)