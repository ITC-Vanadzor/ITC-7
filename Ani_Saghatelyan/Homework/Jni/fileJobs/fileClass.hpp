#include <iostream>
#include <string>
#include <fstream>
#include <iostream>


class FileClass{
    public:
        FileClass(const char* file);
        void Create(const char* file);
        void Write(std::string text);
        void Read();
        void Delete();
        static void CreateStatic(const char* file);
        static void DeleteStatic(const char* file);
    private:
        const char* fileName = NULL;
};
