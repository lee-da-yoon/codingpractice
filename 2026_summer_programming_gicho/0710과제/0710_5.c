# include <stdio.h>
# include <stdlib.h>
# include <stdlib.h>

typedef struct {  
    char fname[100]; 
    int calories;
}Food;

void printFoods(const Food *arr, int size); // 함수 원형
int compare1(const void* a, const void* b);
int compare2(const void* a, const void* b);

int main(){
    FILE *f = fopen("f5.txt", "r");  // 파일 열어서 
    int n;
    fscanf(f, "%d", &n); // n 입력받기
    Food *arr; 
    arr = (Food*)malloc(n * sizeof(Food)); // 동적 할당 
    
    for (int i = 0; i < n; i++){
        fscanf(f, "%s %d", arr[i].fname, &arr[i].calories); // 하나씩 입력
    }


    qsort(arr, n, sizeof(Food), compare1);
    printf("Sorting by fname : \n");
    printFoods(arr,n);
    
    qsort(arr, n, sizeof(Food), compare2);
    printf("\nSorting by calories : \n");
    printFoods(arr,n);

    free (arr);
    fclose(f);
    return 0;
}

void printFoods(const Food *arr, int size){ // 출력하는 함수 정의 
    for (int i = 0; i < size; i++){
        printf("%s %d\n", arr[i].fname, arr[i].calories);
    }
}

int compare1(const void* a, const void* b) {
        const Food *fa = (const Food*)a;
        const Food *fb = (const Food*)b;
        return strcmp(fa->fname, fb->fname);
}

int compare2(const void* a, const void* b) {
    const Food *fa = (const Food*)a;
    const Food *fb = (const Food*)b;
    return fa->calories - fb->calories;
}
