# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    int n =0;
    scanf("%d", &n);
    
    int *ary = NULL;
    if ((ary = (int*)malloc(sizeof(int) * n)) == NULL){
        printf("문제");
        exit(1);
    }

    printf("%d개의 점수 입력 >> ", n);
    int sum = 0;
for (int i = 0; i < n; i++){
    scanf("%d", (ary + i));
    sum += *(ary + i);
}
printf("입력 점수 : ");
for (int i = 0; i < n; i++)
    printf("%d ", *(ary + i));
printf("\n");

printf("합 : %d 평균: %.11f\n", sum, (double)sum / n);
free (ary);
return 0;
}