# include <stdio.h>

int SquareByValue(int n);
void SquareByreference(int* n);

int main(){
    int num;
    scanf("%d", &num);
    int k;
    k = SquareByValue(num);
    printf("%d\n", k);

    SquareByreference(&num);
    printf("%d", num);

}

int SquareByValue(int n){
    return n*n;
}

void SquareByreference(int* n){
    *n = *n * *n;
}