# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *f;
    int numbers[5] = {10, 20, 30, 40, 50};
    if ((f = fopen("output.txt", "w")) == NULL){
        printf("¾È¿­¸²");
        exit(1);
        }
    
    for (int i = 0; i < 5; i++){
        fprintf(f, "%d\n", numbers[i]);
    }
    
    fclose(f);
    return 0;
}