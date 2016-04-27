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

JNIEXPORT jintArray JNICALL Java_MathJNI_sortIncrease
(JNIEnv *env, jobject obj, jintArray array) {
    jsize arrLength = env->GetArrayLength(array);
    jintArray sortedArr = env->NewIntArray(arrLength); 

    jint *arrOut = NULL;
    arrOut = env->GetIntArrayElements(array, 0);

    for(jsize i = 0; i < arrLength; i++){
        for(jsize j = 0; j < arrLength - 1; j++){
            if(arrOut[j] > arrOut[j+1]){
                jsize temp = arrOut[j+1];
                arrOut[j+1] = arrOut[j];
                arrOut[j] = temp;
            }
        }
    }

    env->SetIntArrayRegion(sortedArr, 0, arrLength, arrOut);
    env->ReleaseIntArrayElements(array, arrOut, 0);

    return sortedArr;
  }

JNIEXPORT jintArray JNICALL Java_MathJNI_sortDecrease
(JNIEnv *env, jobject obj, jintArray array) {
    jsize arrLength = env->GetArrayLength(array);

    jint *arrOut = NULL;
    arrOut = env->GetIntArrayElements(array, 0);

    for(jsize i = 0; i < arrLength; i++){
        for(jsize j = 0; j < arrLength - 1; j++){
            if(arrOut[j] < arrOut[j+1]){
                jsize temp = arrOut[j+1];
                arrOut[j+1] = arrOut[j];
                arrOut[j] = temp;
            }
        }
    }

    env->SetIntArrayRegion(array, 0, arrLength, arrOut);
    env->ReleaseIntArrayElements(array, arrOut, 0);

    return array;
  }

