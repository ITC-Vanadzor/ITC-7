/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class FileReader */

#ifndef _Included_FileReader
#define _Included_FileReader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     FileReader
 * Method:    constructor
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FileReader_constructor
  (JNIEnv *, jobject, jstring);

/*
 * Class:     FileReader
 * Method:    write
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FileReader_write__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     FileReader
 * Method:    write
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FileReader_write__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     FileReader
 * Method:    read
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_FileReader_read__
  (JNIEnv *, jobject);

/*
 * Class:     FileReader
 * Method:    read
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_FileReader_read__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif