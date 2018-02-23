#include <iostream>
#include <jni.h>
#include "File.h"
#include "FileStruct.cpp"

FileCpp file;

JNIEXPORT void JNICALL Java_File_write
  (JNIEnv *env, jobject obj, jstring text)
  {
  	const char* str = env->GetStringUTFChars(text, 0);
  	file.write(str);
  }

JNIEXPORT void JNICALL Java_File_read
  (JNIEnv *env, jobject obj)
  {
  	file.read();
  }

JNIEXPORT void JNICALL Java_File_create
  (JNIEnv *env, jobject obj)
  {
  	file.create();
  }

/*JNIEXPORT void JNICALL Java_File_delete
  (JNIEnv *env, jobject obj)
  {
  	file.delete();
  }*/

JNIEXPORT void JNICALL Java_File_createFileWithPath
  (JNIEnv *env, jclass myClass, jstring path)
  {
  	const char* str = env->GetStringUTFChars(path, 0);
  	file.createFileWithPath(str);
  }

JNIEXPORT void JNICALL Java_File_deleteFileWithPath
  (JNIEnv *env, jclass myClass, jstring path)
  {
  	const char* str = env->GetStringUTFChars(path, 0);
  	file.deleteFileWithPath(str);
  }