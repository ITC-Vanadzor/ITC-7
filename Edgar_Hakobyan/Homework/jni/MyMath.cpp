#include "MyMath.h"

JNIEXPORT jint JNICALL Java_MyMath_factorial(JNIEnv * env, jobject obj, jint num) {
    return( num==1 || num==0) ? 1:Java_MyMath_factorial(env,obj,num-1)*num;
}  

JNIEXPORT jint JNICALL Java_MyMath_getMax(JNIEnv * env, jobject obj, jintArray array) {
    jint* arr = env->GetIntArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    jint max = arr[0];
    for(jint i=0; i<size; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    env->ReleaseIntArrayElements(array,arr, 0);
    return max;
}

JNIEXPORT jint JNICALL Java_MyMath_getMin(JNIEnv * env, jobject obj, jintArray array) {
    jint* arr = env->GetIntArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    jint min = arr[0];
    for(jint i=0; i<size; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    env->ReleaseIntArrayElements(array,arr, 0);
    return min;
}

