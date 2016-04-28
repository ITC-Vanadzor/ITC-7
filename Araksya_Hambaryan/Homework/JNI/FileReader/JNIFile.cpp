#include <iostream>
#include "fileUtils.cpp"
#include "JNIFile.h"

JNIEXPORT void JNICALL Java_JNIFile_fileActions (JNIEnv * env, jobject jobj) {
    fileUtils newFile;
    newFile.writeInFile("it's JNI");
    newFile.readFile();

}

