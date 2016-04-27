#include <jni.h>
#include <iostream>
#include "MathJNI.h"

//Factorial
JNIEXPORT jint JNICALL Java_MathJNI_factorial
  (JNIEnv * env, jobject obj, jint number) {
	
	if(number == 1 || number == 0) {
		return 1;
	}
	else {
		return number*factorial(JNIEnv * env, jobject obj, number -1);
	}
}


