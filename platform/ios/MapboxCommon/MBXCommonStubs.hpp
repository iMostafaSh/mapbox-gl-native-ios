#ifndef MBXCommonStubs_hpp
#define MBXCommonStubs_hpp

#include <stdio.h>

#define EXTERN_C_VISIBLE extern "C" __attribute__((visibility ("default")))
#define WEAK_IMPORT __attribute__((weak_import))

EXTERN_C_VISIBLE const char* mapbox_common_get_version_string() WEAK_IMPORT;

EXTERN_C_VISIBLE uint32_t mapbox_common_get_major_version() WEAK_IMPORT;

EXTERN_C_VISIBLE uint32_t mapbox_common_get_minor_version() WEAK_IMPORT;

EXTERN_C_VISIBLE void mapbox_common_offline_service_register_observer(void* observer) WEAK_IMPORT;

EXTERN_C_VISIBLE void mapbox_common_offline_service_unregister_observer(void* observer) WEAK_IMPORT;

#endif /* MBXCommonStubs_hpp */
