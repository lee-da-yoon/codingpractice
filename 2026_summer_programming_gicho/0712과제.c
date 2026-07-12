#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);

int main() 
{ 
    int x = 10;
    int y = 20;
    int total = sum(x, y);
    printf("Result = %d\n", total);
    return 0;
}

int sum(int a, int b){ 
    int result = a + b;
    return result;
}