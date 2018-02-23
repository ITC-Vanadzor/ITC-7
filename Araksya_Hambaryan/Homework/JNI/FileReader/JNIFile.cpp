#include <iostream>
#include "fileUtils.cpp"
#include "JNIFile.h"

fileUtils *fileObject;

JNIEXPORT void JNICALL Java_JNIFile_createFile (JNIEnv * env, jobject jobj, jstring newFileName) {
    const char *fName = env->GetStringUTFChars(newFileName, 0);
    fileObject = new fileUtils(fName);
    env->ReleaseStringUTFChars(newFileName, fName);
}

JNIEXPORT void JNICALL Java_JNIFile_writeFile (JNIEnv * env, jobject jobj, jstring data) {
    const char *text = env->GetStringUTFChars(data, 0);
    fileObject->writeInFile(text);
    env->ReleaseStringUTFChars(data, text);
}

JNIEXPORT void JNICALL Java_JNIFile_readFile (JNIEnv * env, jobject jobj) {
    fileObject->readFile();    
}

JNIEXPORT void JNICALL Java_JNIFile_deleteFile (JNIEnv * env, jobject jobj) {
    fileObject->deleteFile();
}

JNIEXPORT void JNICALL Java_JNIFile_createFileStatic (JNIEnv *env, jclass jcl, jstring newFileName) {
    const char *fName = env->GetStringUTFChars(newFileName, 0);
    fileUtils::createFileStatic(fName);
    env->ReleaseStringUTFChars(newFileName, fName);
}

JNIEXPORT void JNICALL Java_JNIFile_deleteFileStatic (JNIEnv *env, jclass jcl, jstring newFileName) {
    const char *fName = env->GetStringUTFChars(newFileName, 0);
    fileUtils::deleteFileStatic(fName);
    env->ReleaseStringUTFChars(newFileName, fName);
}
