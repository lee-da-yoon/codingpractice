#include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS

int main(){
    int sum = 0;
    int n, k;
    while (1){
        printf("Data input (Ctrl+Z to exit) :");
        k = scanf("%d", &n);
        if (k == EOF)
            break;
        sum += n;
    }

    printf("ÃÑ ÇÕ: %d\n", sum);
    return 0;
}