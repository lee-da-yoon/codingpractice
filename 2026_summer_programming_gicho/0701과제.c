// 실습 5 - 반복문

//5 - 1
//# include <stdio.h>
// int main(){
//         int i, input;
//         scanf("%d", &input);
//         for (i = 0; i <= input; i++)
//         {
//             if (i % 2 !=0)
//             {
//                 if (i % 3 != 0)
//                     printf("%d ", i);
//             }
//         }
//         return 0;
// }

//5-2
// # include <stdio.h>
// int main() {
//     int n, sum,  max, i, input;
//     scanf("%d", &n);
//     for (i = 0, sum = 0, max = 0; i < n; i++)
//     {
//         scanf("%d", &input);
//         if (max <= input)
//             {
//                 max = input;
//             }
//         sum += input;
//     }
//     printf("%d\n%d", sum, max);
//     return 0;
// }

//5-3
// # include <stdio.h>
// int main() { 
//     int input;
//     scanf("%d", &input);
//     int i;
//     for (int j = 1; j <= input; j++)
//     {   
//         for (i =1 ; i <= j; i++)
//         {
//             printf("%d", i);
//         }
//         for (int k = input; k > j; k--)
//         {
//             printf("*");
//         }
//         puts("");
//     }
//     return 0;
// }

//5-4
// # include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     if (0 <= n && n <= 1000)
//     {
//         printf("%d * 0.09 = %d\n= %d", n, (int)(n * 0.09), (int)(n*0.09));
//     }
//     else if ( n <= 4000)
//     {
//         printf("1000 * 0.09 = 90\n");
//         printf("%d * 0.18 = %d\n= %d", n - 1000, (int)((n-1000)*0.18), (int)((n-1000)*0.18 + 90));
//     }
//     else if ( n <= 8000)
//     {
//         printf("1000 * 0.09 = 90\n");
//         printf("3000 * 0.18 = 540\n");
//         printf("%d * 0.27 = %d\n= %d", n - 4000, (int)((n-4000)*0.27), (int)((n-4000)*0.27 + 630));
//     }
//     else
//     {
//         printf("1000 * 0.09 = 90\n");
//         printf("3000 * 0.18 = 540\n");
//         printf("4000 * 0.27 = 1080\n");
//         printf("%d * 0.36 = %d\n= %d", n - 8000, (int)((n-8000)*0.36), (int)((n-8000)*0.36 + 630 + 1080));
//     }
//     return 0;
// }

//실습 6 - 반복문

//6-1
// # include <stdio.h>
// int main(){
//     int n=0, sum = 0, count = 0;
//     do 
//     {
//         count += 1;
//         sum += n;
//         scanf("%d", &n);
//     } while (n >= 0);
//     printf("%.2f", ((double) sum) /  (count-1));
//     return 0;
// }

//6-2
// # include <stdio.h>
// int main(){
//     int n = 0, sum = 0, k = 1; 
//     scanf("%d", &n);
//     while (1)
//     {
//         if (n<=0)
//         {
//             printf("wrong\n");
//             scanf("%d", &n);
//         }
//         else
//             break;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", k);
//         sum += k;
//         k *= 2;
//     }
//     printf("=%d", sum);
//     return 0;
// }

//6-3
// # include <stdio.h>
// int main() {
//     for (int i = 1; i <= 9 ; i++)
//     {
//         for (int j = 1; j <= 5; j++ )
//             printf("%d*%d=%2d\t\t", j, i, j * i);
//         printf("\n");
//     }
//     return 0;
// }

//6-4
// # include <stdio.h>
// int main()
// {
//     int f,  c, answer, count = 0;
//     scanf("%d", &c);
//     f =  (int) ((9.0 / 5 * c )+ 32 + 0.5);
//     while (1)
//     {
//         scanf("%d", &answer);
//         if (answer > f)
//         {
//             printf("large\n");
//             count +=1;
//         }
//         else if (answer < f)
//         {
//             printf("small\n");
//             count +=1;
//         }
//         else 
//           {
//             count +=1;
//             break;
//           }
//     }
//     printf("correct %d\n", count);
//     return 0;
// }

//6-5
# include <stdio.h>
int main () 
{
    int num1, num2;
    char cal;
    while (1) {
        scanf("%d", &num1);
        scanf(" %c", &cal);
        if (cal == '!')
            break;
        scanf("%d", &num2);
        if ((cal == '/') && (num2 == 0))
            printf("Error\n");
        else
        {
            if (cal == '+')
                printf("%d+%d=%d\n", num1, num2, num1 + num2);
            else if (cal == '-')
                printf("%d-%d=%d\n", num1, num2, num1-num2);
            else if  (cal == '*')
                printf("%d*%d=%d\n", num1, num2, num1*num2);
            else if (cal == '/')
                printf("%d/%d=%.2f\n", num1, num2, (double)num1 / num2);
        }
    }
    return 0;
}

//실습7 - 배열 
//7-1
// # include <stdio.h>
// int main()
// {
//     int i;
//     int ary[100];
//     scanf("%d", &ary[0]);
//     for (i = 0; i <= 100; i++)
//     {
//         if (ary[i] != 0)
//         {
//             scanf("%d", &ary[i+1]);
//         }
//         else
//             break;
//     }
//     printf("%d\n", i);
//     for ( i = i-1; i>=0; i--)
//     {
//         printf("%d ", ary[i]);
//     }
//     return 0;
// }

//7-2
// # include <stdio.h>
// int main(){
//     int i; 
//     double sum= 0;
//     double ary[100];
//     double avg = 0;
//     int k;
//     scanf("%lf", &ary[0]);
//     sum += ary[0];
//     for (i = 0; i <= 100; i++)
//     {
//         if (ary[i] !=0){
//             scanf("%lf", &ary[i+1]);
//             sum += ary[i+1];
//             avg = sum / (i+1);
//         }
//         else
//         {  
//             k = i + 1;
//             break;
//         }
//     }
//     printf("%.1lf\n", avg);
//     for (i = 0; i <k; i++)
//     {
//         if ((ary[i] !=0) && (ary[i]< avg))
//             printf("%.1f ", ary[i]);
//     }
//     return 0;
// }

//7-3
// # include <stdio.h>
// int main () {
//     int output = 0;
//     int a1[5];
//     int a2 [5];
//     for (int i = 0; i <= 4; i ++ )
//     {
//         scanf("%d", &a1[i]);
//     }
//     for (int i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a2[i]);
//     }
//     for (int i = 0; i<= 4; i++)
//     {
//         if (a1[i] == a2[i])
//         { 
//             output += 1;
//         }
//     }
//     if (output == 5)
//     {
//         printf("same");
//     }
//     else
//         printf("not same");
//     return 0;
// }

//7-4
// # include <stdio.h>
// int main (){
//     int a [100];
//     int i;
//     scanf("%d", &a[0]);
//     for (i = 0; i <100; i++)
//     {
//         if (a[i] != 0)
//             scanf("%d", &a[i+1]);
//         else 
//             break;
//     }
//     int n = i;
//     for ( i = 0; i <= n-1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[min])
//                 min = j;
//         }
//         int temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//     }
//     for (i = 0; i < n;i++ )
//         printf("%d ", a[i]);
//     return 0;
// }

//7-5
// # include <stdio.h> 
// int main () {
//     int a [100];
//     int i, min, max;
//     scanf("%d", &a[0]);
//     for (i = 0; i <= 100; i++)
//     {
//         if (a[i] != 0)
//             scanf("%d", &a[i+1]);
//         else 
//             break;
//     }
//     if (a[i-1] > a[i-2])
//         max = a[i-1];
//     else
//         max = a[i-2];
//     for (int k = i -2; k >= 0; k--)
//     {
//         if (a[k] > max)
//             max = a[k];
//     }
//     if (a[i-1] < a[i-2])
//         min = a[i-1];
//     else
//         min = a[i-2];
//     for (int k = i -2; k >= 0; k--)
//     {
//         if (a[k] < min)
//             min = a[k];
//     }
//     printf("%d %d", max, min);
//     return 0;
// }