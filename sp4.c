#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/dir.h>
#include<fcntl.h>
int main()
{
	/*OL*/	//char *dir="/home/csh";
	int i,j;
	char list[10][10]={"txt","sh","odt"};
	char list_extensions[10][10]={".txt",".sh",".odt"};
	/*Reverse logic*/	for(j=0;j<3;j++)
		/*RL*/			{
		/*RL*/	char dir[100]; strcpy(dir,"/home/csh/");
		/*RL*/	//strcat(dir,"/");
		/*RL*/	strcat(dir,list[j]);
		/*OL*/	/*	for(i=0;i<3;i++)
				{
				mkdir(list[i],0755);
				}*/
			DIR *dirptr=opendir(dir);
			struct dirent *entry = readdir(dirptr);
			while (entry != NULL) {
				for(i=0;i<3;i++)
				{
					if(strstr(entry->d_name,list_extensions[i]))
					{
						//	printf("%s\n",entry->d_name);
						char a[100]="/home/csh/";
						char b[100];
						strcpy(b,list[i]);
						char c[100]="/home/csh/";
						strcat(c,b);
						strcat(c,"/");
						strcat(a,entry->d_name);
						strcat(c,entry->d_name);
				/*OL*/		/*rename(a,c);
						  break;*/


						/* Reversing Logic*/
						rename(c,a);
						break;

					}
				}
				entry = readdir(dirptr);
			}
		}

}
