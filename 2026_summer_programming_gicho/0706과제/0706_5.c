# include <stdio.h>
# include <stdlib.h>
# include <time.h>

double calcAvg(int arr[], int size);

int main(){
    FILE *f = fopen("f5.txt", "w");
    srand((unsigned int) time (NULL));
    int arr[100000];

    for (int i = 0 ; i < 100000; i++){
        fprintf(f, "%d ", ((rand() % 100) + 1 ));
    }
    fclose(f);

    FILE *f2 = fopen("f5.txt", "r");
    for (int i = 0; i < 100000; i ++){
        fscanf(f2, "%d", &arr[i]);
    }
    double avg = calcAvg(arr, 100000);
    printf("ЦђБе : %.2f", avg);

    fclose(f);
    return 0;
}

double calcAvg(int arr[], int size){
    int sum = 0;
    for (int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    double avg = (double)sum / size;
    return avg;
}