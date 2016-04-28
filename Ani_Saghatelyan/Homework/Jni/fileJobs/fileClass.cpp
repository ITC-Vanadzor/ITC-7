#include "fileClass.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>

FileClass::FileClass(const char* file){
    fileName = file;
    if (std::ifstream(fileName)){
        std::cout << "File already exists" << std::endl;
    }
    else{
        std::ofstream afile(fileName);
        afile.open(fileName, std::ios::in | std::ios::trunc) ;
        std::cout << " Constructor*********Created file :" << fileName << std::endl ;
        afile.close();
   }
}

void FileClass::Create(const char* file){
    const char* fileName = file;
    if (std::ifstream(fileName)){
        std::cout << "File already exists" << std::endl;
    }
    else{
        std::ofstream afile(fileName);
        afile.open(fileName, std::ios::in | std::ios::trunc);
        std::cout<<"Create**********Created file :"<<fileName<<std::endl;
        afile.close();
    }
   
}

void FileClass::Read(){
    std::ifstream afile; 
    if(fileName != NULL){
        afile.open(fileName); 
        std::cout << "Read*************Read from the file" << std::endl; 
        std::string data;
        afile >> data; 
        std::cout << data << std::endl;
        afile.close();
    }
    else{
        std::cout << "Read****************fileName doesn't exists" << std::endl;
    }
   }
void FileClass::Write(std::string text){
    if(fileName != NULL){
        std::ofstream afile;
        afile.open(fileName, std::ios::out );
        afile << text << std::endl;
        afile.close();
    } 
    else{
        std::cout << "Write*************fileName doesn't exists" << std::endl;
    }
   
}

void FileClass::Delete(){
    if( remove(fileName) != 0 ){
        perror( "Delete*************Error deleting file" );
    }
    else{
        puts( "Delete**************File successfully deleted" );
    }
}

void FileClass::CreateStatic(const char* fileName)
{
    if (std::ifstream(fileName)){
        std::cout << "Static Create *******************File already exists" << std::endl;
    }
    else{
        std::ofstream afile(fileName);
        afile.open(fileName, std::ios::in | std::ios::trunc);
        std::cout<<"Static Create**********Created file :"<<fileName<<std::endl;
        afile.close();
    }

}

void FileClass::DeleteStatic(const char* fileName){
 if( remove(fileName) != 0 ){
        perror( "Static**************** Error deleting file" );
    }
    else{
        puts( "Static ******************File successfully deleted" );
    }

}

