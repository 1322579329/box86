/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.10) *
 *******************************************************************/
#ifndef __wrappedgdk3TYPES_H_
#define __wrappedgdk3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFiipp_t)(int32_t, int32_t, void*, void*);
typedef int32_t (*iFiippp_t)(int32_t, int32_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gdk_init, vFpp_t) \
	GO(gdk_init_check, iFpp_t) \
	GO(gdk_event_handler_set, vFppp_t) \
	GO(gdk_window_add_filter, vFppp_t) \
	GO(gdk_window_remove_filter, vFppp_t) \
	GO(gdk_input_add, iFiipp_t) \
	GO(gdk_input_add_full, iFiippp_t)

#endif // __wrappedgdk3TYPES_H_
