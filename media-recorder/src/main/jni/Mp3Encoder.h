/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef _Included_Mp3Encoder
#define _Included_Mp3Encoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com.mp3.recorder.recorderlib.main.whosmyqueen.Mp3Encoder
 * Method:    init
 */
JNIEXPORT void JNICALL Java_com_zlw_main_recorderlib_recorder_mp3_Mp3Encoder_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

JNIEXPORT jint JNICALL Java_com_zlw_main_recorderlib_recorder_mp3_Mp3Encoder_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

JNIEXPORT jint JNICALL Java_com_zlw_main_recorderlib_recorder_mp3_Mp3Encoder_flush
  (JNIEnv *, jclass, jbyteArray);

JNIEXPORT void JNICALL Java_com_zlw_main_recorderlib_recorder_mp3_Mp3Encoder_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif