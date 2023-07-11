#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])		//Using CLA application will take file name as input and then print first 10 character of that file.
{
	int fd = 0;
	char Buffer[20] = {'\0'};
	int Ret = 0;

	if(argc != 2)
	{
		printf("Insufficient arguments\n");
		return -1;
	}

	fd = open(argv[1],O_RDONLY);		//this function will open file in read mode.
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	Ret = read(fd,Buffer,10);			//this function will read file and will store first 10 character of that file in character buffer.
	if(Ret == 0)
	{
		printf("Unable to read data from file\n");
		return -1;
	}

	printf("Data from file is : %s\n",Buffer);

	return 0;
}