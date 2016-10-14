//
// Created by Vikas on 13-10-16.
//

#include "testa.h"


jstring
Java_viki_testcmakefile_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ for the real as3";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT void JNICALL Java_viki_testcmakefile_MainActivity_FindFeature(JNIEnv *env,
                                                                        jobject instance,
                                                                        jlong matAddrGr,
                                                                        jlong matAddrRgba) {
//    Mat& src = *(Mat*)matAddrRgba;
//    Mat dst;
//
//    // Convert to gray
//    cvtColor(src, src, CV_BGR2GRAY);
//
//    // Histogram equalization
//    equalizeHist(src, dst);
//
//    // Saturation by 10%
//    float alpha = 1.1f;
//    float beta = 12.75f;
//    dst.convertTo(dst, -1, alpha, beta);

    Mat& mGr  = *(Mat*)matAddrGr;
    Mat& mRgb = *(Mat*)matAddrRgba;
    vector<KeyPoint> v;

    FastFeatureDetector detector(50);
    detector.detect(mGr, v);
    for( unsigned int i = 0; i < v.size(); i++ )
    {
        const KeyPoint& kp = v[i];
        circle(mRgb, Point(kp.pt.x, kp.pt.y), 10, Scalar(255,0,0,255));
    }
}