# include <stdio.h>
int main(){
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= i; j++ ){
            if ( i % j == 0)
                // i의 약수 구하는 건데 일단  1 자기자신 뺏고
                // 8의 약수 - 1 2 4 8 이고 
                // 그러면 8이 2로 떨어짐 1 4 - 2 8 - 3 아닌가?? 
                count += 1;
        }
        // 이까지 약수면 + 1 해서 다 구한 거 아닌가? 

        // printf(" %d 약수개수%d\n",i,  count );
        if (count % 2 == 1)
            printf("%d ", i);
        count = 0;
    }
    return 0;
}