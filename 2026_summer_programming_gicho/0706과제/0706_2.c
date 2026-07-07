# include <stdio.h>
# include <stdlib.h>
// int main(){
//     FILE * f;
//     f = fopen("f2.txt", "r");
//     int sum = 0;
//     char ch [256];

//     while (fgets(ch, 256, f) != NULL){
//         printf("%s", ch);
//         int num = ch;
//         if (num <= 90){
//             sum += 1;
//         }
//     }
//     puts("");
//     printf("90점 이상 데이터 개수: %d", sum);
//     fclose(f);
//     return 0;
// }




// 걍 scanf를 써서 하나씩 받아야하나???? 
// int main(){
//     int a;
//     char ch[256];
//     int sum = 0;
//     FILE *f;
//     f = fopen("f2.txt", "r");

//     while (fscanf("%d", &a) != NULL){
//         fscanf("%d", &a);
//         printf("%d\n", a);
//     }
//     return 0;
// }
//뭐가많이심각하게이상한데이건


/*
1 열어서
2 읽고
3 다른데 옮겨서
4 90점 이상인거 세서
5 출력하고
6 연 파일 닫기
*/

int main(){
    FILE *f;
    f = fopen("f2.txt", "r");
    int a;
    int sum = 0;
    // char ch[256];
    // while ((fgets(ch, 256, f)) != NULL){
    //     printf("...");
    //     printf("%s", ch);
    // }
    while (fscanf(f, "%d", &a) == 1){
            // printf("%d\n", a);
            if (a >= 90){
                sum += 1;
            }
    }
    printf("90점 이상 데이터 개수: \n%d", sum);
    fclose(f);
    return 0;
}


