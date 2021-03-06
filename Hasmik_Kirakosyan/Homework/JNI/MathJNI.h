/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class MathJNI */

#ifndef _Included_MathJNI
#define _Included_MathJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     MathJNI
 * Method:    factorial
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_MathJNI_factorial
  (JNIEnv *, jobject, jint);

/*
 * Class:     MathJNI
 * Method:    min
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_MathJNI_min
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathJNI
 * Method:    max
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_MathJNI_max
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathJNI
 * Method:    sortIncrease
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_MathJNI_sortIncrease
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     MathJNI
 * Method:    sortDecrease
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_MathJNI_sortDecrease
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
