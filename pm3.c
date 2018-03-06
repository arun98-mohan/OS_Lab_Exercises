#include<unistd.h>
#include<stdio.h>
int main()
{
	int i=0;
	for(i=0;i<3;i++)
		fork();
	printf("hello\n");
	return 0;
}

