//과제 5-3
// # include <stdio.h>
// int main() {
//     int i, j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++){
//         for (j = 1; j <= i; j++)
//             printf("%d", j);
//         for (j = 1; j <= n-i; j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

//교재 예제 ch7
// # include <stdio.h>
// int main() {
//     int i, j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

//9번
// # include <stdio.h>
// int main(){
//     int i, j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j<= n-i; j++)
//             printf(" ");
//         for (j = 1; j <= i; j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

//1번
// # include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int h, m, s;
//     h = n / 3600;
//     m = (n % 3600) / 60;
//     s = n % 60;
//     printf("%d %d %d", h, m, s);
//     return 0;
// }

//2번
// # include <stdio.h>
// int main() {
//     int n, a, b, c, d;
//     scanf("%d", &n);
//     a = n / 500;
//     b = (n % 500)/100;
//     c = (n%100)/50;
//     d = (n % 50)/10;
//     printf("500원 %d개\n100원 %d개\n50원 %d개\n10원 %d개", a, b, c, d);
//     return 0;
// }

//3번 
// # include <stdio.h>
// int main (){
//     int a, b, c, t;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b) // a>b 이면 a b 위치 바꿔서 더 작은 게 왼쪽 오게 하기 
//     {
//         t = a;
//         a = b;
//         b = t;
//     }
//     // 그러면 a <= b라는 말이고  문제없지않나?  
//     if (b > c) // 바꾼 것 중 큰거랑 c랑 비교하기 - 근데 그럼 a랑 c랑도 비교해야되는 거 아닌가 b가 가장 크고 a c는 모른다 가 되니까? 
//     {
//         t = b;
//         b = c;
//         c = t;
//         if (a > b)
//             {
//                 t = a;
//                 a = b;
//                 b = t;
//             }
//     }
//     printf("%d", b);
// }

//4번
// # include <stdio.h>
// int main(){
// }

// 5번 
// # include <stdio.h>
// int main(){
//     int year;
//     scanf("%d", &year);
//     if (year % 400 == 0)
//         printf("Leap");
//     else if (year % 100 == 0)
//         printf("Common");
//     else if (year % 4 == 0)
//         printf("Leap");
//     else  
//         printf("Common");
//     return 0;
// }

//6번
// # include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", n/1000 + (n%1000)/100 + (n%100)/10 + (n%10));
//     return 0;
// }

//7번
// # include <stdio.h>
// int main(){
//     int n, count = 0;
//     scanf("%d", &n);
//     while (n != 1){
//             count++;
//             if (n % 2 == 0)
//                 n /= 2; 
//             else 
//                 n = n * 3 + 1; 
//     }
//     printf("%d", count);
//     return 0;   
//     } 

//4주차 과제 - 1
// # include <stdio.h>
// int main(){
//     int a, b, c, temp, min, max;
//     scanf("%d %d %d", &a, &b,  &c);
//     if (a > b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (c < a)
//     {
//         temp = c;
//         c = a;
//         a = temp;
//         if (a > b)
//         {
//             temp = a;
//             a = b;
//             b = temp;
//         } //3개의 수 오름차순 정렬 끝
//     }
//     if (a + b > c)
//         {
//             if ((a==b) && (b ==c))
//                 printf("Equilateral");
//             else if ( (a==b) || (b ==c))
//                 printf("Isosceles");
//             else 
//                 printf("scalene");
//         }
//     else 
//         printf("Invalid");
//     return 0;
// }

//4주차 과제 -4
// # include <stdio.h>
// # include <math.h>
// int main(){
//     double a, b, c, ans1, ans2;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     if (a == 0)
//         printf("%lf", -c/b);
//     else
//     {
//         if ((b*b - 4 * a * c) >0){
//             ans1= (-b + sqrt(b*b-4*a*c))/(2*a);
//             ans2= (-b - sqrt(b*b-4*a*c))/(2*a);
//             printf("%lf %lf", ans1, ans2);
//         }
//         else if ((b*b - 4 * a * c) == 0) {
//             ans1 = -b / (2* a);
//             printf("%lf", ans1);
//         }
//         else
//             printf("허근입니다");
//     }
//     return 0;
// }

//8번
// # include <stdio.h>
// int main(){
//     int n, i, max = 0;
//     int a[100];
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] > a[max])
//             max = i;
//     }
//     printf("%d %d", a[max], max + 1);
//     return 0;
// }

//10번
// # include <stdio.h>
// int main(){
//     int a [10][10];
//     int n, sum = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++){
//                 scanf("%d", &a[i][j]);
//                 if ((i  == 0)||(i == n-1)){
//                     sum += a[i][j];
//                 }
//                 else
//                     {if ((j == 0) || (j == n-1)){
//                         sum += a[i][j];
//                     }
//                 }
//             }
//         }
//     printf("%d", sum);
//     return 0;
// }

//
# include <stdio.h>
int main(){
    int n, i, k=1;
    scanf("%d", &n);

    int a[10][10];
    for (i = 0 ; i < n-1; i++);
    {
        if (i == 0){
            for (int j = 0; j < n; j++)
                a[i][j] = k;
                k = k+1;
        }
        else
            a[i][n-1] = k++;
    }
    for (i = 0; i < n; i++)
        {for (int j = 0; j < n; j++ )
            printf("%d", a[i][j]);
        printf("\n");
        }
    return 0;
    }