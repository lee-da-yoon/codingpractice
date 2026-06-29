# include <stdio.h>

void increment (int ary[], int n, int SIZE);
void printary(int data[], int SIZE);

int main(void)
{
    int data[] = {4, 7, 2, 3 ,5};
    int aryLength = sizeof(data) / sizeof(int);
    int inc = 3;

    printary(data, aryLength);
    increment(data, inc, aryLength);
    printf("배열 원소에 각각 %d의 더한 결과: \n", inc);
    printary(data, aryLength);

    return 0;

}

void increment (int ary[], int n, int SIZE)
{
    for (int i = 0; i <SIZE ; i++)
        ary[i] += n;
}

void printary(int data[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        printf("%2d ", data[i]);
    printf("\n");

}