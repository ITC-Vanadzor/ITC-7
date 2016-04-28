#include "fileClass.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <jni.h>
#include "NativeClass.h"
JNIEXPORT void JNICALL Java_NativeClass_WorkToFile
  (JNIEnv * env, jobject obj){
    const char* fileName="test.txt";
    FileClass test(fileName);
    const char* fileName2="test2.txt";
    test.Create(fileName2);
    test.Write("hello");
    test.Read();
    test.Delete();
    const char* fileName3="test3.txt";
    FileClass::CreateStatic(fileName3);
    FileClass::DeleteStatic(fileName3); 
}
