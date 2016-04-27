//#include <jni.h>
#include <iostream>
#include "MathJNI.h"

//Factorial
JNIEXPORT jint JNICALL Java_MathJNI_factorial
  (JNIEnv * env, jobject obj, jint number) {
	
	if(number == 1 || number == 0) {
		return 1;
	}
	else {
		return number*Java_MathJNI_factorial(env, obj, number -1);
	}
}

//min number of array
JNIEXPORT jint JNICALL Java_MathJNI_min
  (JNIEnv * env, jobject obj, jintArray array) {
	jsize size = env->GetArrayLength(array);
        jint *arr = env->GetIntArrayElements(array,0);
	int min = arr[0];
	for(int i = 0;i < size;i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	env->ReleaseIntArrayElements(array,arr, 0);
	return min;
}
JNIEXPORT jint JNICALL Java_MathJNI_max
  (JNIEnv * env, jobject obj, jintArray array) {
	jsize size = env->GetArrayLength(array);
	jint *arr = env->GetIntArrayElements(array,0);
        int max = arr[0];
        for(int i = 0;i < size;i++) {
                if(arr[i] > max) {
                        max = arr[i];
                }
        }
	env->ReleaseIntArrayElements(array,arr, 0);
        return max;
}

JNIEXPORT jintArray JNICALL Java_MathJNI_sortDecrease
  (JNIEnv * env, jobject obj, jintArray array){
	jsize size = env->GetArrayLength(array);
        jint *arr = env->GetIntArrayElements(array,0);
	int flag = 1;
	for(int i = 1;(i <= size) && flag;i++) {
		flag = 0;
		for(int j = 0;j < size-1;j++){
			if(arr[j+1] < arr[j]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = -1;
			}
		}
	}
	jintArray newArray = env->NewIntArray( size);
 	env->SetIntArrayRegion( newArray, 0, size,arr);
 
 	env->ReleaseIntArrayElements(array,arr, 0);
	return newArray; 
}

JNIEXPORT void JNICALL Java_MathJNI_sortIncrease
  (JNIEnv * env, jobject obj, jintArray array){
	jsize size = env->GetArrayLength(array);
        jint *arr = env->GetIntArrayElements(array,0);
        int flag = 1;
        for(int i = 1;(i <= size) && flag;i++) {
                flag = 0;
                for(int j = 0;j < size-1;j++){
                        if(arr[j+1] > arr[j]) {
                                int tmp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = tmp;
                                flag = -1;
                        }
                }
        }
	env->SetIntArrayRegion( array,0,size,arr);
}

