#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string a;
    fstream F;
    F.open("/home/araks/ITC-7/Araksya_Hambaryan/Homework_06_11_2015/battle.txt");
    if (F) {
	while (!F.eof()) {
	    F>>a;
	}
	f.close();

    }

    
    
    
    
    
    
    
    
    return 0;
}
