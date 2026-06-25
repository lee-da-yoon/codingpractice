# include <stdio.h>

int main(void)
{
    int m = 5, n = 10;
    printf("%d\n", m += n /= 3);
    printf("%d %d\n", m, n);
    
    // 우측에서 좌측으로 결합 
    printf("%d ", 3 >4 ? 3-4 : 3>4 ? 3+ 4 : 3 * 4);
    printf("%d\n", 3> 4 ? 3-4 : (3>4 ? 3+ 4 : 3*4));

    printf("%d ", 10 * 3 / 2); 
    printf("%d\n", 10 * (3/ 2));

    return 0;
}