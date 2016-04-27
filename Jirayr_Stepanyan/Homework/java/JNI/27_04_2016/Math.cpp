#include <jni.h>
#include <iostream>
#include "Math.h"


JNIEXPORT jint JNICALL Java_Math_factorial
  (JNIEnv *env, jclass myClass, jint number)
  {
  	if(number < 0)
  	{
    	return 0;
    } 
    if (number == 0)
    {
    	return 1;
    }
    else 
    {
    	return number * JNICALL Java_Math_factorial(env, myClass, number - 1);
    }
  }

JNIEXPORT jint JNICALL Java_Math_max
  (JNIEnv *env, jclass myClass, jintArray array)
  {
  	jint* body = env->GetIntArrayElements(array, 0);
  	jsize length = env->GetArrayLength(array);
  	jint max = body[0];
  	for(int i = 0; i < length; ++i)
  	{
  		if(body[i] > max)
  		{
  			max = body[i];
  		}
  	}
  	env->ReleaseIntArrayElements(array, body, 0);
  	return max;
  }

JNIEXPORT jint JNICALL Java_Math_min
  (JNIEnv *env, jclass myClass, jintArray array)
  {
  	jint* body = env->GetIntArrayElements(array, 0);
  	jsize length = env->GetArrayLength(array);
  	jint min = body[0];
  	for(int i = 0; i < length; ++i)
  	{
  		if(body[i] < min)
  		{
  			min = body[i];
  		}
  	}
  	env->ReleaseIntArrayElements(array, body, 0);
  	return min;
  }

JNIEXPORT jintArray JNICALL Java_Math_referanceSort
  (JNIEnv *env, jclass myClass, jintArray array)
  {
  	jsize length = env->GetArrayLength(array);
  	jint* body = env->GetIntArrayElements(array, 0);
  	for(int i = 0; i < length; ++i)
	{
		for(int j = 1; j < length; ++j)
		{
			if(body[i] < body[j])
			{
				std::swap(body[i], body[j]);
			}
		}
	}
	env->SetIntArrayRegion(array, 0, length, body);
    env->ReleaseIntArrayElements(array, body, 0);
	return array;
  }

JNIEXPORT jintArray JNICALL Java_Math_sort
  (JNIEnv *env, jclass myClass, jintArray array)
  {
  	jsize length = env->GetArrayLength(array);
  	jintArray arr = env->NewIntArray(length);
  	jint* body = env->GetIntArrayElements(array, 0);
  	for(int i = 0; i < length; ++i)
	{
		for(int j = 1; j < length; ++j)
		{
			if(body[i] > body[j])
			{
				std::swap(body[i], body[j]);
			}
		}
	}
	env->SetIntArrayRegion(arr, 0, length, body);
    env->ReleaseIntArrayElements(array, body, 0);
	return arr;
  }