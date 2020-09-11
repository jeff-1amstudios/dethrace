#include "quat.h"
#include "harness.h"

char rscid[48];

br_quat* BrQuatMul(br_quat* q, br_quat* l, br_quat* r) {
    br_scalar x1;
    br_scalar x2;
    br_scalar x3;
    br_scalar x4;
    br_scalar x5;
    br_scalar x6;
    br_scalar x7;
    br_scalar x8;
    br_scalar s;
    br_scalar t;
    NOT_IMPLEMENTED();
}

br_quat* BrQuatNormalise(br_quat* q, br_quat* qq) {
    br_scalar s;
    NOT_IMPLEMENTED();
}

br_quat* BrQuatInvert(br_quat* q, br_quat* qq) {
    NOT_IMPLEMENTED();
}

br_quat* BrQuatSlerp(br_quat* q, br_quat* l, br_quat* r, br_scalar a, br_int_16 spins) {
    int omega;
    int omega_spin;
    br_scalar s_omega;
    br_scalar c_omega;
    br_scalar scale_l;
    br_scalar scale_r;
    br_quat t;
    NOT_IMPLEMENTED();
}

br_matrix34* BrQuatToMatrix34(br_matrix34* mat, br_quat* q) {
    br_scalar xs;
    br_scalar ys;
    br_scalar zs;
    br_scalar wx;
    br_scalar wy;
    br_scalar wz;
    br_scalar xx;
    br_scalar xy;
    br_scalar xz;
    br_scalar yy;
    br_scalar yz;
    br_scalar zz;
    NOT_IMPLEMENTED();
}

br_quat* BrMatrix34ToQuat(br_quat* q, br_matrix34* mat) {
    br_scalar tr;
    br_scalar s;
    int i;
    int j;
    int k;
    NOT_IMPLEMENTED();
}

br_matrix4* BrQuatToMatrix4(br_matrix4* mat, br_quat* q) {
    br_matrix34 tmp;
    NOT_IMPLEMENTED();
}

br_quat* BrMatrix4ToQuat(br_quat* q, br_matrix4* mat) {
    br_matrix34 tmp;
    NOT_IMPLEMENTED();
}
