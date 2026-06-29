# include <stdio.h>

int main(void)
{
    int a = 3, b = 5;
    int add(int a, int b);

    int sum = add(a, b);
    printf("гу: %d\n", sum);

    return 0;

}

int add (int a, int b)
{
    int sum = a + b;

    return (sum);

}

int findMin(int x, int y)
{
    int min = x < y ? x : y;
    return (min);

}