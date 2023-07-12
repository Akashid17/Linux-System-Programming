#include<stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
	struct stat sobj;

	if(argc != 2)
	{
		printf("Insufficient argument\n");
		return -1;
	}

	stat(argv[1],&sobj);

	printf("File name : %s\n",argv[1]);
	printf("File size is %d\n",sobj.st_size);
	printf("Number of Links : %d\n",sobj.st_nlink);
	printf("Inode number : %d\n",sobj.st_ino);
	printf("File system number : %d\n",sobj.st_dev);
	printf("Number of blocks : %d\n",sobj.st_blocks);

	return 0;
}