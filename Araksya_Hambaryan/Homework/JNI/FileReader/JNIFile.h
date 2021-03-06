/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNIFile */

#ifndef _Included_JNIFile
#define _Included_JNIFile
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNIFile
 * Method:    createFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIFile_createFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNIFile
 * Method:    writeFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIFile_writeFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNIFile
 * Method:    readFile
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JNIFile_readFile
  (JNIEnv *, jobject);

/*
 * Class:     JNIFile
 * Method:    deleteFile
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JNIFile_deleteFile
  (JNIEnv *, jobject);

/*
 * Class:     JNIFile
 * Method:    createFileStatic
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIFile_createFileStatic
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JNIFile
 * Method:    deleteFileStatic
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIFile_deleteFileStatic
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
