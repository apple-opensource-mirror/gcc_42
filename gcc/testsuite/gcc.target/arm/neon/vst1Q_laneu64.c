/* APPLE LOCAL file v7 merge */
/* Test the `vst1Q_laneu64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vst1Q_laneu64 (void)
{
  uint64_t *arg0_uint64_t;
  uint64x2_t arg1_uint64x2_t;

  vst1q_lane_u64 (arg0_uint64_t, arg1_uint64x2_t, 1);
}

/* { dg-final { scan-assembler "vst1\.64\[ 	\]+((\\\{\[dD\]\[0-9\]+\\\})|(\[dD\]\[0-9\]+)), \\\[\[rR\]\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
