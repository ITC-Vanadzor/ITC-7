#include "JNIMath.h"
#include <iostream>
#include <algorithm>


JNIEXPORT jint JNICALL Java_JNIMath_factorial (JNIEnv * env, jobject jniobj, jint number) {
    if (number < 0 ) {
	return 0;
    }
    if (number == 0) {
	return 1;
    } else {
	return number *Java_JNIMath_factorial(env,jniobj,number - 1); 
    }
}

JNIEXPORT jint JNICALL Java_JNIMath_maxElement (JNIEnv * env, jobject jobj, jintArray array) {
    
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    int max = arr[0];
    for (int i= 1; i < len; ++i) {
	if (max < arr[i]) {
	    max =arr[i];    
	}	
    }
    env->ReleaseIntArrayElements(array, arr, 0);
    return max;
}

JNIEXPORT jint JNICALL Java_JNIMath_minElement (JNIEnv * env, jobject jobj, jintArray array){

    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    int min = arr[0];
    for (int i= 1; i < len; ++i) {
	if (min > arr[i]) {
	    min =arr[i];    
	}	
    }
    env->ReleaseIntArrayElements(array, arr, 0);
    return min;
}

JNIEXPORT jintArray JNICALL Java_JNIMath_sortArray (JNIEnv *env, jobject jobj, jintArray array) {
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    
    jintArray assortedArray = env->NewIntArray(len);
    env->SetIntArrayRegion(assortedArray, 0, len, arr);
    jint *arrAssorted = env->GetIntArrayElements(assortedArray, 0);
    
    std::sort(arrAssorted, arrAssorted+len);

    // Print assorted array
    for (int i=0; i<len; ++i) {
	std::cout << arrAssorted[i] << "  ";
    }
    std::cout << std::endl;
    
    env->ReleaseIntArrayElements(array, arr, 0);
    return assortedArray;
}

JNIEXPORT void JNICALL Java_JNIMath_sortArrayVoid (JNIEnv *env, jobject jobj, jintArray array) {
    jsize len = env->GetArrayLength(array);
    jint *arr = env->GetIntArrayElements(array, 0);
    std::sort(arr, arr+len);
    // Print assorted array
    for (int i=0; i<len; ++i) {
	std::cout << arr[i] << "  ";
    }

    env->ReleaseIntArrayElements(array, arr, 0);
}


