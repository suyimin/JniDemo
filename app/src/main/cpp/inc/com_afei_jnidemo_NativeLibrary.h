/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_afei_jnidemo_NativeLibrary */

#ifndef _Included_com_afei_jnidemo_NativeLibrary
#define _Included_com_afei_jnidemo_NativeLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_afei_jnidemo_NativeLibrary
 * Method:    getDataFromNative
 * Signature: ()Lcom/afei/jnidemo/DataBean;
 */
JNIEXPORT jobject JNICALL Java_com_afei_jnidemo_NativeLibrary_getDataFromNative
  (JNIEnv *, jclass);

/*
 * Class:     com_afei_jnidemo_NativeLibrary
 * Method:    transferDataToNative
 * Signature: (Lcom/afei/jnidemo/DataBean;)V
 */
JNIEXPORT void JNICALL Java_com_afei_jnidemo_NativeLibrary_transferDataToNative
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif