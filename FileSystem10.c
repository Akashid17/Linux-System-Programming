#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])		//Using CLA application will take file name to create file.
{
	int fd = 0;

	if (argc != 2)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}

	fd = creat(argv[1], 0777);		//this function will create file using creat system call with permission read and write for all

	if(fd == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	else
	{
		printf("File is Succesfully created with fd :%d\n",fd);
	}

	return 0;
}

//O_RDONLY		Read mode
//O_RDWR		Read+Write mode
//O_WRONLY		Write mode
//O_CREATE		Create mode