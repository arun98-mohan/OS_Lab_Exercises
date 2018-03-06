//Parent -> creates and writes in file
//Child -> reads the content written by parent and displays
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	int sz,fd;
	int id=fork();
	if(id>0)
	{
		fd=open("today2.txt",O_WRONLY|O_CREAT,S_IRWXU);
		write(fd,"HELLO WORLD PRASAD",strlen("HELLO WORLD PRASAD"));
		close(fd);
		printf("\nFINISHED WRITING");
	}
	else if(id==0)
	{
		
		printf("INSIDE CHILD");
		//char *q="chmod";
		//char *p[]={"chmod","755","today.txt",NULL};
		//execvp("chmod",p);
		fd=open("today2.txt",O_RDONLY);
		char c[30];
		read(fd,c,30);
		printf("%s - READ BY CHILD",c);
	}
	return 0;
}
