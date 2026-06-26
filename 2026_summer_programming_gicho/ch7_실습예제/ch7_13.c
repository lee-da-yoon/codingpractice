# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    int count = 1;

loop:
    printf("%3d",count);
    if (++count <= 10)
        goto loop;

    printf("\nÁ¾·á\n");
    return 0;
}