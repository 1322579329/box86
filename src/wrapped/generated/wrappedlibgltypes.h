/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.10) *
 *******************************************************************/
#ifndef __wrappedlibglTYPES_H_
#define __wrappedlibglTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFi_t)(int32_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFipp_t)(int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(glXSwapIntervalMESA, iFi_t) \
	GO(glXGetProcAddress, pFp_t) \
	GO(glXGetProcAddressARB, pFp_t) \
	GO(glDebugMessageCallback, vFpp_t) \
	GO(glDebugMessageCallbackAMD, vFpp_t) \
	GO(glDebugMessageCallbackARB, vFpp_t) \
	GO(glProgramCallbackMESA, vFipp_t)

#endif // __wrappedlibglTYPES_H_
