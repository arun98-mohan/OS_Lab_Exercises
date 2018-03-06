#include<stdio.h>
#include<unistd.h>
int main()
{
 int id=fork();
 if(id>0)
  printf("parent");
 if(id==0)
  printf("child");
 return 0;
}
