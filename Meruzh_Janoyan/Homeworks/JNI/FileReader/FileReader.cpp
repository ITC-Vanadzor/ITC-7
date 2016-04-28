#include <jni.h>
#include "FileReader.h"

class IOFile{
  private: 
    FILE* fd;
  public:
    IOFile();
    ~IOFile();
    IOFile(const char *);
    void write(const char *);
    char *read();
};


IOFile::IOFile():fd(NULL){}

IOFile::~IOFile(){
  fclose(fd);
}

IOFile::IOFile(const char *fPath){
  fd=fopen (fPath,"a+");
}

void IOFile::write(const char *data){
  if(!fd) return;
  fprintf (fd, "%s",data);
}

char* IOFile::read(){
  if(!fd) return NULL;
  
  fseek (fd , 0 , SEEK_END);
  int size = ftell (fd);
  fseek (fd , 0 , SEEK_SET); 

  char *res=new char[size];
  fread(res,sizeof(char),size,fd);
  res[size]='\0';

  return res;
}
/*----------------------------------------------------------------------------------*/

IOFile *fileObj;

JNIEXPORT void JNICALL Java_FileReader_constructor
  (JNIEnv *env, jobject obj, jstring str){

  	const char *fPath = env->GetStringUTFChars(str, 0);
  	fileObj=new IOFile(fPath);
  	env->ReleaseStringUTFChars(str, fPath);
  }


JNIEXPORT void JNICALL Java_FileReader_write__Ljava_lang_String_2
  (JNIEnv *env, jobject obj, jstring data){
 	
 	const char *Data = env->GetStringUTFChars(data, 0);
  	fileObj->write(Data);
  	env->ReleaseStringUTFChars(data, Data); 
 
  }

 JNIEXPORT void JNICALL Java_FileReader_write__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *env, jclass cls, jstring str, jstring data){
  	const char *fPath = env->GetStringUTFChars(str, 0);
  	const char *Data = env->GetStringUTFChars(data, 0);

  	IOFile *tmp=new IOFile(fPath);
  	tmp->write(Data);

  	delete tmp;
  	env->ReleaseStringUTFChars(str, fPath);
  	env->ReleaseStringUTFChars(data, Data); 

  }


  JNIEXPORT jstring JNICALL Java_FileReader_read__
  (JNIEnv *env, jobject obj){

  	char *tmpData=fileObj->read();
  	jstring res = env->NewStringUTF(tmpData);

  	return res;
  }

  JNIEXPORT jstring JNICALL Java_FileReader_read__Ljava_lang_String_2
  (JNIEnv *env, jclass cls, jstring str){
  	const char *fPath = env->GetStringUTFChars(str, 0);

  	IOFile *tmp=new IOFile(fPath);
  	char *tmpData=tmp->read();
  	jstring res = env->NewStringUTF(tmpData);

  	delete tmp;
  	env->ReleaseStringUTFChars(str, fPath);

  	return res;
  }