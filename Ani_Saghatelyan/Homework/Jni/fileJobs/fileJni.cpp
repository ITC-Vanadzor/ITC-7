#include "fileClass.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <jni.h>
#include "NativeClass.h"
/*JNIEXPORT void JNICALL Java_NativeClass_WorkToFile
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
}*/
const char* fileName="test.txt";
FileClass test(fileName);
JNIEXPORT void JNICALL Java_NativeClass_FileClass
  (JNIEnv * env, jobject obj, jstring file){
    const char *fileName = env->GetStringUTFChars(file, 0);
    FileClass obj1(fileName);
    env->ReleaseStringUTFChars(file, fileName);
}



JNIEXPORT void JNICALL Java_NativeClass_Create
  (JNIEnv * env, jobject obj, jstring file){
    const char *fileName = env->GetStringUTFChars(file, 0);
    test.Create(fileName);
    env->ReleaseStringUTFChars(file, fileName);
}

JNIEXPORT void JNICALL Java_NativeClass_Write
  (JNIEnv * env, jobject obj , jstring file){
    test.Write("hello");
}

JNIEXPORT void JNICALL Java_NativeClass_Read
  (JNIEnv * env, jobject obj){
    test.Read();
}

JNIEXPORT void JNICALL Java_NativeClass_Delete
  (JNIEnv * env, jobject obj){
    test.Delete();
}

JNIEXPORT void JNICALL Java_NativeClass_CreateStatic
  (JNIEnv * env, jclass myClass, jstring file){
    const char *fileName = env->GetStringUTFChars(file, 0);
    FileClass::CreateStatic(fileName);
    env->ReleaseStringUTFChars(file, fileName);
}

JNIEXPORT void JNICALL Java_NativeClass_DeleteStatic
  (JNIEnv * env, jclass myClass, jstring file){
     const char *fileName = env->GetStringUTFChars(file, 0);
     FileClass::DeleteStatic(fileName);
     env->ReleaseStringUTFChars(file, fileName);
}
