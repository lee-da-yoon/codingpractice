# include <stdio.h>
int main(){
    float N;
    int a;
    float b;
    scanf("%f", &N);
    a = (int)N;
    b = N - a;
    printf("%d %.2f", a, b);
    return 0;
}