// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vrsqrt.yaml
//   Generator: tools/generate-vunary-test.py


#include <array>
#include <cmath>
#include <cstddef>
#include <limits>

#include <gtest/gtest.h>
#include "xnnpack.h"
#include "xnnpack/common.h"
#include "xnnpack/isa-checks.h"
#include "xnnpack/microparams-init.h"
#include "xnnpack/microparams.h"
#include "xnnpack/vunary.h"
#include "vunary-microkernel-tester.h"


TEST(F32_VRSQRT__SCALAR_RSQRT_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U1, batch_gt_1) {
  const size_t batch_step = 1;
  for (size_t batch_size = batch_step + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U1, inplace) {
  const size_t batch_step = 1;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
  }
}


TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_div_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_lt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_gt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, inplace) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}


TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_div_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_lt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_gt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, inplace) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VRSQRT__NEON_RSQRT_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u4);
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u4);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u4);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u4);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u4);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VRSQRT__NEON_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u8);
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u8);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u8);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u8);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u8);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VRSQRT__NEON_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u16);
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u16);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u16);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u16);
    }
  }

  TEST(F32_VRSQRT__NEON_RSQRT_U16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__neon_rsqrt_u16);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, inplace) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_SSE;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_FMA3;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64
