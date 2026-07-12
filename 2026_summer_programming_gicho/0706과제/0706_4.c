# include <stdio.h>
# include <stdlib.h>
void minMax (int data[], int n, int *min, int *max);

int main (){
    FILE * f = fopen("f4.txt", "r");
    int n;
    int arr[100];
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++){
        fscanf(f, "%d", &arr[i]);
    }
    int min, max;
    minMax(arr, n, &min, &max);
    printf("%d %d", max, min);
    fclose(f);
    return 0;
}

void minMax (int data[], int n, int *min, int *max){
    if (n <= 0) return;
    *min = *max = data[0];
    for (int i = 1; i < n; i++){
        if (data[i] > *max) *max = data[i];
        if (data[i] < *min) *min = data[i];
    }
}