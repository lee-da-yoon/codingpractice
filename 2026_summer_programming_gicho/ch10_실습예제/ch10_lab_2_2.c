#include <stdio.h>
void in(void);
void out(void);
int g=10;
static int sg=20;

int main(void)
{
  auto int a=100;
  printf("%d %d %d\n", g, sg, a);
  in(); out();
  in(); out();
  in(); out();
  printf("%d %d %d\n", g, sg,a);
  
  return 0;
}

void in(void)
{
  auto int fa =1;
  static int fs;
  printf("\t%d %d %d %d\n", ++g, ++sg, ++fa, ++fs);


#include <stdio.h>
void out()
{
  extern int g, sg;
  printf(\t\t\t%d\n", ++g
}

