#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd = 0;

	if (argc != 2)					//Checking whether user had provided input or not
	{
		printf("Invalid number of arguments\n");
		return -1;
	}

	fd = open(argv[1], O_RDONLY);		//File Descriptor

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is Succesfully opened with fd :%d\n",fd);
	}

	return 0;
}

//O_RDONLY		Read mode
//O_RDWR		Read+Write mode
//O_WRONLY		Write mode
//O_CREATE		Create mode