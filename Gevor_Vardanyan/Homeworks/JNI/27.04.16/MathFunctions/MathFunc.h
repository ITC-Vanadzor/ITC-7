/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class MathFunc */

#ifndef _Included_MathFunc
#define _Included_MathFunc
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     MathFunc
 * Method:    factorial
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_MathFunc_factorial
  (JNIEnv *, jobject, jint);

/*
 * Class:     MathFunc
 * Method:    maxElement
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_MathFunc_maxElement
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathFunc
 * Method:    minElement
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_MathFunc_minElement
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathFunc
 * Method:    sortArray
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_MathFunc_sortArray
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathFunc
 * Method:    sortArrayVoid
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_MathFunc_sortArrayVoid
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
