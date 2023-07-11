#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])		////Using CLA application will take file name and buffer size as input and then print that much character of that file.
{
	int fd = 0;
	int Ret = 0;
	char *Buffer = NULL;
	int size = 0;

	if(argc != 3)
	{
		printf("Insufficient arguments\n");
		return -1;
	}

	fd = open(argv[1],O_RDONLY);		//This function will open file in read mode.
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	size = atoi(argv[2]);				//This function will convert character to integers using ascii to integer.

	Buffer = (char *)malloc(size);		//This function will create buffer using malloc.

	Ret = read(fd,Buffer,size);			//This will read data in to buffer.
	if(Ret == 0)
	{
		printf("Unable to read data from file\n");
		return -1;
	}

	printf("Data from file is : \n%s\n",Buffer);

	return 0;
}