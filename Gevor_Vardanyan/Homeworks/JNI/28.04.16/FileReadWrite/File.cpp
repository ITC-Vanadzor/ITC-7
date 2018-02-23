#include "File.h"
#include <iostream>
#include <fstream>
#include <string>

JNIEXPORT void JNICALL Java_File_rwFile (JNIEnv * env, jobject jobj) {
    RWfile newFile;
    newFile.writeFile("../res/testfile.txt");
    newFile.readFile();
}

	class RWfile{
	    private:
			std::fstream testFile;
	    public:
	    	RWfile();
			RWfile(const char* );
			void correction();
			void writeFile(const char* );
			void readFile();
			~RWfile();
	};

	RWfile::RWfile(){
	    testFile.open("../res/testfile.txt", std::ios::in | std::ios::out);
	    correction();
	}
	RWfile::RWfile(const char* filePath) {
	    testFile.open(filePath, std::ios::out | std::ios::in | std::ios::app);
	    correction();
	}
	void correction() {
	    if (!testFile) {
			std::cout << "Failed to open" << std::endl;
	    }
	    else {
  			std::cout <<"Good opened" << std::endl;
		}
	}
	void writeFile(string text) {
		if(!testFile) return 0;
	    testFile << text <<std::endl;
	}
	void readFile() {
	 //    if (!testFile) {
		// 	std::cout << "Failed to open" << std::endl;
		//     return 0;
		// }

		if (testFile.is_open()) {
		    while ( getline (testFile,line) ){
		      std::cout << line << '\n';
		    }
		  }
		else std::cout << "Failed to open" << std::endl; 

	}
	~RWfile() {
	    testFile.close();    
	}