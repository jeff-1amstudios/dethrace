#include "genfile.h"
#include "harness.h"
#include <stdlib.h>

br_file_struct_member file_info_FM[2];
br_file_struct file_info_F;
br_file_enum_member file_type_FM[10];
br_file_enum file_type_F;
char rscid[50];

int FopRead_END(br_datafile* df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    return 1;
}

int FopWrite_END(br_datafile* df) {
    NOT_IMPLEMENTED();
}

int FopWrite_FILE_INFO(br_datafile* df, br_uint_32 type) {
    file_info fi;
    NOT_IMPLEMENTED();
}
