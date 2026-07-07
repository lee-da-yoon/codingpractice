# include <stdio.h>
int main(){
    int value = 0x44434241;
    char *pc = (char*)&value;
    for (int i = 0; i < 4; i++){
        char ch = *(pc + i);

        printf("%p    %02X    %c\n", pc + i, ch, ch);
    }
    return 0;
}