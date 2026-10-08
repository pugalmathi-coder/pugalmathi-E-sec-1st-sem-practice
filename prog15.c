#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf("%d\n",(a>6)&&(a<=12));//a=7;//1,1;
  printf("%d\n",(a>6)||(a<=12));//a=13;//0,1;
}
