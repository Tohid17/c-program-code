#include<stdio.h>
int main()
{
     int n1,n2,s;
     int sum(int n1,int n2);
     printf("enter the value of n1,n2\n");
     scanf("%d%d",&n1,&n2);
    s=sum(n1,n2);
     printf("sum=%d",s);
}
 int sum(int n1,int n2)
 {
     int sum;
     sum=n1+n2;
     return(sum);
 }

