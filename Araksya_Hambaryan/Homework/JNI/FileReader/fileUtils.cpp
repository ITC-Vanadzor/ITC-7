#include <iostream>
#include <fstream>
#include <string>

class fileUtils{
    private:
	std::fstream myFile;
    public:
	fileUtils(){
	    validation();
	    myFile.open("orinak.txt", std::ios::out | std::ios::in | std::ios::app);
	}
	fileUtils(const char* fileName) {
	    validation();
	    myFile.open(fileName, std::ios::out | std::ios::in | std::ios::app);
	}
	void validation() {
	    if (!myFile) {
		std::cout << "File could not be created" << std::endl;
	    }
	}
	void writeInFile(std::string text) {
	    myFile << text <<std::endl;
	}
	void readFile() {
	    std::string data;
	    if (!myFile) {
		std::cout << "File could not be opened" << std::endl;
	    }

	    while (!myFile.eof()) {
		myFile >> data;
	    }
	    std::cout << data << std::endl;
	}
	~fileUtils() {
	    myFile.close();    
	}

};

