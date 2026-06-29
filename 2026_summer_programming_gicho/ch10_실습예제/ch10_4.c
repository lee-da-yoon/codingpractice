#include <stdio.h>
void reset(void);
void count(void);

int main(void)
{
   for (int i=1; i<=5; I++)
   {
     result();
     count();
    }
}
void reset(void)
{
   auto int n=1;
   printf("자동 지역변수 n: %2d\n", n);
   n++;
 }
void count(void)
{
   static int s=10;
   printf("\t정적 지역변수 s: %2d\n", s);
   s++;
 }
