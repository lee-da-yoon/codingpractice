#include <stdio.h>
int main()
{
 int n1, n2;
 char op;

 while(1)
 { 
     scanf("%d",&n1);
     scanf(" %c",&op);

    if (op=='!')
{
    printf("end");
         break;
 }
    scanf("%d",&n2);
 
    switch(op)
    {
        case '+' :  
          printf("%d\n",n1+n2);
          break;

        case '-':
        printf("%d",n1-n2);
        break;

        case '*':
        printf("%d",n1*n2);
        break;

        case '/':
        if(n2==0)
            printf("error\n");
        else
            printf("%.2f\n",(double)n1/n2);      
        break;
        
        default:
            printf("Àß¸ø\n");
        break; 

    }
}
    return 0;
 }
//printf("\n");
