# Linux-System-Programming
This Repositiry contains system programming applications.

FileSystem6.c is application to open another file using system call open and it will take input from user using scanf function.

FileSystem7.c is application same as FileSystem6.c. difference here is, input will be taken using command line argument.

FileSystem8.c is application which will take 2 inputs from user, 1st is file name and 2ns is Mode in which file wants to open. input will be taken using command line argument.

FileSystem10.c is application which will create new file with read and write permission and for that it will take file name as input from user using command line argument.

FileSystem11.c is application which will open and read file using open and read function and will print first 10 character, for that it will take input from user using command line argument.

FileSystem12.c is application which will open and read file using open and read function and will print data from that file, this application will accept input as file name and buffer size to fetch data.

FileSystem13.c This is application is similar to FileSystem12.c, to print data write function has used insted of print function.

FileSystem14.c This application will open file in read mode and print data using write system call. to print data i used predefine buffer of 1024 bytes. using predefine buffer and while loop, application will print entire data from file.

FileSystem15.c This application will accept two file names as input from user using command line argument, first file name will be source file and another file will be destination file, application will copy data from source file and will pest it in destination file. 

FileSystem16.c This application will show inode table infromation about any file, it call stat function and accept file name and object address as input.

FileSystem17.c This application will work same as FileSystem16, difference here is, it call fstat function and accept file descriptor and object address as input.

FileSystem18.c This application will show file Type, it will accept file name or directory name as input using command line argument.

FileSystem19.c This application will show file name and inode number of that file from directory, it will accept directory name as input from command line argument.
