#include<stdio.h>
#include<unistd.h>
int main()
{
	char *v[]={"./hello",NULL};
	printf("start\n");
	execvp("./hello",v);
	printf("End\n");
	return 0;
}

