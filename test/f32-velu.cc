// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-velu.yaml
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


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U4, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u4, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U8, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u8, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, batch_eq_12) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, batch_div_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, batch_lt_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, batch_gt_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U12, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u12, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U16, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u16, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, batch_eq_20) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, batch_div_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, batch_lt_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, batch_gt_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U20, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u20, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, batch_eq_24) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, batch_div_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, batch_lt_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, batch_gt_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_LUT16_P3_U24, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_lut16_p3_u24, xnn_init_f32_elu_neon_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U4, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u4, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U8, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u8, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U12, batch_eq_12) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, batch_div_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, batch_lt_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, batch_gt_12) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U12, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u12, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U16, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u16, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U20, batch_eq_20) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, batch_div_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, batch_lt_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, batch_gt_20) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U20, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u20, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEON_RR2_P6_U24, batch_eq_24) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, batch_div_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, batch_lt_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, batch_gt_24) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, inplace) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, prescale) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, alpha) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEON_RR2_P6_U24, beta) {
    TEST_REQUIRES_ARM_NEON;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neon_rr2_p6_u24, xnn_init_f32_elu_neon_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U4, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u4, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U8, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u8, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, batch_eq_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, batch_div_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, batch_lt_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, batch_gt_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U12, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u12, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U16, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u16, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, batch_eq_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, batch_div_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, batch_lt_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, batch_gt_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U20, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u20, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, batch_eq_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, batch_div_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, batch_lt_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, batch_gt_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_LUT16_P3_U24, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_lut16_p3_u24, xnn_init_f32_elu_neonfma_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U4, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u4, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U8, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u8, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U12, batch_eq_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, batch_div_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, batch_lt_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, batch_gt_12) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U12, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u12, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U16, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u16, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U20, batch_eq_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, batch_div_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, batch_lt_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, batch_gt_20) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U20, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u20, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VELU__NEONFMA_RR1_P6_U24, batch_eq_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, batch_div_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, batch_lt_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, batch_gt_24) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, inplace) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, prescale) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, alpha) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__NEONFMA_RR1_P6_U24, beta) {
    TEST_REQUIRES_ARM_NEON_FMA;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__neonfma_rr1_p6_u24, xnn_init_f32_elu_neonfma_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U4, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U8, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U12, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U16, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, batch_eq_20) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, batch_div_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, batch_lt_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, batch_gt_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U20, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, batch_div_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_LUT16_P3_U24, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U4, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U8, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U12, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U16, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U20, batch_eq_20) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, batch_div_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, batch_lt_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, batch_gt_20) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U20, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE2_RR2_P6_U24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, batch_div_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, inplace) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, prescale) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, alpha) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE2_RR2_P6_U24, beta) {
    TEST_REQUIRES_X86_SSE2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse2_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U4, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u4, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U8, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u8, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U12, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u12, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U16, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u16, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, batch_eq_20) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, batch_div_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, batch_lt_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, batch_gt_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U20, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u20, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, batch_div_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_LUT16_P3_U24, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_lut16_p3_u24, xnn_init_f32_elu_sse2_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U4, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u4, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U8, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u8, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U12, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u12, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U16, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u16, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U20, batch_eq_20) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, batch_div_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, batch_lt_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, batch_gt_20) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U20, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u20, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__SSE41_RR2_P6_U24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE41;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, batch_div_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, inplace) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, prescale) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, alpha) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__SSE41_RR2_P6_U24, beta) {
    TEST_REQUIRES_X86_SSE41;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__sse41_rr2_p6_u24, xnn_init_f32_elu_sse2_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U8, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u8, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U16, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u16, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U24, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u24, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U32, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u32, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U40, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u40, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT4_P4_PERM_U48, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut4_p4_perm_u48, xnn_init_f32_elu_avx_rr2_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U8, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u8, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U16, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u16, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U24, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u24, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U32, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u32, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U40, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u40, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_LUT16_P3_U48, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_lut16_p3_u48, xnn_init_f32_elu_avx_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U8, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u8, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U16, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u16, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U24, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u24, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U32, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u32, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U40, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u40, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX_RR2_P6_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, inplace) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, prescale) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, alpha) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX_RR2_P6_U48, beta) {
    TEST_REQUIRES_X86_AVX;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx_rr2_p6_u48, xnn_init_f32_elu_avx_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U8, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U16, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U24, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U32, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U40, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U48, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, batch_eq_56) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, batch_div_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, batch_lt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, batch_gt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U56, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U64, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, batch_eq_72) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(72)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, batch_div_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, batch_lt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, batch_gt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 71) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U72, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT4_P4_PERM_U80, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut4_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut4_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U8, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u8, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U16, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u16, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U24, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u24, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U32, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u32, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U40, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u40, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U48, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u48, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, batch_eq_56) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, batch_div_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, batch_lt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, batch_gt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U56, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u56, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U64, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u64, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, batch_eq_72) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(72)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, batch_div_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, batch_lt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, batch_gt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 71) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U72, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u72, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT8_P4_PERM_U80, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut8_p4_perm_u80, xnn_init_f32_elu_avx2_rr1_lut8_p4_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U8, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u8, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U16, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u16, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U24, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u24, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U32, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u32, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U40, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u40, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U48, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u48, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, batch_eq_56) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, batch_div_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, batch_lt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, batch_gt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U56, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u56, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U64, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u64, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, batch_eq_72) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(72)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, batch_div_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, batch_lt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, batch_gt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 71) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U72, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u72, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_LUT16_P3_GATHER_U80, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_lut16_p3_gather_u80, xnn_init_f32_elu_avx2_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U8, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u8, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U16, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u16, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U24, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u24, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U32, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u32, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U40, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 40;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 39) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u40, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U48, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u48, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U56, batch_eq_56) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, batch_div_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, batch_lt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, batch_gt_56) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U56, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 56;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 55) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u56, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U64, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u64, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U72, batch_eq_72) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(72)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, batch_div_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, batch_lt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, batch_gt_72) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 71) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U72, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 72;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 71) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u72, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX2_RR1_P6_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, inplace) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, prescale) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, alpha) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX2_RR1_P6_U80, beta) {
    TEST_REQUIRES_X86_AVX2;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx2_rr1_p6_u80, xnn_init_f32_elu_avx2_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U16, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u16, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U32, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u32, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U48, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u48, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U64, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u64, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U80, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u80, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, batch_eq_96) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(96)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, batch_div_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, batch_lt_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, batch_gt_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 95) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U96, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u96, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, batch_eq_112) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(112)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, batch_div_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, batch_lt_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, batch_gt_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 111) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U112, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u112, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, batch_eq_128) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(128)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, batch_div_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, batch_lt_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, batch_gt_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 127) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_LUT16_P3_PERM_U128, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_lut16_p3_perm_u128, xnn_init_f32_elu_avx512_rr1_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U16, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u16, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U32, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 32;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 31) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u32, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U48, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 48;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 47) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u48, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U64, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 64;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 63) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u64, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U80, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 80;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 79) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u80, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U96, batch_eq_96) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(96)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, batch_div_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, batch_lt_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, batch_gt_96) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 95) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U96, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 96;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 95) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u96, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U112, batch_eq_112) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(112)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, batch_div_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, batch_lt_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, batch_gt_112) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 111) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U112, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 112;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 111) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u112, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VELU__AVX512F_RR1_P6_U128, batch_eq_128) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(128)
      .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, batch_div_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, batch_lt_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, batch_gt_128) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 127) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, prescale) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, alpha) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }

  TEST(F32_VELU__AVX512F_RR1_P6_U128, beta) {
    TEST_REQUIRES_X86_AVX512F;
    const size_t batch_step = 128;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 127) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__avx512f_rr1_p6_u128, xnn_init_f32_elu_avx512_rr1_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_LUT16_P3_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_ARM_RR2_P6_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_arm_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_LUT16_P3_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMSIMD_X86_RR2_P6_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmsimd_x86_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_LUT16_P3_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_FMA_RR2_P6_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_fma_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u4, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u8, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u12, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u16, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u20, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_LUT16_P3_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_lut16_p3_u24, xnn_init_f32_elu_wasmsimd_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u4, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, batch_div_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, batch_lt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, batch_gt_8) {
    const size_t batch_step = 8;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, inplace) {
    const size_t batch_step = 8;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, prescale) {
    const size_t batch_step = 8;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, alpha) {
    const size_t batch_step = 8;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U8, beta) {
    const size_t batch_step = 8;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 7) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u8, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, batch_div_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, batch_lt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, batch_gt_12) {
    const size_t batch_step = 12;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, inplace) {
    const size_t batch_step = 12;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, prescale) {
    const size_t batch_step = 12;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, alpha) {
    const size_t batch_step = 12;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U12, beta) {
    const size_t batch_step = 12;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 11) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u12, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, batch_div_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, batch_lt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, batch_gt_16) {
    const size_t batch_step = 16;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, inplace) {
    const size_t batch_step = 16;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, prescale) {
    const size_t batch_step = 16;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, alpha) {
    const size_t batch_step = 16;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U16, beta) {
    const size_t batch_step = 16;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 15) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u16, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, batch_eq_20) {
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, batch_div_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, batch_lt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, batch_gt_20) {
    const size_t batch_step = 20;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, inplace) {
    const size_t batch_step = 20;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, prescale) {
    const size_t batch_step = 20;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, alpha) {
    const size_t batch_step = 20;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U20, beta) {
    const size_t batch_step = 20;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 19) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u20, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, batch_eq_24) {
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, batch_div_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, batch_lt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, batch_gt_24) {
    const size_t batch_step = 24;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, inplace) {
    const size_t batch_step = 24;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, prescale) {
    const size_t batch_step = 24;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, alpha) {
    const size_t batch_step = 24;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASMRELAXEDSIMD_RR2_P6_U24, beta) {
    const size_t batch_step = 24;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 23) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasmrelaxedsimd_rr2_p6_u24, xnn_init_f32_elu_wasmsimd_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, batch_eq_1) {
    VUnaryMicrokernelTester()
      .batch_size(1)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, batch_gt_1) {
    const size_t batch_step = 1;
    for (size_t batch_size = batch_step + 1; batch_size < 10; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, inplace) {
    const size_t batch_step = 1;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, prescale) {
    const size_t batch_step = 1;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, alpha) {
    const size_t batch_step = 1;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U1, beta) {
    const size_t batch_step = 1;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, batch_eq_2) {
    VUnaryMicrokernelTester()
      .batch_size(2)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, batch_div_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, batch_lt_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, batch_gt_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, inplace) {
    const size_t batch_step = 2;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, prescale) {
    const size_t batch_step = 2;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, alpha) {
    const size_t batch_step = 2;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U2, beta) {
    const size_t batch_step = 2;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, batch_eq_3) {
    VUnaryMicrokernelTester()
      .batch_size(3)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, batch_div_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, batch_lt_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, batch_gt_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, inplace) {
    const size_t batch_step = 3;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, prescale) {
    const size_t batch_step = 3;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, alpha) {
    const size_t batch_step = 3;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U3, beta) {
    const size_t batch_step = 3;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, batch_eq_5) {
    VUnaryMicrokernelTester()
      .batch_size(5)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, batch_div_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, batch_lt_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, batch_gt_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, inplace) {
    const size_t batch_step = 5;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, prescale) {
    const size_t batch_step = 5;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, alpha) {
    const size_t batch_step = 5;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U5, beta) {
    const size_t batch_step = 5;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, batch_eq_6) {
    VUnaryMicrokernelTester()
      .batch_size(6)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, batch_div_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, batch_lt_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, batch_gt_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, inplace) {
    const size_t batch_step = 6;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, prescale) {
    const size_t batch_step = 6;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, alpha) {
    const size_t batch_step = 6;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_LUT16_P3_U6, beta) {
    const size_t batch_step = 6;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U1, batch_eq_1) {
    VUnaryMicrokernelTester()
      .batch_size(1)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U1, batch_gt_1) {
    const size_t batch_step = 1;
    for (size_t batch_size = batch_step + 1; batch_size < 10; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U1, inplace) {
    const size_t batch_step = 1;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U1, prescale) {
    const size_t batch_step = 1;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U1, alpha) {
    const size_t batch_step = 1;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U1, beta) {
    const size_t batch_step = 1;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U2, batch_eq_2) {
    VUnaryMicrokernelTester()
      .batch_size(2)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, batch_div_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, batch_lt_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, batch_gt_2) {
    const size_t batch_step = 2;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, inplace) {
    const size_t batch_step = 2;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, prescale) {
    const size_t batch_step = 2;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, alpha) {
    const size_t batch_step = 2;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U2, beta) {
    const size_t batch_step = 2;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U3, batch_eq_3) {
    VUnaryMicrokernelTester()
      .batch_size(3)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, batch_div_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, batch_lt_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, batch_gt_3) {
    const size_t batch_step = 3;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, inplace) {
    const size_t batch_step = 3;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, prescale) {
    const size_t batch_step = 3;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, alpha) {
    const size_t batch_step = 3;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U3, beta) {
    const size_t batch_step = 3;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, batch_div_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, batch_lt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, batch_gt_4) {
    const size_t batch_step = 4;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, inplace) {
    const size_t batch_step = 4;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, prescale) {
    const size_t batch_step = 4;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, alpha) {
    const size_t batch_step = 4;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U4, beta) {
    const size_t batch_step = 4;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U5, batch_eq_5) {
    VUnaryMicrokernelTester()
      .batch_size(5)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, batch_div_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, batch_lt_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, batch_gt_5) {
    const size_t batch_step = 5;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, inplace) {
    const size_t batch_step = 5;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, prescale) {
    const size_t batch_step = 5;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, alpha) {
    const size_t batch_step = 5;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U5, beta) {
    const size_t batch_step = 5;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VELU__WASM_RR2_P6_U6, batch_eq_6) {
    VUnaryMicrokernelTester()
      .batch_size(6)
      .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, batch_div_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, batch_lt_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, batch_gt_6) {
    const size_t batch_step = 6;
    for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, inplace) {
    const size_t batch_step = 6;
    for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, prescale) {
    const size_t batch_step = 6;
    for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .prescale(prescale)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, alpha) {
    const size_t batch_step = 6;
    for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .alpha(alpha)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }

  TEST(F32_VELU__WASM_RR2_P6_U6, beta) {
    const size_t batch_step = 6;
    for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
      for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
        VUnaryMicrokernelTester()
          .batch_size(batch_size)
          .beta(beta)
          .Test(xnn_f32_velu_ukernel__wasm_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
      }
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, batch_gt_1) {
  const size_t batch_step = 1;
  for (size_t batch_size = batch_step + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, inplace) {
  const size_t batch_step = 1;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, prescale) {
  const size_t batch_step = 1;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, alpha) {
  const size_t batch_step = 1;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U1, beta) {
  const size_t batch_step = 1;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u1, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, batch_div_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, batch_lt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, batch_gt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, inplace) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, prescale) {
  const size_t batch_step = 2;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, alpha) {
  const size_t batch_step = 2;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U2, beta) {
  const size_t batch_step = 2;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u2, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, batch_eq_3) {
  VUnaryMicrokernelTester()
    .batch_size(3)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, batch_div_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, batch_lt_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, batch_gt_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, inplace) {
  const size_t batch_step = 3;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, prescale) {
  const size_t batch_step = 3;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, alpha) {
  const size_t batch_step = 3;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U3, beta) {
  const size_t batch_step = 3;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u3, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, batch_div_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, batch_lt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, batch_gt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, inplace) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, prescale) {
  const size_t batch_step = 4;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, alpha) {
  const size_t batch_step = 4;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U4, beta) {
  const size_t batch_step = 4;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u4, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, batch_eq_5) {
  VUnaryMicrokernelTester()
    .batch_size(5)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, batch_div_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, batch_lt_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, batch_gt_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, inplace) {
  const size_t batch_step = 5;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, prescale) {
  const size_t batch_step = 5;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, alpha) {
  const size_t batch_step = 5;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U5, beta) {
  const size_t batch_step = 5;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u5, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, batch_eq_6) {
  VUnaryMicrokernelTester()
    .batch_size(6)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, batch_div_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, batch_lt_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, batch_gt_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, inplace) {
  const size_t batch_step = 6;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 5) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, prescale) {
  const size_t batch_step = 6;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, alpha) {
  const size_t batch_step = 6;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_LUT16_P3_U6, beta) {
  const size_t batch_step = 6;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_lut16_p3_u6, xnn_init_f32_elu_scalar_rr2_lut16_p3_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U1, batch_gt_1) {
  const size_t batch_step = 1;
  for (size_t batch_size = batch_step + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U1, inplace) {
  const size_t batch_step = 1;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U1, prescale) {
  const size_t batch_step = 1;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U1, alpha) {
  const size_t batch_step = 1;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U1, beta) {
  const size_t batch_step = 1;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u1, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, batch_div_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, batch_lt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, batch_gt_2) {
  const size_t batch_step = 2;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, inplace) {
  const size_t batch_step = 2;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, prescale) {
  const size_t batch_step = 2;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, alpha) {
  const size_t batch_step = 2;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U2, beta) {
  const size_t batch_step = 2;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u2, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U3, batch_eq_3) {
  VUnaryMicrokernelTester()
    .batch_size(3)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, batch_div_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, batch_lt_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, batch_gt_3) {
  const size_t batch_step = 3;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, inplace) {
  const size_t batch_step = 3;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, prescale) {
  const size_t batch_step = 3;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, alpha) {
  const size_t batch_step = 3;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U3, beta) {
  const size_t batch_step = 3;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 2) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u3, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, batch_div_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, batch_lt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, batch_gt_4) {
  const size_t batch_step = 4;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, inplace) {
  const size_t batch_step = 4;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, prescale) {
  const size_t batch_step = 4;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, alpha) {
  const size_t batch_step = 4;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U4, beta) {
  const size_t batch_step = 4;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u4, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U5, batch_eq_5) {
  VUnaryMicrokernelTester()
    .batch_size(5)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, batch_div_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, batch_lt_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, batch_gt_5) {
  const size_t batch_step = 5;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, inplace) {
  const size_t batch_step = 5;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, prescale) {
  const size_t batch_step = 5;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, alpha) {
  const size_t batch_step = 5;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U5, beta) {
  const size_t batch_step = 5;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u5, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}


TEST(F32_VELU__SCALAR_RR2_P6_U6, batch_eq_6) {
  VUnaryMicrokernelTester()
    .batch_size(6)
    .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, batch_div_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = 2 * batch_step; batch_size < 10 * batch_step; batch_size += batch_step) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, batch_lt_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = 1; batch_size < batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, batch_gt_6) {
  const size_t batch_step = 6;
  for (size_t batch_size = batch_step + 1; batch_size < 2 * batch_step; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, inplace) {
  const size_t batch_step = 6;
  for (size_t batch_size = 1; batch_size <= batch_step; batch_size += 5) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, prescale) {
  const size_t batch_step = 6;
  for (float prescale : std::array<float, 2>({0.1f, 10.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .prescale(prescale)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, alpha) {
  const size_t batch_step = 6;
  for (float alpha : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .alpha(alpha)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}

TEST(F32_VELU__SCALAR_RR2_P6_U6, beta) {
  const size_t batch_step = 6;
  for (float beta : std::array<float, 2>({0.3f, 3.0f})) {
    for (size_t batch_size = 1; batch_size <= 5 * batch_step; batch_size += 5) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .beta(beta)
        .Test(xnn_f32_velu_ukernel__scalar_rr2_p6_u6, xnn_init_f32_elu_scalar_rr2_p6_params);
    }
  }
}
