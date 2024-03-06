#include<stdio.h>
void main()
{
  int a,b;
  void biggest(int a,int b);
  printf("enter the value of a,b\n");
  scanf("%d%d",&a,&b);
  biggest(a,b);

}
void biggest(int a,int b)

{
  if(a>b)
  printf("a is greater than b\n");
  else
  printf("b is greater than a\n");

}
