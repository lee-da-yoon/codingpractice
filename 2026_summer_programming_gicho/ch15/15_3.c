// 9slide 

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *fp;
    int nums [5];

    fp = fopen("example.bin", "rb");
    if (fp = NULL ){
        fprintf(stderr, "파일을 열 수 없습니다. \n");
        return EXIT_FAILURE;
    }

    fread(nums, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0 ; i < 5; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
