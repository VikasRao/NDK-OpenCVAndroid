//
// Created by Vikas on 13-10-16.
//
#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <vector>

using namespace std;
using namespace cv;

extern "C" {

jstring
        Java_viki_testcmakefile_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */);


JNIEXPORT void JNICALL Java_viki_testcmakefile_MainActivity_FindFeature(JNIEnv *env,
                                                                        jobject instance,
                                                                        jlong matAddrGr,
                                                                        jlong matAddrRgba);
}