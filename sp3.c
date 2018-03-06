#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/dir.h>
#include<fcntl.h>

//int glob;
int search (char* dir){	
//	int glob;
//	glob=open("complete.txt",O_WRONLY);
	int fd;
	int s;
	char* abcd;
	abcd=(char*)calloc(4,sizeof(char));
	printf("\nenter pattern: ");
	scanf("%s",abcd);
	//char *buff=(char*)calloc(255,sizeof(char));
	DIR *dirptr=opendir(dir);
	struct dirent *entry = readdir(dirptr);
	while (entry != NULL) {
		if(strstr(entry->d_name,abcd))
		{
			printf("%s\n",entry->d_name);
		}
		entry = readdir(dirptr);
	}
//	close(glob);
	return 1;
}

int main()
{

	int c;
	c=search("/home/csh");
	return 0;
}
