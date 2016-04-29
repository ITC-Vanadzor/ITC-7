#include <iostream>
#include <cstdio>
#include <string>

struct FileCpp
{
	FILE* myFile;
	FILE* secondFile;
	FileCpp()
	{
		myFile = fopen("example.txt", "a+");
	}
	void write(const char* text);
	void read();
	void create();
	//void delete();
	void createFileWithPath(const char* path);
	void deleteFileWithPath(const char* path);
};

void FileCpp::write(const char* text)
{
	fputs(text, myFile);
}

void FileCpp::read()
{
	rewind(myFile);
	char buff[100];
	while(fgets(buff, sizeof buff, myFile) != NULL)
	{
		std::cout << buff << std::endl;
	}
}

void FileCpp::create()
{
	if(myFile)
	{
		std::cout << "that file has been already created" << std::endl;
	}
	else
	{
		myFile = fopen("example.txt", "a+");
		std::cout << "file succesfuly created" << std::endl;
	}
}

/*void FileCpp::delete()
{
	if(myFile)
	{
		remove("example.txt");
		std::cout << "file succesfuly deleted" << std::endl;
	}
	else
	{
		std::cout << "there are not a file with that name" << std::endl;
	}
}*/

void FileCpp::createFileWithPath(const char* path)
{
	if(secondFile)
	{
		std::cout << "that file has been already created with that path" << std::endl;
	}
	else
	{
		secondFile = fopen(path, "a+");
		std::cout << "file succesfuly created with that path" << std::endl;
	}
}

void FileCpp::deleteFileWithPath(const char* path)
{
	if(secondFile)
	{
		remove(path);
		std::cout << "file succesfuly deleted with that path" << std::endl;
	}
	else
	{
		std::cout << "there are not a file with with that path" << std::endl;
	}
}