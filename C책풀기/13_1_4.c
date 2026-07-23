# include <stdio.h>

int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *p1 = a, *p2 = &a[5];
    int c;

    for (int i = 0 ; i < 3 ; i++){
        c = *p1;
        *p1 = *p2;
        *p2 = c;
        p1++;
        p2--;
    }
    for (int i = 0 ; i < 6 ; i++){
        printf("%d", a[i]);
    }
    return 0;
}