#include "MathFunc.h"
#include <iostream>
#include <algorithm>


JNIEXPORT jint JNICALL Java_MathFunc_factorial (JNIEnv * env, jobject jniobj, jint number) {
    if (number < 0 ) {
	   return 0;
    }
    if (number == 0) {
	   return 1;
    } else {
	   return number * Java_MathFunc_factorial(env,jniobj,number - 1); 
    }
}

JNIEXPORT jint JNICALL Java_MathFunc_maxElement (JNIEnv * env, jobject jobj, jintArray array) {
    
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);

    if(!len) return 0; 

    int max = arr[0];
    for (int i = 1; i < len; ++i) {
    	if (max < arr[i]) {
    	    max = arr[i];    
    	}	
    }
    env->ReleaseIntArrayElements(array, arr, 0);
    return max;
}

JNIEXPORT jint JNICALL Java_MathFunc_minElement (JNIEnv * env, jobject jobj, jintArray array){

    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);

    if(!len) return 0; 

    int min = arr[0];
    for (int i = 1; i < len; ++i) {
    	if (arr[i] < min) {
    	    min = arr[i];    
    	}	
    }
    env->ReleaseIntArrayElements(array, arr, 0);
    return min;
}

JNIEXPORT jintArray JNICALL Java_MathFunc_sortArray (JNIEnv *env, jobject jobj, jintArray array) {
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    if(!len) return 0; 

    jintArray assortedArray = env->NewIntArray(len);
    std::sort(arr, arr+len);
    env->SetIntArrayRegion(assortedArray, 0, len, arr);
    jint *arrAssorted = env->GetIntArrayElements(assortedArray, 0);
    // Print assorted array
    for (int i=0; i<len; ++i) {
	std::cout << arrAssorted[i] << "  ";
    }
    std::cout << std::endl;
    
    env->ReleaseIntArrayElements(array, arr, 0);
    return assortedArray;
}

JNIEXPORT void JNICALL Java_MathFunc_sortArrayVoid (JNIEnv *env, jobject jobj, jintArray array) {
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    int lenTmp=len;
    std::sort(arr, arr+len);
    // Print assorted array
    for (int i=0; i<len; ++i) {
	std::cout << arr[i] << "  ";
    }

    env->ReleaseIntArrayElements(array, arr, 0);
}