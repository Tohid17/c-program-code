#include<stdio.h>
main()
{
 int i,num,prime=0;
 printf("enter the num");
 scanf("%d",&num);
 for(i=2;i<=num/2;i++)
 {
   if(num%i==0)
   {
     prime=1;
     break;
   }
   }
   if(prime==1)
   {
   printf("%d is not a prime",num);
   }
   else
   {
     printf("%d is a prime",num);
   }
   }
