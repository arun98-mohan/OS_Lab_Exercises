//Program to simulate ls Command
#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/dir.h>
#include<fcntl.h>

//int glob;
int search (char* dir){	
	int glob,fd,s;
	glob=open("complete1.txt",O_WRONLY);
	char buff[255];	
	DIR *dirptr=opendir(dir);
	struct dirent *entry = readdir(dirptr);
	while (entry != NULL) {
		if(strcmp(".txt",entry->d_name+(strlen(entry->d_name)-4))==0)
		{
			fd=open(entry->d_name,O_RDONLY);
			read(fd,buff,10);
			buff[10]='\0';
			printf("\n%s: %s\n",entry->d_name,buff);
			write(glob,buff,strlen(buff));	
		}
		entry = readdir(dirptr);
	}
	close(glob);
	return 1;
}

int main()
{

	int c;
	c=search("/home/csh");
	int glob;
	glob=open("complete1.txt",O_RDONLY);
	printf("\nMain Function Reached");
	char rama[250];	
	read(glob,rama,250);
	printf("\n\n%s",rama);
	close(glob);
	return 0;
}
