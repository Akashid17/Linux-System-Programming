#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	char Fname[20];
	int fd = 0;

	printf("Enter the file name that you want to open\n");
	scanf("%s",Fname);//Taking file name as a input from user

	fd = open(Fname,O_RDONLY);//File Descriptor

	if(fd == -1)//Validator
	{
		printf("Unable to open the file\n");
		return -1;
	}
	else
	{
		printf("File is succesfully opened with FD %d\n",fd);
	}

	return 0;
}

//O_RDONLY		Read mode
//O_RDWR		Read+Write mode
//O_WRONLY		Write mode
//O_CREATE		Create mode