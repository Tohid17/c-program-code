#include<stdio.h>
void main()
{
  int age;
  void vote(int age);
  printf("enter the age of a person\n");
  scanf("%d",&age);
  vote(age);

}
  void vote(int age)
  {
    if(age>=18)
    {
     printf("person is eligible to vote\n");
     }
     else
     {
      printf("person is not eligible to vote\n");
     }

  }
