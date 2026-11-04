#include <jni.h>
#include <android/log.h>
#include <unistd.h>

#define LOG_TAG "OxideCheat"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

__attribute__((constructor))
void on_library_load() {
    LOGI("УРА! Наша библиотека успешно загружена в игру!");
}
