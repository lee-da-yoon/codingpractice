# include <stdio.h>
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    for (int i = 0 ; i < 5 ; i ++){
        *(p + i) += 2;
        printf("%d", a[i]);
    }
    return 0;
}