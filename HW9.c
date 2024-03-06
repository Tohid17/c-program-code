#include<stdio.h>
main()
{
  int marks;
  printf("enter the marks of a student\n");
  scanf("%d",&marks);
  if(marks==0&&marks<=39)
 printf("student fail=%d",marks);

 else if(marks==40&&marks<=59)
 printf("student pass=%d",marks);

else if(marks==60&&marks<=79)
 printf("student is first class=%d",marks);
 else if(marks==80&&marks<=100)
 printf("student distinction=%d",marks);

 else
 printf("invalid marks\n");

}




