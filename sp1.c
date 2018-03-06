#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int foo(int fd,char* buf,int b_size,int n,int skip)
{
	fd=open("test.txt",O_RDONLY);
	if(fd<0) return -1;
	int s=0,i;
	buf=(char*)calloc((b_size),sizeof(char));
	char *temp;
	temp=(char*)calloc(skip,sizeof(char));
	for(i=0;i<n;i++)
	{
		s+=read(fd,buf,b_size);
		read(fd,temp,skip);
        printf("\n%s",buf);
	}
	
    close(fd);
	return s;
}

int main()
{
	int fd,b_size,n,skip;
	char* buf;
	scanf("%d %d %d",&b_size,&n,&skip);
    printf("%d",foo(fd,buf,b_size,n,skip));
	return 0;
}
