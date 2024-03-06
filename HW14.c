#include<stdio.h>
main()
{
  int num;
  printf("enter the num\n");
  scanf("%d",&num);
  if(num%3==0&&num%5==0)
  {
    printf("%d is divisible by both 3 ,5\n",num);

  }

  else
  {
      printf("%d is not divisble by both 3,5\n",num);

  }
}
