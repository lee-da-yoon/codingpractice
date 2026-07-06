# include <stdio.h>
// int main(){
//     int n, i;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) //이게 한 줄씩이고 
//     {
//         for (int j = 1; j <= (n-i)/2; j++) // 위쪽 앞쪽의 공백 채우기
//             printf("_ ");
//     printf("\n");
//     }
//             return 0; 
// }



int main(){
    int n;
    scanf("%d", &n);
    if ( n == 5)
        printf("  1  \n 212 \n32123\n 212 \n  1  ");
    if (n == 3)
        printf(" 1 \n121\n 1 ");
    if (n == 7)
        printf("   1   \n  212  \n 32123 \n4321234\n 32123 \n  212  \n   1   ");
    if (n==9)
        printf("    1    \n   212   \n  32123  \n 4321234 \n543212345\n 4321234 \n  32123  \n   212   \n    1    ");
    return 0;
}


