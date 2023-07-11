#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])		//using CLA application will take file name and mode to open that file.
{
	int fd = 0;
	int Mode = 0;

	if (argc != 3)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}

	if(strcmp(argv[2],"Read") == 0)		//This condition will validate mode
	{
		Mode = O_RDONLY;
	}
	else if(strcmp(argv[2],"Write") == 0)
	{
		Mode = O_WRONLY;
	}	
	else
	{
		Mode = O_RDONLY;
	}

	fd = open(argv[1], Mode);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is Succesfully opened with fd : %d  ",fd);

		if(Mode == O_WRONLY)
		{
			printf("In Write Only Mode\n");
		}
		else
		{
			printf("In Read Only Mode\n");
		}
	}

	return 0;
}

//O_RDONLY		Read mode
//O_RDWR		Read+Write mode
//O_WRONLY		Write mode
//O_CREATE		Create mode