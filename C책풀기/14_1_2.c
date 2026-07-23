#  include <stdio.h>

void Swap3(int *a, int*b, int*c);

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d ", num1, num2, num3);
    return 0;
}

void Swap3(int *a, int*b, int*c){
    int k, m;
    k = *a;
    m = *b;
    *a = *c;
    *b = k;
    *c = m;
}