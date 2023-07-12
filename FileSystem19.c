#include<stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/stat.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR *dp = NULL;
	struct dirent * entry = NULL;		//object of directory

	if(argc != 2)
	{
		printf("Insufficient arguments\n");
		return -1;
	}

	dp = opendir(argv[1]);			//directory pointer	
	if(dp == NULL)
	{
		printf("Unable to open directory\n");
		return -1;
	}

	printf("Enties from the directory file are : \n");

	while((entry = readdir(dp)) != NULL)
	{
		printf("%20s : %ld \n",entry->d_name, entry->d_ino);
	}

	closedir(dp);

	return 0;
}