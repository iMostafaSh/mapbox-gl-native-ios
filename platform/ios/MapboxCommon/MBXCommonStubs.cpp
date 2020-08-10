#include "MBXCommonStubs.hpp"

const char* mapbox_common_get_version_string() {
    return "Placeholder";
}

uint32_t mapbox_common_get_major_version() {
    return UINT32_MAX;
}

uint32_t mapbox_common_get_minor_version() {
    return UINT32_MAX;
}

void mapbox_common_offline_service_register_observer(void* observer) {}

void mapbox_common_offline_service_unregister_observer(void* observer) {}
