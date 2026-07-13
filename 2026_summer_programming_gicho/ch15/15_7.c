// 23 slide

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    FILE *fp  = fopen("data,bin", "wb+");

    char str[] = "Hello";
    char buf[10];

    fwrite (str, sizeof(char), 5, fp);

    rewind (fp);

    fread(buf, sizeof(char), 5, fp);
    buf [5] = '\0';

    printf("%s\n", buf);

    fclose(fp);
    return 0;
}