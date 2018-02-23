#include "Math.h"

/*
 * Class:     Math
 * Method:    getFactorial
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_Math_getFactorial
  (JNIEnv * jenv, jobject jobj, jint num)
{
	long factorial = 1;
	for(int i = 1; i <= num; i++)
	{
		factorial *= i;
	}	
	return factorial;
}

/*
 * Class:     Math
 * Method:    getMax
 * Signature: ([II)I
 */
JNIEXPORT jint JNICALL Java_Math_getMax
  (JNIEnv * jenv, jobject jobj, jintArray array, jint size)
{
	jint *arr = jenv->GetIntArrayElements(array, 0);
	int max = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	jenv->ReleaseIntArrayElements(array, arr, 0);
	return max;
}

/*
 * Class:     Math
 * Method:    getMin
 * Signature: ([II)I
 */
JNIEXPORT jint JNICALL Java_Math_getMin
  (JNIEnv * jenv, jobject jobj, jintArray array, jint size)
{
	jint *arr = jenv->GetIntArrayElements(array, 0);
	int min = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	jenv->ReleaseIntArrayElements(array, arr, 0);
	return min;
}

/*
 * Class:     Math
 * Method:    sortArrToMax
 * Signature: ([II)[I
 */
JNIEXPORT jintArray JNICALL Java_Math_sortArrToMax
  (JNIEnv * jenv, jobject jobj, jintArray array, jint size)
{
	jint *arr = jenv->GetIntArrayElements(array, 0);
	jintArray assortedArray = jenv->NewIntArray(size);
	int tmp;
	for(int i = 1; i < size; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	jenv->SetIntArrayRegion(assortedArray, 0, size, arr);
	jenv->ReleaseIntArrayElements(array, arr, 0);
	return assortedArray;
}

/*
 * Class:     Math
 * Method:    sortArrToMin
 * Signature: ([II)[I
 */
JNIEXPORT void JNICALL Java_Math_sortArrToMin
  (JNIEnv * jenv, jobject jobj, jintArray array, jint size)
{
	jint *arr = jenv->GetIntArrayElements(array, 0);
	int tmp;
        for(int i = 1; i < size; i++)
        {
                for(int j = 0; j < size - 1; j++)
                {
                        if(arr[j] < arr[j+1])
                        {
                                tmp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = tmp;
                        }
                }
        }
	jenv->ReleaseIntArrayElements(array, arr, 0);

       
}
