#include<stdio.h>
int main()
{
  int tam,eng,chem,phy,comp;
  scanf("%d%d%d%d%d",&tam,&eng,&chem,&phy,&comp);//90,94,88,91,98;
  printf("TOTAL=%d\n",tam+eng+chem+phy+comp);//461;
  printf("%f",(float)(tam+eng+chem+phy+comp)/5);//92
}
