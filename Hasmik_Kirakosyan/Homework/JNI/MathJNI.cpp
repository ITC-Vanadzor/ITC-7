#include <jni.h>
#include <iostream>
#include "/usr/lib/jvm/java-7-oracle/include/linux/jni_md.h"
#include "MathJNI.h"

// Factorial
JNIEXPORT jint JNICALL Java_MathJNI_factorial
  (JNIEnv *env, jobject obj, jint number) {
	
	if(number == 1 || number == 0) {
		return 1;
	}
	else {
		return number*JNICALL Java_MathJNI_factorial(env, obj, number-1) ;
	}
  }
// Minimum number of array
JNIEXPORT jint JNICALL Java_MathJNI_min
          (JNIEnv *env, jobject obj, jintArray array) {
              jint* arr = env->GetIntArrayElements(array, 0);
              jsize size = env->GetArrayLength(array);
              jint min = arr[0];
              for (int i = 1; i < size; ++i ) {
                  min = ( arr[i] < min )? arr[i]:min;
              }

             env->ReleaseIntArrayElements(array, arr, 0);
          return min;
          }

// Maximum number of array
JNIEXPORT jint JNICALL Java_MathJNI_max
          (JNIEnv *env, jobject obj, jintArray array) {
              jint* arr = env->GetIntArrayElements(array, 0);
              jsize size = env->GetArrayLength(array);
              jint max = arr[0];
              for (int i = 1; i < size; ++i ) {
                  max = ( arr[i] > max )? arr[i]:max;
              }

             env->ReleaseIntArrayElements(array, arr, 0);
          return max;
          }


