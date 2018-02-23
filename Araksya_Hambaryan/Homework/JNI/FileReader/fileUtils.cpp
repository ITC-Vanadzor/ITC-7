#include <iostream>
#include <fstream>
#include <string>

class fileUtils{
    private:
	std::fstream myFile;
	const char* fileName;
    public:
	fileUtils(const char* newfileName) {
	    fileName = newfileName;
	    validation();
	    myFile.open(newfileName, std::ios::out | std::ios::in | std::ios::app);
	}
	void validation() {
	    if (!myFile) {
		std::cout << "File could not be created" << std::endl;
	    }
	}
	void writeInFile(std::string text) {
	    if (myFile.is_open()){
		myFile << text <<std::endl;
	    }
	}
	void readFile() {
	    if (myFile.is_open()) {
		myFile.seekg (0, myFile.end);
		int length = myFile.tellg();
		myFile.seekg (0, myFile.beg);

		char * buffer = new char [length];

		myFile.read (buffer,length);

		for(int i=0; i<length; ++i) {
		    std::cout << buffer[i];
		}
		std::cout << std::endl;
		delete[] buffer;
	    }
	}
	void clearDataInFile() {
	    myFile.clear();    
	}
	void deleteFile() {
	    if (myFile.is_open()) {
		myFile.close();
	    if (remove(fileName)) {
		std::cout << "File is already deleted" << std::endl;
	    } else {
		std::cout << "File is deleted" << std::endl;		
	    }
	}
	static void createFileStatic(const char* name) {
	    std::fstream myFileStatic;
	    if (myFileStatic) {
		myFileStatic.open(name, std::ios::out | std::ios::in | std::ios::app);
	    } else {
		std::cout << "File could not be created" << std::endl;	
	    }

	}

	static void deleteFileStatic(const char* name) {
	    std::fstream myFileStatic;
	    if (myFileStatic.is_open()) {
		myFileStatic.close();
	    }
	    remove(name);
	}
	~fileUtils() {
	    if (myFile) {
		myFile.close(); 
	    } else {
		std::cout << "File is already deleted" << std::endl;
	    }
	}

};

