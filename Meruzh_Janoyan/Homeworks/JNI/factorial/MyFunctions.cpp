#include <jni.h>
#include "MyFunctions.h"
#include <algorithm>
#include <vector>  

JNIEXPORT jint JNICALL Java_MyFunctions_factorial(JNIEnv *env, jobject jObj, jint number){
  	
  	if(number<=1) return 1;
  	int f=1;
  	for (int i=1;i<=number;++i) f*=i; 

  	return f;

  }


JNIEXPORT jint JNICALL Java_MyFunctions_max(JNIEnv *env, jobject jObj, jintArray array){
	
	jsize len = env->GetArrayLength(array);
	jint *arr = env->GetIntArrayElements(array, 0);
	if(!len) return -1; 
	
	int max=arr[0];
	for(int i=1;i<len;++i){
		if(arr[i]>max){
			max=arr[i];
		}
	}

	env->ReleaseIntArrayElements(array,arr, 0);
	
	return max;

}

JNIEXPORT jint JNICALL Java_MyFunctions_min(JNIEnv *env, jobject jObj, jintArray array){
	jsize len = env->GetArrayLength(array);
	jint *arr = env->GetIntArrayElements(array, 0);
	if(!len) return -1; 
	
	int min=arr[0];
	for(int i=1;i<len;++i){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	env->ReleaseIntArrayElements(array,arr, 0);

	return min;
}

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} compare;

JNIEXPORT jintArray JNICALL Java_MyFunctions_sort(JNIEnv *env, jobject jObj, jintArray array){
	jsize len = env->GetArrayLength(array);
	jint *arr = env->GetIntArrayElements(array, 0);
	if(!len) return NULL; 

	std::vector<int> myvector (arr, arr+len); 
	std::sort (myvector.begin(), myvector.end(),compare); 

	jint *tmp = &myvector[0];
	jintArray res = env->NewIntArray( myvector.size() );
	env->SetIntArrayRegion( res, 0, myvector.size(), tmp );

	env->ReleaseIntArrayElements(array,arr, 0);

	return res;
}

JNIEXPORT void JNICALL Java_MyFunctions_sortReferance(JNIEnv *env, jobject jObj, jintArray array){
	jsize len = env->GetArrayLength(array);
	jint *arr = env->GetIntArrayElements(array, 0);
	if(!len) return; 

	std::vector<int> myvector (arr, arr+len); 
	std::sort (myvector.begin(), myvector.end(),compare); 

	jint *tmp = &myvector[0];
	env->SetIntArrayRegion( array, 0, myvector.size(), tmp );

}