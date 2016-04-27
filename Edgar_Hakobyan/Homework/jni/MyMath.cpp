#include "MyMath.h"

JNIEXPORT jsize JNICALL Java_MyMath_factorial(JNIEnv * env, jobject obj, jsize num) {
    return( num==1 || num==0) ? 1:Java_MyMath_factorial(env,obj,num-1)*num;
}  

JNIEXPORT jsize JNICALL Java_MyMath_getMax(JNIEnv * env, jobject obj, jintArray array) {
    jsize* arr = env->GetIntArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    jsize max = arr[0];
    for(jsize i=0; i<size; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    env->ReleaseIntArrayElements(array,arr, 0);
    return max;
}

JNIEXPORT jsize JNICALL Java_MyMath_getMin(JNIEnv * env, jobject obj, jintArray array) {
    jsize* arr = env->GetIntArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    jsize min = arr[0];
    for(jsize i=0; i<size; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    env->ReleaseIntArrayElements(array,arr, 0);
    return min;
}

JNIEXPORT jintArray JNICALL Java_MyMath_sortArrToMax(JNIEnv * env, jobject obj, jintArray array) {
    
    jsize size = env->GetArrayLength(array);
    jintArray arrSorted = env->NewIntArray(size);
    jsize *arrOut = NULL;
    arrOut = env->GetIntArrayElements(array, 0);
    for(jsize i=0; i<size; ++i) {
        for(jsize j=0; j<size-1; ++j) {
            if(arrOut[j+1] < arrOut[i]) {
                jsize tmp = arrOut[j+1];
                arrOut[j+1] = arrOut[i];
                arrOut[i] = tmp;
            }
        }
    }
    env->SetIntArrayRegion(arrSorted, 0, size, arrOut);
    env->ReleaseIntArrayElements(array, arrOut, 0);
    
    return arrSorted;
}

JNIEXPORT jintArray JNICALL Java_MyMath_sortArrToMin(JNIEnv * env, jobject obj, jintArray array) {
    jsize size = env->GetArrayLength(array);
    jintArray arrSorted = env->NewIntArray(size);
    jsize *arrOut = NULL;
    arrOut = env->GetIntArrayElements(array, 0);
    for(jsize i=0; i<size; ++i) {
        for(jsize j=0; j<size-1; ++j) {
            if(arrOut[j+1] > arrOut[i]) {
                jsize tmp = arrOut[j+1];
                arrOut[j+1] = arrOut[i];
                arrOut[i] = tmp;
            }
        }
    }
    env->SetIntArrayRegion(arrSorted, 0, size, arrOut);
    env->ReleaseIntArrayElements(array, arrOut, 0);
    return arrSorted;
}
