#include <jni.h>
#include <stdio.h>
#include "NativeCallsClass.h"
#include <iostream>
JNIEXPORT jint JNICALL Java_NativeCallsClass_factorial(JNIEnv * env, jobject obj, jint number)
{
        int temp=0;
        if(number <= 1)
        {
            return 1;
        }

        temp = number * Java_NativeCallsClass_factorial(env, obj, number -1);
        return temp;

}

JNIEXPORT jintArray JNICALL Java_NativeCallsClass_sortArray(JNIEnv * env, jobject obj, jintArray array)
{
    jsize length = env->GetArrayLength(array);
    jint *body = env->GetIntArrayElements(array, 0);
    for (int i=length; i>=0; --i)
    {
        for(int j=0; j<i; ++j)
        {
          if(body[j]> body[j+1])
          {
              std::swap(body[j], body[j+1]);
          }
        }
   }

    env->SetIntArrayRegion(array, 0, length, body);
    env->ReleaseIntArrayElements(array, body, 0);
   return array;

}
   
    
/*JNIEXPORT jintArray JNICALL Java_NativeCallsClass_returnSortArray(JNIEnv * env, jobject obj, jintArray array)
{
    jsize length = env->GetArrayLength(array);
    jintArray returnedArr = env->NewIntArray(length); 
    jint *body=env->GetIntArrayElements(array, 0);
    for (int i=length; i>=0; --i)
    {
        for(int j=0; j<i; ++j)
        {
          if(body[j]> body[j+1])
          {
              std::swap(body[j], body[j+1]);
          }
        }
    }

    env->SetIntArrayRegion(returnedArr, 0, length,body);
    env->ReleaseIntArrayElements(array,returnedArr, 0);
    return returnedArr;
}*/


JNIEXPORT jint JNICALL Java_NativeCallsClass_max
  (JNIEnv * env , jobject obj , jintArray array)
{
              jint* body  = env->GetIntArrayElements(array, 0);
              jsize length = env->GetArrayLength(array);
              jint max = body[0];
              for (int i = 1; i < length; ++i ) 
              {
                if(body[i] > max )
                {
                    max=body[i];
                }
             }

              env->ReleaseIntArrayElements(array, body, 0);
              return max;
}

       
JNIEXPORT jint JNICALL Java_NativeCallsClass_min
  (JNIEnv * env, jobject obj, jintArray array)
{

              jint* body  = env->GetIntArrayElements(array, 0);
              jsize length = env->GetArrayLength(array);
              jint min = body[0];
              for (int i = 1; i < length; ++i ) 
              {
                if(body[i] <min )
                {
                    min=body[i];
                }
             }

              env->ReleaseIntArrayElements(array, body, 0);
              return min;
}


