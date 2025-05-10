#ifndef SELFLIB_H
#define SELFLIB_H

#include "stdio.h"

#define ASSERT(call) {\
    const cudaError_t error = call;\
    if(error != cudaSuccess) {\
        printf("ERROR: %s:%d", __FILE__, __LINE__);\
        printf("code:%d,reason:%s\n", error, cudaGetErrorString(error));\
        exit(1);\
    }\
}

#endif