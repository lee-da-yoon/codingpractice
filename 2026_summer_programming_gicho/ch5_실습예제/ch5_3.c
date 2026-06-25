# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    int x = 0, y=0;
    printf("두 정수를 입력 >> ", &x, &y);
    scanf("%d%d", &x, &y);

    printf("%d\n", x +=y);
    printf("%d %d\n", x , y);
    printf("%d\n", x -=y);
    printf("%d %d\n", x ,y);

    return 0;
}