#include "drfile.h"
#include <stdlib.h>

br_filesystem* gOld_file_system;
br_filesystem gFilesystem;

// Offset: 0
// Size: 64
void* DRStdioOpenRead(char* name, br_size_t n_magics, br_mode_test_cbfn* identify, int* mode_result) {
    NOT_IMPLEMENTED();
}

// Offset: 64
// Size: 56
void* DRStdioOpenWrite(char* name, int mode) {
    NOT_IMPLEMENTED();
}

// Offset: 120
// Size: 46
void DRStdioClose(void* f) {
    NOT_IMPLEMENTED();
}

// Offset: 168
// Size: 70
br_size_t DRStdioRead(void* buf, br_size_t size, unsigned int n, void* f) {
    br_size_t result;
    NOT_IMPLEMENTED();
}

// Offset: 240
// Size: 70
br_size_t DRStdioWrite(void* buf, br_size_t size, unsigned int n, void* f) {
    br_size_t result;
    NOT_IMPLEMENTED();
}

// Offset: 312
// Size: 187
void InstallDRFileCalls() {
    NOT_IMPLEMENTED();
}
