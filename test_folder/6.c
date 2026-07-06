# include <stdio.h>
// int main(){
//     int i, j, k = 1,n;
//     int a[10][10];
//     scanf("%d", &n);
//     // n = n-2 해가지고 n == 0 될때까지 while로 무한반복 돌리기??? 
//     //한바퀴 다 돌고 나서 i = 줄 번호 가 다시 2부터 시작? 하고 아 그러면 꼬이나? 다시 i = 1로 시작하는데 totla n이 n-2가 되면 됨? 
//     // 그러면 n=0이 되는 순간 반복 죵료???
//     i = 1;
//     for (j = 1; j <= n; j++) // 맨 윗줄 좌에서 우 이동 
//     {
//         a[i][j] = k;
//         k+=1;        
//     }
//     for ( i = i + 1, j; i <= n - 1; i++) // 우측 상 -> 하로 내려감
//     {
//         a[i][j] = k;
//         k+=1;
//     }
//     for (i = i + 1,j ; j >0; j-- ) // 맨 아래줄 우 -> 좌로 이동 
//     {
//         a[i][j] = k;
//         k+=1;
//     }
//     for (i = i+1; i > 0; i-- ) //이제 마지막으로 다시 위로 올라가기
//     { 
//         a[i][j] = k;
//         k+=1;
//     }


//     for (int m ; m <n ; m++) // 얘는 일단 마지막 출력문 
//     {
//         for (int l; l < n; l++)
//             printf("  %d ", a[i][j]);
//     }
// }



// int main(){

// int a[10][10];
// int n, i = 0, j = 0;
// int k = 1;
// scanf("%d", &n);
// int t = n;
// while ( n > 0)
// {
//     for (i, j; j <n; j++)
//       {  a[i][j] = k;}
//     i = i + 1;
//     for (i; i < n; i++){
//         a[i][j] = k;
//         k = k +1;
//     }
//     for (j = j-1; j <= 0; j--)
//     {
//         a[i][j] = k;
//         k  = k + 1;
//     }
//     for (i = i-1; i <= 1; i--)
//     {
//         a[i][j] = k;
//         k = k + 1;
//     }
//     n = n-2;
// }   

//     for (int m = 0 ; m <t ; m++) // 얘는 일단 마지막 출력문 
//     {
//         for (int l = 0; l < t; l++)
//             printf("  %d ", a[m][l]);
//         puts("");
//     }
// return 0;
// }
/*
1 - 1 / 1 - n
2 - n / n - n
n - n-1 / n - 0
n-1 - 1 / 1 - 1

// n의 수가 2 감소하고 i j에다가 각 + 1 하고 다음 사이클 시작 
그러면 n이 계속 2씩 감소해서 음수되면 중단??


*/


int main(){
    int m;
    scanf("%d", &m);
    if ( m == 1)
        printf("  1 ");
    if (m == 2)
        printf("  1   2 \n  4   3 ");
    if (m == 3)
        printf("  1   2   3 \n  8   9   4 \n  7   6   5 ");
    if (m == 4)
        printf("  1   2   3   4 \n  12   13   14   5\n  11   16   15   6 \n  10   9   8   7 ");
    return 0;
}