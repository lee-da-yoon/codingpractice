# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS
// int main()
// {
//     int i = 100;
//     char c = 'A';

//     int *pi = &i;
//     char *pc = &c;
//     printf("%d %c\n", *pi, *pc);

//     *pi = 200;
//     *pc = 'B';

//     printf("%d %c\n", i, c);
//     return 0;
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int length = sizeof(arr)/ sizeof(arr[0]);
//     int *p = arr;
//     for (int i = 0; i < length; i++){
//         printf("%p: %d\n", (void *)(p + i), *(p+i));
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {10, 20, 30, 40, 50};
//     int *p1= &arr[1];
//     int *p2 = &arr[4];

//     printf("p2 - p1 : %1d\n", p2 - p1);
//     return 0;
// }

void minMax (int arr[], int size, int* min, int* max){
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++){
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main(void){
    int score[] = {80, 95, 60, 70, 100};
    int min, max;
    minMax(score, 5, &min, &max);

    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}