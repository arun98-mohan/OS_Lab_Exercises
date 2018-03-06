#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	int fd,s2;
	char *c=(char*)calloc(100,sizeof(char));
	fd=open("test.txt",O_RDONLY);
	if(fd<0)
		exit(1);
	s2=read(fd,c,10);
	printf("called read(%d,c,10) returned that %d bytes were read\n",fd,s2);
	return 0;
}
