// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPU__DPI_H_
#define VERILATED_VCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CSR.sv:23:34
    extern void set_csr_ptr(const svOpenArrayHandle m1, const svOpenArrayHandle m2, const svOpenArrayHandle m3, const svOpenArrayHandle m4);
    // DPI import at /home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/Regfile.sv:18:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
