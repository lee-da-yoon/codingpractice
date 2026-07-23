# include <stdio.h>
int main(){
    int n;
    int sum = 0, max = 0, min = 0;

    for (int i= 0 ; i < 7 ; i++){
        scanf("%d", &n);
        if (n < min)
            min = n;
        if (n > max)
            max = n;
        sum += n;
    }
    printf("최대값 : %d\n", max);
    printf("최소값 : %d\n", min);
    printf("전체합 : %d\n", sum);
    printf("평  균 : %f\n", sum / 7.0f);
    return 0;
}