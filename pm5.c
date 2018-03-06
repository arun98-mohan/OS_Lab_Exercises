#include<stdio.h>
#include<unistd.h>
int main()
{
	char *ptr[]={"ls",NULL};
	char *ptr1[]={"ls","-a",NULL};
	int ch;
	scanf("%d",&ch);
	if(ch==1)
		execvp("ls",ptr);
	else if(ch==2)
		execvp("ls",ptr1);
	return 0;
}
