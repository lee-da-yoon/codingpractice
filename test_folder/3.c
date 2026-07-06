# include <stdio.h>
int main (){
    int a, b, c, d, next;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (((b / a) == (c/b)) && ((c/b) == (d/c))) {
       next = d * (b/a); 
       printf("등비수열 %d", next);
    }
    if (( (b-a) == (c - b)) && ((c - b) == (d - c))) {
        next = d + b -a;
        printf("등차수열 %d", next);
    }
    return 0;
}