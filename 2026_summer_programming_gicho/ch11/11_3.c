# include <stdio.h>
int main(){
    int a[3] = {5, 10, 15};
    int *p = a;

    printf("%d %d %d\n", *(p), *(p +1), *(p+2));
    printf("%d %d %d\n", p[0], p[1], p[2]);
    return 0;
}