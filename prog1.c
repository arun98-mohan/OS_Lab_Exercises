#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	int fd=open("test.txt",O_RDONLY|O_CREAT);
	printf("fd=%d\n",fd);
	if(fd==-1)
		printf("Error");
	close(fd);
	return 0;
}
