# include <stdio.h>
# include <stdlib.h>

int main(){
    int rows = 3;
    int cols = 4;
    int i, j;

    int **array = (int **)malloc (rows * sizeof(int *));
    if (array == NULL){
        fprintf(stderr, "ME\n");
        return 1;
    }
    for (i = 0; i < rows; i++){
        array[i] = (int *) malloc (cols * sizeof(int));
    }

    for (i = 0; i < rows; i++){
        for (j = 0; j<cols ; j++){
            array [i][j] = i * cols + j;
        }
    }
    printf("2D Array Elements : \n");
    for (i = 0; i < rows; i++){
        printf("%d", array [i][j]);

    }
    printf("\n");
    
    for ( i = 0; i < rows ; i++){
        free (array[i]);
    }
    free (array);
    return 0;
}