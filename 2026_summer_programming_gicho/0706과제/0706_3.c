# include <stdlib.h>
# include <stdio.h>

// int main(){
//     FILE *f; 
//     FILE *f2;
//     f=fopen("f3.txt", "r");
//     f2 = fopen("f3out.txt", "w");
//     char a;
//     int b;
//     while (fscanf(f,"%c", &a) == 1){
//         fscanf(f, "%d", &b);
//         if ((b >= 48) && (b <= 57)){
//             printf("%d\n", b);
//             fprintf(f2, "%c", b);
//         }
//     }
//     fclose(f);
//     fclose(f2);
//     return 0;
// }

int main (){
    FILE *f = fopen("f3.txt", "r");
    FILE *f2 = fopen("f3out.txt", "w");
    char c;
    int sum= 0;;
    while ((c = fgetc(f)) != EOF) {
        if ((c <= 57) && (c >= 48)){
        fputc(c, f2);
        int num = c - '0';
        sum += num;
        }
    }
    printf("%d", sum);
    fclose(f);
    fclose(f2);
    return 0;
}
